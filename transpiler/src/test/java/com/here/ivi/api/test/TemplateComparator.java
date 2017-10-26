/*
 * Copyright (C) 2017 HERE Global B.V. and its affiliate(s). All rights reserved.
 *
 * This software, including documentation, is protected by copyright controlled by
 * HERE Global B.V. All rights are reserved. Copying, including reproducing, storing,
 * adapting or translating, any or all of this material requires the prior written
 * consent of HERE Global B.V. This material also contains confidential information,
 * which may not be disclosed to others without prior written consent of HERE Global B.V.
 *
 */

package com.here.ivi.api.test;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;
import java.util.regex.Pattern;
import java.util.stream.Collectors;
import lombok.Builder;
import lombok.Singular;
import org.junit.Assert;

/**
 * Compare template snippets with generated template. Multiple expected snippets can be added and
 * then compared at once. The order is ignored, so is whitespace between individual snippets.
 *
 * <p>Example Usage: TemplateComparator.expect("snippet 1").expect("snippet
 * 2").ignoreUnexpected().assertEquals("actual");
 * TemplateComparator.expect("snippet").assertEquals("Test failure message", "snippet");
 */
public final class TemplateComparator {
  public static final String INCLUDES = "#include.*";

  private static final String UNMATCHED_HEADER =
      "=============== following blocks could not be matched ================\n";
  private static final String UNEXPECTED_HEADER =
      "= following blocks remained unmatched after applying ignore patterns =\n";
  private static final String IGNORE_PATTERNS_HEADER =
      "======================== ignore patterns =============================\n";
  private static final String UNMATCHED_BLOCK_SEPARATOR =
      "\n======================= unmatched block ============================\n";
  private static final String IGNORED_BLOCK_SEPARATOR =
      "\n======================= ignored pattern ============================\n";

  private List<String> expectedBlocks = new LinkedList<>();
  private List<Pattern> ignoredBlocks = new LinkedList<>();
  private List<String> actualSplits = new LinkedList<>();

  @Builder
  @SuppressWarnings("unused")
  private static TemplateComparator create(
      @Singular("expect") List<String> expectedBlocks,
      @Singular("ignore") List<String> ignoredBlocks) {
    TemplateComparator comparator = new TemplateComparator();
    comparator.expectedBlocks = expectedBlocks;
    comparator.ignoredBlocks =
        ignoredBlocks.stream().map(Pattern::compile).collect(Collectors.toList());
    return comparator;
  }

  /** Shortcut for builder().expect(expected) */
  public static TemplateComparatorBuilder expect(String expected) {
    return builder().expect(expected);
  }

  public void assertContainsExpected(String actual) {
    ignoredBlocks.add(Pattern.compile(".*"));
    assertContainsExpectedOnly(actual);
  }

  public void assertContainsExpectedOnly(String actual) {
    actualSplits.add(actual);
    List<String> unmatchedExpectedBlocks = new ArrayList<>(expectedBlocks);

    ListIterator<String> block = unmatchedExpectedBlocks.listIterator();
    while (block.hasNext()) {
      if (findAndSplit(block.next(), actualSplits)) {
        block.remove();
      }
    }

    if (!unmatchedExpectedBlocks.isEmpty()) {
      Assert.assertEquals(
          UNMATCHED_HEADER + String.join(UNMATCHED_BLOCK_SEPARATOR, expectedBlocks),
          UNMATCHED_HEADER + String.join(UNMATCHED_BLOCK_SEPARATOR, actualSplits));
    }

    for (Pattern ignore : ignoredBlocks) {
      actualSplits =
          actualSplits.stream().flatMap(ignore::splitAsStream).collect(Collectors.toList());
    }
    List<String> remaining =
        actualSplits.stream().filter(split -> !split.trim().isEmpty()).collect(Collectors.toList());

    if (!remaining.isEmpty()) {
      Assert.assertEquals(
          IGNORE_PATTERNS_HEADER
              + String.join(
                  IGNORED_BLOCK_SEPARATOR,
                  ignoredBlocks.stream().map(Pattern::toString).collect(Collectors.toList())),
          UNEXPECTED_HEADER + String.join(UNMATCHED_BLOCK_SEPARATOR, remaining));
    }
  }

  /**
   * Find the expected snippet in the actual text. If it is found the actual text is split up into a
   * block before and after the found block. This is done to avoid matching a block which only
   * exists because a previous match was removed in between.
   *
   * @param expected Expected code block
   * @return true if a match was found, false otherwise
   */
  private static boolean findAndSplit(String expected, List<String> actualSplits) {
    ListIterator<String> split = actualSplits.listIterator();
    while (split.hasNext()) {
      String actual = split.next();
      int index = actual.indexOf(expected);
      if (index != -1) {
        String before = actual.substring(0, index);
        String after = actual.substring(index + expected.length());
        split.set(before);
        split.add(after);
        return true;
      }
    }
    return false;
  }
}