/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.apis

import io.kotlintest.shouldBe
import io.kotlintest.specs.ShouldSpec

import org.openapitools.client.apis.UserApi
import org.openapitools.client.models.User

class UserApiTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of UserApi
        //val apiInstance = UserApi()

        // to test createUser
        should("test createUser") {
            // uncomment below to test createUser
            //val body : User =  // User | Created user object
            //apiInstance.createUser(body)
        }

        // to test createUsersWithArrayInput
        should("test createUsersWithArrayInput") {
            // uncomment below to test createUsersWithArrayInput
            //val body : kotlin.collections.List<User> =  // kotlin.collections.List<User> | List of user object
            //apiInstance.createUsersWithArrayInput(body)
        }

        // to test createUsersWithListInput
        should("test createUsersWithListInput") {
            // uncomment below to test createUsersWithListInput
            //val body : kotlin.collections.List<User> =  // kotlin.collections.List<User> | List of user object
            //apiInstance.createUsersWithListInput(body)
        }

        // to test deleteUser
        should("test deleteUser") {
            // uncomment below to test deleteUser
            //val username : kotlin.String = username_example // kotlin.String | The name that needs to be deleted
            //apiInstance.deleteUser(username)
        }

        // to test getUserByName
        should("test getUserByName") {
            // uncomment below to test getUserByName
            //val username : kotlin.String = username_example // kotlin.String | The name that needs to be fetched. Use user1 for testing.
            //val result : User? = apiInstance.getUserByName(username)
            //result shouldBe ("TODO")
        }

        // to test loginUser
        should("test loginUser") {
            // uncomment below to test loginUser
            //val username : kotlin.String = username_example // kotlin.String | The user name for login
            //val password : kotlin.String = password_example // kotlin.String | The password for login in clear text
            //val result : kotlin.String? = apiInstance.loginUser(username, password)
            //result shouldBe ("TODO")
        }

        // to test logoutUser
        should("test logoutUser") {
            // uncomment below to test logoutUser
            //apiInstance.logoutUser()
        }

        // to test updateUser
        should("test updateUser") {
            // uncomment below to test updateUser
            //val username : kotlin.String = username_example // kotlin.String | name that need to be deleted
            //val body : User =  // User | Updated user object
            //apiInstance.updateUser(username, body)
        }

    }
}
