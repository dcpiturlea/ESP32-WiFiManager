#include <WiFi.h>
#include <DNSServer.h>
#include <WebServer.h>
#include<WiFiManager.h>


void setup() {
  Serial.begin(115200);
  WiFiManager wifiManager;
  wifiManager.autoConnect("AutoConnectAP");
  Serial.println("Connected.....");

}

void loop() {
  // put your main code here, to run repeatedly:

}
