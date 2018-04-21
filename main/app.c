#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "nvs.h"
#include "nvs_flash.h"
#include "esp_log.h"

extern void bt_main();
extern void wifi_main();

void app_main(void)
{
     // Initialize NVS.
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK( ret );

    xTaskCreate(&bt_main, "btTask", 2000, NULL, 0, NULL);
    xTaskCreate(&wifi_main, "wifiTask", 2000, NULL, 0, NULL);

    while(true){
        ESP_LOGI("MAIN", "RUNNING MAIN.");
        vTaskDelay(1000);
    }
}