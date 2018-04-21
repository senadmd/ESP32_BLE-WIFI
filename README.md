ESP-IDF MODIFIED GATT CLIENT (BLE) & WIFI SMARTCONFIG DEMO
========================
_Changes based on ESP-IDF Examples_
* Added BLE service filter based on UUID
* Added continuous characteristic read
* Modified BLE disconnected event so that client/ESP tries to reestablish connection
* Both BLE GATT Client and WIFI SmartConfig run simultaneously demonstrating dual use of Wifi/BLE
_Usage_
* Run `make menuconfig` and chose custom partition table using (partitions.csv)
* Flash using `make flash`

