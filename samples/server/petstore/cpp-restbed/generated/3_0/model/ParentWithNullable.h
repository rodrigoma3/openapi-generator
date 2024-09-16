/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.9.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ParentWithNullable.h
 *
 * 
 */

#ifndef ParentWithNullable_H_
#define ParentWithNullable_H_



#include <string>
#include <memory>
#include <vector>
#include <array>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ParentWithNullable 
{
public:
    ParentWithNullable() = default;
    explicit ParentWithNullable(boost::property_tree::ptree const& pt);
    virtual ~ParentWithNullable() = default;

    ParentWithNullable(const ParentWithNullable& other) = default; // copy constructor
    ParentWithNullable(ParentWithNullable&& other) noexcept = default; // move constructor

    ParentWithNullable& operator=(const ParentWithNullable& other) = default; // copy assignment
    ParentWithNullable& operator=(ParentWithNullable&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// ParentWithNullable members

    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getNullableProperty() const;
    void setNullableProperty(std::string value);

protected:
    std::string m_Type = "";
    std::string m_NullableProperty = "";
};

std::vector<ParentWithNullable> createParentWithNullableVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<ParentWithNullable>(const ParentWithNullable& val) {
    return val.toPropertyTree();
}

template<>
inline ParentWithNullable fromPt<ParentWithNullable>(const boost::property_tree::ptree& pt) {
    ParentWithNullable ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* ParentWithNullable_H_ */
