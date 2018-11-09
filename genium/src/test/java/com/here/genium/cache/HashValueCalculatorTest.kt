/*
 * Copyright (C) 2016-2018 HERE Europe B.V.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 * License-Filename: LICENSE
 */

package com.here.genium.cache

import org.junit.Assert.assertEquals
import org.junit.Before
import org.junit.Test
import org.junit.runner.RunWith
import org.mockito.ArgumentMatchers.any
import org.mockito.Mockito.`when`
import org.mockito.Mockito.mock
import org.mockito.Mockito.verify
import org.powermock.api.mockito.PowerMockito
import org.powermock.core.classloader.annotations.PrepareForTest
import org.powermock.modules.junit4.PowerMockRunner
import java.security.MessageDigest
import java.security.NoSuchAlgorithmException

@RunWith(PowerMockRunner::class)
@PrepareForTest(HashValueCalculator::class, MessageDigest::class)
class HashValueCalculatorTest {
    private var messageDigest = mock(MessageDigest::class.java)

    @Before
    @Throws(NoSuchAlgorithmException::class)
    fun setupMessageDigest() {
        PowerMockito.mockStatic(MessageDigest::class.java)

        PowerMockito.`when`(MessageDigest.getInstance(any())).thenReturn(messageDigest)
        `when`(messageDigest.digest()).thenReturn(TEST_OUTPUT)
    }

    @Test
    fun calculateHashValue() {
        // Act
        val result = HashValueCalculator.calculateHashValue(TEST_INPUT)

        // Assert
        assertEquals(TEST_OUTPUT, result)
        verify(messageDigest).update(TEST_INPUT.toByteArray())
        verify(messageDigest).digest()
    }

    companion object {
        private const val TEST_INPUT = "someString"
        private val TEST_OUTPUT = TEST_INPUT.toByteArray()
    }
}
