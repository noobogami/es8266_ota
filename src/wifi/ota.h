#ifndef OTA_h
#define OTA_h

#include <WiFiUdp.h>
#include <ArduinoOTA.h>

class OTA {
public:
  static void Setup();
  static void Check();
};

#endif