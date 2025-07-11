#include <U8x8lib.h> // Header file is part of the required U8g2 library. Arduino IDE: Install U8g2 library --> Go to "Tools", then "Manage Libraries.".
#include "BluetoothSerial.h" // Bluetooth library
#include <iostream>


#define LED 16 // LED is on Digital Pin 6 (Grove Beginner Kit: 4)
#define Buzzer 15 // Buzzer is on Digital Pin 5 
#define Button 14 // Button is on Digital Pin 4 (Grove Beginner Kit: 6)
#define Light 13 // Light sensor is on Analog Pin 4 (Grove Beginner Kit: Analog pin 6)

U8X8_SSD1306_128X64_ALT0_HW_I2C u8x8(/* reset=*/ U8X8_PIN_NONE); // Part of the initialization of the OLED Display 0.96" 
BluetoothSerial serialBT; 

bool toggle = false; // This variable represents the toggle state of the LED and Buzzer

void setup() {
  
  serialBT.begin("Tiffany"); //Name des Bluetooth Sensors

  pinMode(LED, OUTPUT); // LED is an output
  digitalWrite(LED, LOW); // LED is set to zero --> "out"
  
  pinMode(Buzzer, OUTPUT); // Buzzer is also an output
  digitalWrite(LED, LOW); // Buzzer is set to zero --> "out"
  
  pinMode(Button, INPUT); // Button is an input
  pinMode(Light, INPUT); // Light sensor is also an input

  u8x8.begin(); // Display is now ready to use
  u8x8.setFlipMode(1); // Technically, the display is mounted upside down on the Grove module. Therefore, we flip it.
  u8x8.setFont(u8x8_font_chroma48medium8_r); // font type 
}

  char cmd = '0';

void loop() {
  if(serialBT.available()) {
    cmd = serialBT.read();
  }
  if(cmd == '1') {
    serialBT.write('penis');
  }

  int light_measured = analogRead(Light); // Light is measured
  int frequency = map(light_measured, 0, 4095, 1000, 10); // Amount of light is converted to the turn on/off frequency of the LED (and buzzer). 
  // Additional explanation: No light (sensor value: 0) will switch on/off the LED each 1000ms
  // A lot of light (sensor value => 750) will  switch on/off the LED each 10ms ("LED starts flickering")

  u8x8.clear(); // Display is cleared in each step to remove old values
  
  u8x8.setCursor(0, 0); // Cursor of display is set to first position (first row)
  String light = "Light: " + String(light_measured); // String with measured light value
  u8x8.print(light.c_str()); // string is printed to display

  u8x8.setCursor(0, 1); // Cursor is set to the second row 
  String freq = "Frequency: " + String(frequency);
  u8x8.print(freq.c_str());
  digitalWrite(LED, toggle); // The LED is turned on/off based on the current value of the toggle variable
  if (digitalRead(Button) == HIGH) { // if the button is pressed, some additional code is executed (Buzzer)
    digitalWrite(Buzzer, toggle);  // Buzzer get's also a toggle value. This will result in a short audible 'click' (synchronized with the LED status)
  }    
  toggle = !toggle; // Toggle value is inverted; E.g. if toggle is LOW, the new value will be HIGH.
  
  delay(frequency); // The code is executed again after a waiting time that corresponds to the calculated frequency representation. 
  // Additional remark: The previous line is a minor weakness of the code, if the amount of light/frequency is low, the reaction time of the programm is also low as it is in 'delay' state
}