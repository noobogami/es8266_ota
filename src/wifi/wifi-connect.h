#ifndef WifiConnect_h
#define WifiConnect_h

#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include "ESP8266WiFiType.h"

class WifiConnect {
public:
  static void Connect(String ssid, String password);
  static bool IsConnected();
};

#endif