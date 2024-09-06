#include "wifi-connect.h"

void WifiConnect::Connect(String ssid, String password) {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("Connection Failed! Rebooting...");
    delay(1000);
    ESP.restart();
  }
}

bool WifiConnect::IsConnected() {
    return WiFi.status() == WL_CONNECTED;
}