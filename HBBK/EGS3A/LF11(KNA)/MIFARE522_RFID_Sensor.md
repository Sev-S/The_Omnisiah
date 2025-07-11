*Smolka, Loos, Gerhard* **02.07.2025**
## Probleme:
- Dadurch, dass ich auf einer Linux Maschine arbeite musste ich bevor wir irgendwas auf den Arduino schreiben können folgenden Command im Terminal laufen:
```
sudo chmod a+rw /dev/ttyACM0
```
- Danach klappt es Programme auf den Arduino zu übertragen
- Im Internet findet man nur Dokumentation zu einem RC522 Sensor; laut der eingebauten KI von Brave sind diese gleich, weshalb wir im weiteren mit dieser Dokumentation arbeiten
- Auf einem Zettel in der Box steht, dass der Kondensator C21 kaputt sein -> muss getestet werden
## Der RFID Reader/Writer
### Wichtige Daten
- Laut dem Datenblatt haben wir die erste Version des Sensors (201)
	- Die zweite Generation hätte minimale Vorteile, die uns aber nicht behindern sollten ([hier kann man diese unter Punkt 1.1 nachlesen](https://www.nxp.com/docs/en/data-sheet/MFRC522.pdf))
- Der Leser unterstützt $13,56\ MHz$
- Kann mit ISO/IEC 14443 A/MIFARE Karten kommunizieren
- Unterstützt SPI, UART und I²C als host interfaces
- [Weitere Infos gibt es im Datenblatt](https://www.nxp.com/docs/en/data-sheet/MFRC522.pdf)
## Der Code
### Version 1
- Der Code wurde nahezu 1:1 von der [offiziellen Arduino Dokumentation](https://docs.arduino.cc/learn/communication/uart/) kopiert
## Quellen 
- https://www.instructables.com/RC522-and-PN532-RFID-Basics/
- https://docs.arduino.cc/learn/communication/uart/
- https://docs.arduino.cc/learn/communication/uart/