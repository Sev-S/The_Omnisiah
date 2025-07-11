20.11.2024; Loos, Smolka

**Bedeutung und Randbedingungen**

I²C Bedeutet Inter-Integrated Circuit.
Der I²C-Bus ist eine Art von serieller Datenkommunikation zwischen einem "Master" Gerät und vielen "Slaves", die mit dem Master über den Datenbus kommunizieren. Hierbei gibt es meist einen Master, der aber mit bis zu 127 Slaves kommunizieren kann. Dafür werden nur 2 Datenleitungen gebraucht. Hierbei werden die SDA (Serial Data) und SCL (Serial Clock) Datenleitungen genutzt. Alle Teilnehmer benutzen den selben Bustakt; dies heißt Synchronbus.

**Übertragung von Daten**

Zu Beginn wird eine Start Condition übertragen, hier wird die Datenleitung auf Low gesetzt, während die Clockleitung noch auf High ist. Dann werden 7 Bit als Datenadresse als High oder Low Signale an den Slave übertragen. zusätzlich dazu wird entweder eine 0 als Write Bit oder eine 1 als Read Bit übertragen. Als nächstes überträgt der Slave eine 0 als Acknowledgement Bit, dass der Slave bereit für die Datenübertragung ist.
Danach werden in Binär (als Low oder High Signale) in 8 Bit Blöcken die Daten übertragen und der Slave gibt nach jedem Block ein Acknowledgement Bit zurück. So können beliebig viele Blöcke an den Slave übertragen oder vom Slave gelesen werden, bis die Stoppcondition erreicht wurde.
Zuletzt wird als Stop Condition erst die Clockleitung auf High und danach die Datenleitung auf High gesetzt.

**Taktfrequenz und Bitrate**

Standard: 100 kbits/s
Fast (Schnell): 400 kbits/s