// -------------------------------------------------------------------------------------------------
//
//
// -------------------------------------------------------------------------------------------------
#pragma once
#include "gluecodium/Export.h"
#include "gluecodium/TypeRepository.h"
#include <cstdint>
#include <string>
#include <system_error>
namespace smoke {
/**
 * This is some very useful interface.
 * \deprecated Unfortunately, this interface is deprecated. Use ::smoke::Comments instead.
 */
class _GLUECODIUM_CPP_EXPORT DeprecationComments {
public:
    DeprecationComments();
    virtual ~DeprecationComments() = 0;
public:
    /**
     * This is some very useful enum.
     * \deprecated Unfortunately, this enum is deprecated. Use ::smoke::Comments::SomeEnum instead.
     */
    enum class SomeEnum {
        /**
         * Not quite useful
         * \deprecated Unfortunately, this item is deprecated.
         * Use ::smoke::Comments::SomeEnum::USELESS instead.
         */
        USELESS
    };
    /**
     * This is some very useful typedef.
     * \deprecated Unfortunately, this typedef is deprecated. Use ::smoke::Comments::Usefulness instead.
     */
    using Usefulness = bool;
    /**
     * This is some very useful struct.
     * \deprecated Unfortunately, this struct is deprecated. Use ::smoke::Comments::SomeStruct instead.
     */
    struct _GLUECODIUM_CPP_EXPORT SomeStruct {
        /**
         * How useful this struct is.
         * \deprecated Unfortunately, this field is deprecated.
         * Use ::smoke::Comments::SomeStruct::some_field instead.
         */
        ::smoke::DeprecationComments::Usefulness some_field;
        SomeStruct( );
        SomeStruct( const ::smoke::DeprecationComments::Usefulness some_field );
    };
    /**
     * This is some very useful constant.
     * \deprecated Unfortunately, this constant is deprecated. Use ::smoke::Comments::VERY_USEFUL instead.
     */
    _GLUECODIUM_CPP_EXPORT static const ::smoke::DeprecationComments::Usefulness VERY_USEFUL;
public:
    /**
     * This is some very useful method that measures the usefulness of its input.
     * \deprecated Unfortunately, this method is deprecated.
     * Use ::smoke::Comments::some_method_with_all_comments instead.
     * \param[in] input Very useful input parameter
     * \return Usefulness of the input
     */
    virtual ::smoke::DeprecationComments::Usefulness some_method_with_all_comments( const ::std::string& input ) = 0;
    /**
     * Gets some very useful property.
     * \deprecated Unfortunately, this property's getter is deprecated.
     * Use ::smoke::Comments::is_some_property instead.
     * \return Some very useful property.
     */
    virtual ::smoke::DeprecationComments::Usefulness is_some_property(  ) const = 0;
    /**
     * Sets some very useful property.
     * \deprecated Unfortunately, this property's setter is deprecated.
     * Use ::smoke::Comments::set_some_property instead.
     * \param[in] value Some very useful property.
     */
    virtual void set_some_property( const ::smoke::DeprecationComments::Usefulness value ) = 0;
};
_GLUECODIUM_CPP_EXPORT ::std::error_code make_error_code( ::smoke::DeprecationComments::SomeEnum value ) noexcept;
}
namespace std
{
template <>
struct is_error_code_enum< ::smoke::DeprecationComments::SomeEnum > : public std::true_type { };
}
namespace gluecodium {
_GLUECODIUM_CPP_EXPORT TypeRepository& get_type_repository(const ::smoke::DeprecationComments*);
}
