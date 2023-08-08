/*
 * OpenAPI Petstore
 *
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * API version: 1.0.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package petstoreserver




// AnObject - An array 3-deep.
type AnObject struct {

	Tag Tag `json:"tag,omitempty"`

	// An array of pet.
	Pet []Pet `json:"Pet,omitempty"`
}

// AssertAnObjectRequired checks if the required fields are not zero-ed
func AssertAnObjectRequired(obj AnObject) error {
	if err := AssertTagRequired(obj.Tag); err != nil {
		return err
	}
	for _, el := range obj.Pet {
		if err := AssertPetRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertAnObjectConstraints checks if the values respects the defined constraints
func AssertAnObjectConstraints(obj AnObject) error {
	return nil
}
