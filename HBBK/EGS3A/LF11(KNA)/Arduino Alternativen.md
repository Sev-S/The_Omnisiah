**Loos,Smolka,Gerhard 26.02.2025**
*Situationsbeschreibung*
Bei einem Projekt mit dem Arduino für umfangreiche Steuerung von Antrieben in einem 3D-Drucker mit einem LCD-Display wurde festgestellt, dass der Programmspeicher vom Arduino zu klein und die Rechenleistung zu gering ist. Daher stellt sich die Frage welche alternative Mikrocontroller könnten anstelle eines Arduino-Systems verwendet werden?


1. Welche wesentlichen Leistungsdaten hat ein Standard-Arduino? Welche Varianten gibt es?

a) Nennen Sie die fünf wichtigsten Leistungsdaten.

ATMega328P:
- 16MHz Taktfrequenz der CPU
- 32kB Flash-Speicher
- 2 kB SRAM
- 1 kB EEPROM

ATMega16U2:
- 8-Bit CPU
- 16 kB ISP Flash-Speicher
- 512 B EEPROM
- 5112 B SRAM
- debugWire interface

Für beide:
- 8-Bit Timer
- 16-Bit Timer
- USART Generator
- SPI-/$I^2C$-Schnittstelle
- Watchdog Timer
- PWM-Kanäle


b) Nennen Sie vier weitere Mikrocontroller, die als Varianten des Standard-System angesehen werden können. Geben Sie auch die entsprechenden Leistungsdaten an.

Arduino Pro Mini:
- entweder 3.3V 8MHz oder 5V 16MHz

Arduino Pro Micro:
- ATMega32U4 8-Bit
- 32 kB Flash-Speicher
- 1 kB EEPROM
- 2.5 kB SRAM
- AD-Wandler
- PWM

Arduino Nano:
- ATMega328 8-Bit 16 MHz
- 32 kB Falsh
- 2 kB SRAM
- 1 kB EEPROM
- RTC mit Oszillator
- PWM-Kanäle
- USART
- SPI Interface

Arduino Mega:
- ATMega2560 16 MHz
- 256 kB Flash-Speicher
- 4 kB EEPROM
- 8 kB SRAM
- RTC mit Oszillator
- PWM-Kanäle
- USART
- SPI Interface


2. Was sind 32-Bit Mikrocontroler?

a) Nennen Sie mindestens 4 Hersteller, die diese anbieten.

- NXP
- STMicroelectronics
- Infineon
- Microchip
- Renesas

b) Welche Vorteile und Nachteile habe diese $\mu C$ gegenüber einem Arduino-Controller?


| Name              | Vorteile                                                            | Nachteile                       |
| ----------------- | ------------------------------------------------------------------- | ------------------------------- |
| NXP (Kinetis)     | - Bluetooth, Zigbee, LoRa, WLan<br>- Hardware- Sicherheitsmodule    | -komplexe Softwareentwicklung   |
| STM (STM32)       | - Bekannt für Energieffizienz                                       | - Nicht für Einsteiger geeignet |
| Infineon (AURIX)  | - ISO 26262 für Sicherheit<br>- Intergration für Energievwerwaltung | -komplexe Entwicklungsumgebung  |
| Microchip (PIC32) | - Viele eigene Entwicklungstools<br>- Bluetooth, Zigbee, WLan       | -kostenpflichtiger Compiler     |
| Renesas (RL78)    | - Niedrigstromgeräte                                                | -lückenhafte Dokumentation      |


3. Beispielprojekt mit "[wokwi.com](https://wokwi.com/)"
 
a) Wählen Sie einen 32-Bit-$\mu C$ für ein erstes Projekt aus.

- Wir wählen den STM32 Nucleo L031/C031C6

b) Simulieren, testen und erweitern Sie dieses Projekt.

- Wir nehmen das LCD-Display Testprojekt und spielen mit Textgröße, -farbe und -position.

c) Beschreiben Sie Ihre Erfahrungen, die Sie mit dem Projekt gemacht haben!

- Wir haben auch versucht eine RGB-LED in verschiedenen Farben blinken zulassen. Dies hat nicht geklappt und die Simulation hat Code-Befehle nicht richtig befolgt.
```C++
void setup() {

pinMode(8, OUTPUT);

pinMode(9, OUTPUT);

pinMode(10, OUTPUT);

}

  

void loop() {

delay(5000);

digitalWrite(8, HIGH);

digitalWrite(10, HIGH);

digitalWrite(9, LOW);

delay(5000);

}
```
- Bei dem LCD-Programm hat alles wie erwartet funktioniert und man konnte die Parameter nach belieben ändern.
```C++
#include "SPI.h"

#include "Adafruit_GFX.h"

#include "Adafruit_ILI9341.h"

  

#define TFT_DC 2

#define TFT_CS 3

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

  

void setup() {

tft.begin();

  

tft.setCursor(0, 120);

tft.setTextColor(ILI9341_ORANGE);

tft.setTextSize(2);

tft.println("EGS3A ist die BESTE Klasse!!!");

  

tft.setCursor(24, 160);

tft.setTextColor(ILI9341_GREEN);

tft.setTextSize(1);

tft.println("Die EGS2A ist gruselig");

}

  

void loop() { delay(10); }
```
