/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AnotherFakeApi.h
 *
 * 
 */

#ifndef AnotherFakeApi_H_
#define AnotherFakeApi_H_


#include <memory>
#include <utility>
#include <exception>
#include <functional>

#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/service.hpp>
#include <corvusoft/restbed/settings.hpp>

#include "Client.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

///
/// Exception to flag problems in the handlers
///
class  AnotherFakeApiException: public std::exception
{
public:
    AnotherFakeApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace AnotherFakeApiResources {
/// <summary>
/// To test special tags
/// </summary>
/// <remarks>
/// To test special tags and operation ID starting with number
/// </remarks>
class  Another_fakeDummyResource: public restbed::Resource
{
public:
    Another_fakeDummyResource(const std::string& context = "/v2");
    virtual ~Another_fakeDummyResource() = default;

    Another_fakeDummyResource(
        const Another_fakeDummyResource& other) = default; // copy constructor
    Another_fakeDummyResource(Another_fakeDummyResource&& other) noexcept = default; // move constructor

    Another_fakeDummyResource& operator=(const Another_fakeDummyResource& other) = default; // copy assignment
    Another_fakeDummyResource& operator=(Another_fakeDummyResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, Client>(
        Client & client)> handler_PATCH_func =
            [](Client &) -> std::pair<int, Client>
                { throw AnotherFakeApiException(501, "Not implemented"); };


protected:
    //////////////////////////////////////////////////////////
    // As an alternative to setting the `std::function`s    //
    // override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, Client> handler_PATCH(
        Client & client);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);
    virtual std::string extractFormParamsFromBody(const std::string& paramName, const std::string& body);

    virtual std::pair<int, std::string> handleAnotherFakeApiException(const AnotherFakeApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);

    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, std::multimap<std::string, std::string>& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_PATCH_internal(const std::shared_ptr<restbed::Session> session);
};

} /* namespace AnotherFakeApiResources */

using AnotherFakeApiAnother_fakeDummyResource [[deprecated]] = AnotherFakeApiResources::Another_fakeDummyResource;

//
// The restbed service to actually implement the REST server
//
class  AnotherFakeApi
{
public:
    explicit AnotherFakeApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~AnotherFakeApi();

    std::shared_ptr<AnotherFakeApiResources::Another_fakeDummyResource> getAnother_fakeDummyResource();

    void setResource(std::shared_ptr<AnotherFakeApiResources::Another_fakeDummyResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setAnotherFakeApiAnother_fakeDummyResource(std::shared_ptr<AnotherFakeApiResources::Another_fakeDummyResource> spAnotherFakeApiAnother_fakeDummyResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<AnotherFakeApiResources::Another_fakeDummyResource> m_spAnother_fakeDummyResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* AnotherFakeApi_H_ */

