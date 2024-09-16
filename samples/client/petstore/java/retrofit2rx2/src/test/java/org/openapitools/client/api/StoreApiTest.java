package org.openapitools.client.api;

import org.openapitools.client.ApiClient;
import org.openapitools.client.model.Order;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.time.LocalDate;
import java.time.OffsetDateTime;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for StoreApi
 */
public class StoreApiTest {

    private StoreApi api;

    @BeforeEach
    public void setup() {
        api = new ApiClient().createService(StoreApi.class);
    }

    /**
     * Delete purchase order by ID
     *
     * For valid response try integer IDs with value &lt; 1000. Anything above 1000 or nonintegers will generate API errors
     */
    @Test
    public void deleteOrderTest() {
        String orderId = null;
        // api.deleteOrder(orderId);

        // TODO: test validations
    }
    /**
     * Returns pet inventories by status
     *
     * Returns a map of status codes to quantities
     */
    @Test
    public void getInventoryTest() {
        // Map<String, Integer> response = api.getInventory();

        // TODO: test validations
    }
    /**
     * Find purchase order by ID
     *
     * For valid response try integer IDs with value &lt;&#x3D; 5 or &gt; 10. Other values will generate exceptions
     */
    @Test
    public void getOrderByIdTest() {
        Long orderId = null;
        // Order response = api.getOrderById(orderId);

        // TODO: test validations
    }
    /**
     * Place an order for a pet
     *
     * 
     */
    @Test
    public void placeOrderTest() {
        Order body = null;
        // Order response = api.placeOrder(body);

        // TODO: test validations
    }
}
