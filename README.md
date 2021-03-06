ESP-IDF MODIFIED GATT CLIENT (BLE) & WIFI SMARTCONFIG DEMO
========================
The BLE GATT Client and WIFI SmartConfig samples are configured to run simultaneously using the threading functionality of ESP32 thereby demonstrating the dual use of Wifi/BLE on the ESP32-module.

Based on following samples:  
https://github.com/espressif/esp-idf/tree/master/examples/wifi/smart_config  
https://github.com/espressif/esp-idf/tree/master/examples/bluetooth/gatt_client

##### Changes
* Added BLE service filter based on UUID
* Added continuous characteristic read
* Added byteArray to hex-string conversion
* Modified BLE disconnected event (_ESP_GATTC_DISCONNECT_EVT_) so that client/ESP tries to reestablish connection

##### Usage
* Run `make menuconfig` and choose custom partition table using (partitions.csv)
* Flash using `make flash`

