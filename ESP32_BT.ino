#include "BluetoothSerial.h"

BluetoothSerial serialBT;

void setup() {
  serialBT.begin("Christina");
  pinMode(2, OUTPUT);
}

char cmd = '0';

void loop() {
  if(serialBT.available()) {
    cmd = serialBT.read();
  }
  if(cmd == '1') {
    digitalWrite(2, HIGH);
    delay(1000);
  }
  if(cmd == '0') {
    digitalWrite(2, LOW);
    delay(1000);
  }
  if(cmd== '2'){
    for(int i=0; i<100; i++) {
      digitalWrite(2, HIGH);
     delay(100);
      digitalWrite(2, LOW);
     delay(100);
    }
  }
}
