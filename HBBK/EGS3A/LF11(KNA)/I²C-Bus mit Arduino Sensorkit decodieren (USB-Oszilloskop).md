20.11.2024; Loos, Smolka
*Situationsbeschreibung*
In Ihrer Firma steht ein Arduino-kompatibles Sensor-Kit zum Testen zur Verfügung. Mit dem Sensor-Kit können für verschiedene Messaufgaben unterschiedliche Sensoren eingesetzt werden, die über den I²C-Bus mit einem Mikrocontroller verbunden sind.
Bei der Inbetriebnahme haben einzelne LCD-Anzeigen keine Zeichen angezeigt. Wie kann eine systematische Fehleranalyse durchgeführt werden?


Wie können die Signale des I²C-Buses gemessen werden?
Mit dem USB-Oszilloskop SmartScope von LabNation. Dieses wird per USB-A-Verbindung an einen Rechner angeschlossen. Um die Messungen mit diesem Oszilloskop durchzuführen, muss man die SmartScope App für Windows, Linux oder Mac. Nachdem diese installiert ist, öffnet man sie und stellt sie auf "Digital Mode". Man kann alle Eingangssignale außer "SDA" und "SCL" ausblenden und fügt einen I²C-Decoder hinzu.
Als nächstes schließt man mit Jumperkabeln die "0" und "1" Inputs des Oszilloskops an jeweils "SCL" und "SDA" des Arduinos an. 

Welche Informationen können aus dem decodiertem Signal gewonnen werden?

Als Messwerte in der Software kann folgender Graph entnommen werden:
![[Graph USB Oszilloskop.png]]
Hier sieht man, dass mit einer negativen Flanke bei sowohl SDA, während SCL noch High ist, der Lese- und Schreibprozesses begonnen wird. Ab einer positiven Flanke bei SCL startet die Durchgabe der I²C-Bus Adresse in Binär Form; hier: 0x3C. Sobald 7 Bit gesendet wurden, stoppt diese Durchgabe. Anschließend wird ein weiteres Bit gesendet; 0 für Write und 1 für Read. Zuletzt wird hier über SDA das Acknowledge Bit gesendet um den Vorgang zu stoppen. Dies wird für weitere Adressen wiederholt.