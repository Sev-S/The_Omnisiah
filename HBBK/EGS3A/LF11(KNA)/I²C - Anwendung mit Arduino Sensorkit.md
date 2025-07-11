*04.12.2024; Loos, Smolka*
**Situationsbeschreibung**

	In Ihrer Firma steht ein Arduino-kompatibles Senssor-Kit zum Testen zur Verfügung. Mit dem Sensor-Kit könen für verschiedene Messaufgaben unterschiedliche Sensoren eingestetzt werden, die über den I²C-Bus mit einem Mikrocontroller verbunden sind.

1)

| Datum      | Thema                     | Bearbeitungsstand |
| ---------- | ------------------------- | ----------------- |
| 04.12.2024 | Inbetriebnahme, TPM36     | [x]               |
| 04.12.2024 | 3 Sensoren mit Sensor-Kit | [x]               |
| 04.12.2024 | I²C-Bus: 3 Sensoren+LCD   | [x]               |
| 04.12.2024 | Wiki und Logikanalyser    | [x]               |
|            | zwei LCDs am I²C-Bus      | [ ]               |

2)
	a) Laut der offiziellen Dokumentation von Seeed kann man 4 I²C-Bus Adressen ansteuern. D.h. in der Theorie kann man 2 RGB LCD-Displays anschließen, da jeweils eine Adresse für das RGB genutzt wird und eine für das Display selbst. Allerdings kann man von unseren gegebenen Displays nicht zwei Verschiedene betrieben werden können, da die I²C-Adresse der LCDs vom Hersteller unveränderlich festgelegt wurden.
	b) Mit einem I²C-Modul mit passendem Bildschirmtreiber, das zwischen Arduino und Display gesteckt wird.
	c) In der Software kann man die verschiedenen I²C-Adressen über ein I²C-Scanner Programm auf einem Arduino herausfinden. Dies ist ein standard Sketch in der Arduino IDE und gibt die Adressen aus. Auf der Hardware selbst findet man die I²C-Adresse nicht, allerdings steht diese immer im Datenblatt: Die RGB-Adresse 0x62 und die LCD-Adresse 0x3E.
Bei unserem RGB LCD kann man nicht die I²C-Addresse ändern, weshalb man hier nicht verschiedenen Text auf das Display schreiben.


**Unser Code**

	#include <Wire.h>
	#include "rgb_lcd.h"
	#include "Arduino_SensorKit.h"
	#include "LCD_I2C.h"
	rgb_lcd lcd;
	LCD_I2C display(0x27, 16, 4);
	#define Environment Environment_I2C
	const int colorR = 255;
	const int colorG = 120;
	const int colorB = 120;
	/*
	Please note that you need to have version v1.0.10 installed
	to use the DHT20 (black sensor)
	*/
	//uncomment line below if using DHT20 (black sensor)
	void setup() {
	//uncomment line below if using DHT20 (black sensor
	Wire.begin();
	//uncomment line below if you're connecting your DHT20 to pin a different than 3
	//Environment.setPin(4);
	Serial.begin(9600);
	Environment.begin(); 
	// set up the LCD's number of columns and rows:
	lcd.begin(16,2);
	lcd.setRGB(colorR, colorG, colorB);
	display.begin();
	display.backlight();
	// Print a message to the LCD.
	delay(1000);
	}
	void lcd1() {
	lcd.setCursor(0,0);
	lcd.print("Temp=");
	lcd.print(Environment.readTemperature()); //print temperature
	lcd.println(" C ");
	lcd.setCursor(0,1);
	lcd.print("Humidity=");
	lcd.print(Environment.readHumidity());
	lcd.println(" %");
	delay(2000);
	}
	void lcd2() {
	display.setCursor(0,0);
	display.print("TUTUTUDU............MAX VERSTAPPEN!!!");
	delay(2000);
	}
	void loop() {
	lcd1();
	lcd2();
	delay(1000);
	}

Um das zweite LCD-Display im Code einzubinden ist die Bibliothek "LCD_I2C" nötig. Wenn man diese eingebunden hat, muss man wie bei dem RGB LCD-Display, das Objekt "display" deklarieren um die Funktionen aus der Bibliothek nutzen zu können. Abgesehen davon ist es relativ einfach 2 LCDs zu verbinden. 

**Arbeitsanweisung**
*Benötigte Materialien:*
- Arduino Uno
- USB-B Kabel
- Grove RGB LCD-Display
- LCD-Display
- Grove Sensorkit
- Arduino IDE
- PC/Laptop
*Durchführung:*
1) Man startet die Arduino IDE und lädt den Code der letzten Aufgabe
2) Dieser wird um die Bibliothek "LCD_I2C" erweitert
3) Man definiert das Objekt "display" für die Funktionen des LCD-Displays
4) Der Code wird um den Standard Code für das LCD-Display ergänzt
5) Nur der Inhalt des display.print() wurde verändert
6) Der Arduino wird mit dem PC verbunden und das Programm auf den Arduino geschrieben