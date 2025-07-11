18.12.2024; Loos, Smolka
**Situationsbeschreibung**

	In Ihrer Firma steht ein Arduino-kompatibles Sensor-Kit zum Testen zur Verfügung. Mit dem Sensor-Kit können für verschiedene Messaufgaben unterschiedliche Sensoren eingesetzt werden, die über den I²C-Bus mit einem Mikrocontroller verbunden sind.

a) Software (Arduino-Sketch) in den Arduino mit Sensor-Kit laden und alle I²C-Adressen auslesen. Erstellen Sie eine Tabelle, in der jede I²C-Adresse einer Hardware-Komponente zugeordnet ist.

| I²C-Adresse) | Hardware-Komponente               |
| ------------ | --------------------------------- |
| 0x3          | LCD Display (RGB-Adresse)         |
| 0x19         | Beschleunigungssensor             |
| 0x38         | Temperatur- & Feuchtigkeitssensor |
| 0x3C         | OLED-Display                      |
| 0x3E         | LCD-Display (LCD-Adresse)         |
| 0x62         | LCD-Display (RGB-Adresse)         |
| 0x70         | LCD-Display (LCD-Display)         |
| 0x77         | Luftdruck-Sensor                  |

b) Mit welcher Geschwindigkeit (Bus-Takt) arbeitet der I²C-Bus (Arduino-Sensorkit)?
- Standard Mode: 100 kHz
- Fast Mode: 400 kHz
- Fast Mode Plus: 1 MHz
- High Speed Mode: 3,4 MHz
- Ultra Fast Mode: 5 MHz(nur unidirektional)

c) Wie kann der Bus-Takt überprüft werden?
- Logic-Analyzer
- Digitale Oszilloskope mit I²C-Schnittstelle
- Ein I²C-Speed-Tester Programm für den Arduino schreiben

Wir haben den Beispiel-Code von der Website kopiert und mit unserem Code für den Temperatursensor mit LCD-Anzeige erweitert. Dies war allerdings nicht nötig, da auch ohne die Erweiterung der I²C-Scanner die richtigen Adressen ausgibt.
Die Adressen sind oben in der Tabelle aufgeführt. Anhand von offizieller Dokumentation haben wir die Adressen mit dem LCD-Display und den Sensoren des Kits abgeglichen und in die Tabelle eingetragen.