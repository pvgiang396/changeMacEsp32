#include <WiFi.h>
#include <esp_wifi.h>

const char* ap_ssid = "Yan123";
const char* ap_password = "";
uint8_t customMac[] = {0x00, 0x1e, 0x78, 0x08, 0x26, 0x3c};

void setup() {
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ap_ssid, ap_password);
  esp_wifi_set_mac(WIFI_IF_AP, customMac);
}

void loop() {
  // Your main code here
}
