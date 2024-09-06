#include "src/wifi/wifi-connect.h"
#include "src/wifi/ota.h"


void setup() {
  Serial.begin(115200);

  WifiConnect::Connect("ssid", "password");
  OTA::Setup();

  // Other Setup
}

double lastTime = 0;
void loop() {
  if (WifiConnect::IsConnected()) {
    OTA::Check();
  }


  if (millis() - lastTime > 1000){
    lastTime = millis();

    // Interval code here

  }
}