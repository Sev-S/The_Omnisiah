*Smolka, Loos; 15.01.2025*
1. Untersuchen Sie verschiedene Möglichkeiten Daten seriell zu senden!
a) Welche Datenübertragungsverfahren haben Sie bisher kennengelernt?
- USB
- $I^2C$
- SPI
- OneWire
- ISDN
- HDMI
- Display-Port

b) Welche Verfahren werden bei der Ansteuerung der Anzeigen über "74HC595", "TM1638" und "Max7219" angewendet?

74HC595:
- Kommuniziert über SPI
- Über den DS-Pin werden Daten von einem µ-Controller an das IC entweder als High- oder Low-Pegel gesendet 
- Zum Speichern der Daten muss eine positive Taktflanke am Shift Clock Pin (SHCP) anliegen
	-> Das erste Bit des Speicherblocks wird beschrieben, um das nächste Bit zu beschreiben muss an SHCP erst kurz ein Low-Signal anliegen.
```C
#define PIN_SHIFT 8 // connected to SHCP 
#define PIN_STORE 9 // connected to STCP 
#define PIN_DATA 10 // connected to DS 

int ledPattern[8] = {1, 0, 1, 0, 0, 1, 1, 1}; 

void setup() { 

	pinMode(PIN_STORE, OUTPUT); 
	pinMode(PIN_SHIFT, OUTPUT); 
	pinMode(PIN_DATA, OUTPUT); 
	
	for (int i=0; i<8; i++) { 
	// set shift pin to "wait" 
	digitalWrite(PIN_SHIFT, LOW); 
	
	// writing to data pin 
	digitalWrite(PIN_DATA, ledPattern[i]); 
	
	// rising slope -> shifting data in the register 
	digitalWrite(PIN_SHIFT, HIGH);
} 

// write whole register to output 
digitalWrite(PIN_STORE, HIGH); } 
void loop () {

}
```

TM1638:
- Ansteuerung über Mikrocontroller, z.B. Arduino oder AVR Mikrocontroller
- Kommuniziert über SPI mit 8 Bit-Befehlen
- Ansteuerung funktioniert über 5 Pins:
	- Vcc (5 Volt)
	- GND
	- STB (Chip Select Input)
	- CLK (Clock Input)
	- DIO (Data Input/Output)
	- 8 Segment Anzeigen und 8 LEDs
- Bibliothek TM1638.h wird benötigt
```C
#include <TM1638.h> 

#define PIN_DATA 10 
#define PIN_CLOCK 9 
#define PIN_STROBE 8 
TM1638 module = TM1638(PIN_DATA, PIN_CLOCK, PIN_STROBE); 
byte mode = 0; 
unsigned long startTime; 
void setup() { 
	startTime = millis(); 
	module.setupDisplay(true, 7); 
} 

void loop() { 
byte buttons = module.getButtons();
unsigned long runningSecs = (millis() - startTime) / 100; 

// button pressed - change mode 
if (buttons != 0) { 
	mode++; 
	mode%=8; 
	module.clearDisplay(); 
	module.setLEDs(0); 
	} 
	switch (mode) { 
		case 0: 
			module.setDisplayToDecNumber(runningSecs, 1 << 7);
			 break;
		case 1: 
			module.setDisplayToDecNumber(runningSecs, 1 << 6, false); 
			break; 
		case 2: 
			module.setDisplayToHexNumber(runningSecs, 1 << 5); 
			break; 
		case 3: 
			module.setDisplayToHexNumber(runningSecs, 1 << 4, false); 
			break; 
		case 4: 
			module.setDisplayToBinNumber(runningSecs, 1 << 3); 
			break; 
		case 5: 
			module.clearDisplayDigit((runningSecs - 1) % 8, 0); 
			module.setDisplayDigit(runningSecs % 8, runningSecs % 8, 0); 
			break; 
		case 6: 
			char s[8]; 
			sprintf(s, "Secs %03d", runningSecs % 999); 
			module.setDisplayToString(s); 
			break; 
		case 7: 
			if (runningSecs % 2 == 0) {
				module.setDisplayToString("TM1638 "); 
			} 
			else { 
			module.setDisplayToString("LIBRARY "); 
			} 
			module.setLED(0, (runningSecs - 1) % 8); 
			module.setLED(1 + runningSecs % 3, runningSecs % 8); 
			break; 
		case 8: 
			default: module.setDisplayToError(); 
			break; 
	} 
}
```

Max7219:
- kommuniziert über SPI mit 16-Bit Befehlen über DIN- und CLK-Eingänge (erstes Byte enthält Befehl, zweites Byte die Daten); one-way Kommunikation, da es kein MISO (Master In Slave Out) Pin gibt.
- Bei Verschaltung mehrerer Module werden die Daten an das nächste weitergeleitet
- Benötigt die LedControl.h Bibliothek
```C
#include <LedControl.h>
//12= data pin(DIn), 11= CLK Pin, 10= Load/CS Pin, 1 = num of devices
LedControl lc88=LedControl(12,11,10,1); 

void setup(){
  lc88.shutdown(0,false); // Wake up! 0= index of first device;
  lc88.setIntensity(0,2);
  lc88.clearDisplay(0);
  delay(500);
}

void loop(){
  for(int row=0; row<=7; row++){
    lc88.setLed(0,row,0,true);
    delay(250); 
  }
  for(int col=0; col<=7; col++){
    lc88.setLed(0,0,col,true);
    delay(250); 
  }
  delay(500);
  lc88.clearDisplay(0);
  delay(2000); 
}
```

#### Praxistest Max7219
Wir haben das Display mit einem Max7219 als Steuer-IC an den Arduino verbunden (DIN an D12, CLK an D11, CS an D10).
Auf den Arduino haben wir zuerst das oben geschriebene Testprogramm gespielt, welches alle Segmente der einzelnen 7-Segment-Anzeigen durchläuft. Dieses musste leicht verändert werden, damit alle Segmente durchlaufen, die Änderung war allerdings nicht schwer (die zweite for-Schleife musste in die erste hinzugefügt werden).
Nachdem wir die Funktion festgestellt haben, wurde der unten geschriebene Code auf den Arduino gespielt, der das heutige (und nur das heutige Datum) anzeigen kann. Die Verbindung zwischen Arduino und Display blieben gleich.
![[Max.jpg|500]]

```C
#include <LedControl.h>

//12= data pin(DIn), 11= CLK Pin, 10= Load/CS Pin, 1 = num of devices

LedControl lc88=LedControl(12,11,10,1);

  

void setup(){

lc88.shutdown(0,false); // Wake up! 0= index of first device;

lc88.setIntensity(0,2);

lc88.clearDisplay(0);

delay(500);

}

  

void zero(int i){

lc88.setLed(0,i,1,true);

for(int j=2; j<7; j++){

lc88.setLed(0,i,j,true);

}

}

  

void one(int i){

lc88.setLed(0,i,2,true);

lc88.setLed(0,i,3,true);

}

  

void two(int i){

lc88.setLed(0,i,1,true);

lc88.setLed(0,i,2,true);

lc88.setLed(0,i,4,true);

lc88.setLed(0,i,5,true);

lc88.setLed(0,i,7,true);

}

  

void onedot(int i){

lc88.setLed(0,i,0,true);

lc88.setLed(0,i,2,true);

lc88.setLed(0,i,3,true);

}

  

void five(int i){

lc88.setLed(0,i,1,true);

lc88.setLed(0,i,3,true);

lc88.setLed(0,i,4,true);

lc88.setLed(0,i,6,true);

lc88.setLed(0,i,7,true);

}

  

void fivedot(int i){

lc88.setLed(0,i,0,true);

lc88.setLed(0,i,1,true);

lc88.setLed(0,i,3,true);

lc88.setLed(0,i,4,true);

lc88.setLed(0,i,6,true);

lc88.setLed(0,i,7,true);

}

  

void dot(int i){

lc88.setLed(0,0,i,true);

}

  

void loop(){

five(0);

two(1);

zero(2);

two(3);

onedot(4);

zero(5);

dot(6);

fivedot(6);

one(7);

delay(1000);

lc88.clearDisplay(0);

}
```

Auf die selbe Weise wie die 7-Segment-Anzeige wurde eine 8x8 LED-Matrix mit dem Arduino verbunden. Der Code hat für diese die selbe setup Funktion wie die für die 7-Segment-Anzeige. Für die loop Funktion wurden verschiedene 2 dimensionale Arrays gebaut, die in Binär Code Bilder enthalten. Diese Bilder werden in Form von Schleifen auf das Display geschrieben. Hierbei war die Schwierigkeit den Wert des Arrays an einer bestimmten Stelle auszulesen um herauszufinden ob dieser eine 0 oder eine 1 enthält. Ein weiterer (eher dummer) Fehler war es, den Namen des Arrays in der aufrufenden Funktion nicht zu ändern, dadurch hat die Funktion auf ein Array zugegriffen, das nicht existiert.
![[creeper.webp]]

2. In der Mikrocontroller-Technik wird neben dem $I^2C$-Bus oft auch die Datenübertragung per SPI-Bus eingesetzt.
a) Erstellen Sie ein kurzes Wiki, welches die Datenkommunikationm mit dem SPI-Bus erklärt.
#### SPI WIKI ####
**Bedeutung und Randbedingungen**
- Steht für Serial Peripheral Interface
- Bus-Protokoll zur schnellen Datenübertragung zwischen einem µ-controller (Master) und einem Peripheriegerät (Slave)
- 4-Draht System

**Übertragung von Daten**
- SCK gibt das Taktsignal
- MOSI & MISO sind Datenleitungen zwischen Master und Slave
- Arbeitet im Vollduplexmodus -> Senden und Empfangen kann gleichzeitig passieren
- höchstwertiges Bit wird zuerst übertragen
- Datenübertragung Erfolgt synchron im Takt des Taktsignals
- Wegen Effizienz gibt es keine Start und Stopp Bits
- Zwei wichtige Einstellungen für Kommunikation:
	- CPOL (Clock Polarity): Legt fest ob HIGH- oder LOW-Signal als aktives Signal fungieren
	- CPHA (Clock Phase): Legt fest ob bei ersten oder zweiten Flanke übertragen wird 

**Taktfrequenz und Bitrate**
zwischen 10kHz und 20MHz

b) Vergleichen Sie den $I^2C$-Bus mit dem SPI-Bus, ==zum Beispiel== bezüglich Übertragungsgeschwindigkeit, Hardware (Bus-Aufbau, im µC/IC) und Software (Programmieraufwand).
- SPI ist um einiges schneller als I²C
- I²C benötigt nur 2 Kabel (weniger Hardware)
- SPI kann verschiedene Slaves auswählen, während I²C alle gleich ansteuert
- I²C ist Multi-Master, SPI ist Single-Master
- bei I²C können Daten in beider Richtungen, aber nicht gleichzeitig übertragen werden, bei SPI schon
- Für I²C benötigt man Pull-Up-Widerstände
- I²C sendet bestätigungsbits um die Übertragung zu verifizieren