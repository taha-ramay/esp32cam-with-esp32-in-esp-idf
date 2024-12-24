#include "esp_err.h"
#include "esp_event.h"
#include "esp_wifi.h"
#include "esp_http_server.h"

// Function to initialize Wi-Fi in both AP (Access Point) and STA (Station) mode


// Function to initialize the Wi-Fi in AP mode only
#define WIFI_SSID "StormFiber"       // Replace with your Wi-Fi SSID
#define WIFI_PASSWORD "master@1183"
#define Maximum_retry 4
void wifi_init_sta(void);
