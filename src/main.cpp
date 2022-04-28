#include <Arduino.h>
#include <SoftwareSerial.h>

#include "common.h"

SoftwareSerial bluetooth { PIN_BLUETOOTH_RX, PIN_BLUETOOTH_TX, false };

void setup() {
  Serial.begin(115200);
  bluetooth.begin(115200);
}

void loop() {
  Serial.println("IN D LOOP");
  bluetooth.println("IN DA LOOP");
  delay(1000);
  // put your main code here, to run repeatedly:
}