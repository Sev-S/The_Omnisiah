**Loos, Smolka, Gerhard** *18.06.2025*
## Situationsbeschreibung
In ihrer Abteilung ist eine "wilde" Diskussion über Vor- und Nachteile von einer WLAN-Vernetzung entbrannt. Jeder hat seine Meinung aber die Argumente sind oft nicht nachvollziehbar.
Was können Sie zur Veranschaulichung bei einer drahtlosen Kommunikation, wie z.B. WLAN beitragen?
## Aufgaben:
### 1. Recherchieren Sie verschiedene Möglichkeiten Daten drahtlos über einen Mikrocontroller zu senden bzw. zu empfangen!
#### a) Welche drahtlosen Datenübertragungsverfahren haben Sie bisher kennengelernt? (Nur Aufzählung!)
- WLAN -> Wireless Local Area Network
- Bluetooth
- NFC -> Near Field Communication
- Radiowellen
- ZigBee -> Smart Home 
- Handynetzwerke (5G, LTE, 4G, $\dots$)
- Infrarot (IR)
#### b) Erstellen Sie eine Übersicht, für die wichtigsten (mindestens drei) Verfahren zur drahtlosen Kommunikation mit einem Mikrocontroller. Geben Sie das prinzipielle Verfahren, Frequenzbereich, Anwendungsgebiet, Vor- und Nachteil(e) tabellarisch an!

| Verfahren | Frequenzbereich                     | Anwendungsgebiet                                                 | Vorteile                                                                              | Nachteile                                                                                                              |
| --------- | ----------------------------------- | ---------------------------------------------------------------- | ------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------- |
| Bluetooth | - 2,4 GHz                           | - Mobile Endgeräte<br>- Smart Home<br>- Kopfhörer, Uhren, etc.   | - Energieeffizient<br>- Kompatibilität<br>- Mit Mikrocontroller leicht zu integrieren | - Kurze Reichweite<br>- Interferrenz wenn viele geräte gleichzeitig genutzt werden                                     |
| WLAN      | - 2,4 GHz<br>- 5 GHz                | - Internetverbindung<br>- Smart Home                             | - Hohe Datenrate (bis zu 600 MBit/s)<br>- große Verfügbarkeit                         | - Energieverbrauch<br>- Komplexe Implementierung<br>- China Geräte nutzen in Deutschland nicht erlaubte Frequenzkanäle |
| LoRa(WAN) | - 433 MHz<br>- 868 MHz<br>- 915 MHz | - Landwirtschaft<br>- Sensorik<br>- Steuerung von "Smart-Cities" | - bis zu 10 km Reichweite<br>- geringer Energieverbrauch                              | - Niedrige Datenrate (max. 50 kbit/s)<br>- Latenz durch Datenrate                                                      |
| NFC       | - 13,56 MHz                         | - Kontaktloses Zahlen<br>- Personalausweis, etc.                 | - sehr geringer Stromverbrauch                                                        | - Kleine Reichweite (10cm)<br>- Begrenzte Datenrate (400 kBit/s)                                                       |

### 2. Wählen Sie ein drahtloses Verfahren aus, welches Sie messtechnisch untersuchen!
Wir wählen die Datenübertragung über NFC.
#### a) Wie kann die Reichweite von dem Verfahren getestet werden?
##### Aufbau
- Arduino (oder anderer Mikrocontroller) mit NFC-Lesegerät und passendem Code
- NFC-Tag zum lesen oder ein Gerät, das über NFC gelesen werden kann
- der Arduino sendet im Loop eine NFC-Anfrage und der Tag antwortet
##### Durchführung
- NFC-Tag in verschiedenen Abständen vom Lesegerät halten (ca 0,5 cm Schritte)
- festgestellte Distanz:
#### b) Auf welche Störungen reagiert die drahtlose Kommunikation wesentlich?
##### Durch Recherche:
- Metallflächen
	- Reflektieren oder absorben das Magnetfeld des Lesegeräts
- Ausrichtung der Antenne
- Störung durch andere RFID- und NFC-Geräte
##### Praktische Tests:
- Metallflächen: 
	- Der NFC-Chip wurde innerhalb des bereits festgestelltem Bereich über das Lesegerät gehalten
	- Festgestellte Auswirkung von:
#### c) Welche Besonderheiten sind bei der drahtlosen Kommunikation zu berücksichtigen?
- Die kurze Reichweite, die Messtechnisch festgestellt wurde (typischerweise 1-5 cm, seltener 10 cm)
- Hohes Potential zur Verschlüsselung, häufig allerdings unverschlüsselt
- Kommunikation auf Basis von Induktivität
- Schnelle Kommunikation, da Nähe zum passenden Gerät reicht zur Verbindung
#### d) Protokollieren Sie ihre Erkenntnisse nachvollziehbar!
s.o.
### 2.5. Wählen Sie ein drahtloses Verfahren aus, welches Sie messtechnisch untersuchen!
Wir wählen die Datenübertragung über Bluetooth.
#### a) Wie kann die Reichweite von dem Verfahren getestet werden?
##### Aufbau
- Arduino (oder anderer Mikrocontroller) mit Bluetooth-Empfänger und passendem Code
- Ein Bluetooth fähiges Gerät (Smartphone) mit der "Serial Bluetooth Terminal" App
##### Durchführung
- Den Arduino so programmieren, dass die eingebaute LED leuchtet solange die Bluetooth-Verbindung besteht
- Soweit möglich: die Entfernung bis zu der die Verbindung besteht empirisch ermitteln
- Mit verschiedenen "Wänden" die Auswirkung von Hindernissen ausprobieren 
#### b) Auf welche Störungen reagiert die drahtlose Kommunikation wesentlich?
- Andere Geräte im 2,4 GHz Band 
- Elektromagnetische Einflüsse
- Reflexion des eigenen Signals
#### c) Welche Besonderheiten sind bei der drahtlosen Kommunikation zu berücksichtigen?
- Paarungsverfahren? Wie ein normales Bluetoothgerät?
- Latenz (schwer festzustellen)
#### d) Protokollieren Sie ihre Erkenntnisse nachvollziehbar!
s.o.