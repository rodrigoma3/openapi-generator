=begin
#Echo Server API

#Echo Server API

The version of the OpenAPI document: 0.1.0
Contact: team@openapitools.org
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 7.2.0-SNAPSHOT

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::FormApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'FormApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::FormApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of FormApi' do
    it 'should create an instance of FormApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::FormApi)
    end
  end

  # unit tests for test_form_integer_boolean_string
  # Test form parameter(s)
  # Test form parameter(s)
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :integer_form 
  # @option opts [Boolean] :boolean_form 
  # @option opts [String] :string_form 
  # @return [String]
  describe 'test_form_integer_boolean_string test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for test_form_oneof
  # Test form parameter(s) for oneOf schema
  # Test form parameter(s) for oneOf schema
  # @param [Hash] opts the optional parameters
  # @option opts [String] :form1 
  # @option opts [Integer] :form2 
  # @option opts [String] :form3 
  # @option opts [Boolean] :form4 
  # @option opts [Integer] :id 
  # @option opts [String] :name 
  # @return [String]
  describe 'test_form_oneof test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

end
