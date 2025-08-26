## Erstellung eines C++ Programms
1. C++-Source Datei erstellen
2. Implementierung einer Aufgabe
3. Präprozessor
4. Compiler
5. Linker
6. Ausführen der erstellten Datei
## Objektdatei
Eine Objektdatei ist eine Zwischendatei, die beim kompilieren des Programms erstellt wird. Sie ist eine kombinierte Datei aus Source- und Header-Dateien
## Regeln bei der Namensgebung
- Keine vordefinierten Funktionen, es sei denn sie werden aktiv überladen
	```int new {0};``` wäre falsch
- Der Zeichensatz umfasst das Alphabet in groß und klein, alle Zahlen und _
- Es darf höchstens ein _ aufeinander folgen
- Ein Name darf nicht mit einer Zahl beginnen
## Explizite und Implizite Typumwandlung
- Explizite Typumwandlung ruft direkt zu einer Typumwandlung auf
	```int i = static_cast <int> (4.3); ```
- Implizite Typumwandlung ruft nur indirekt zu einer Typumwandlung auf
	```int i = 4.3; ```
## Call-by-Value
- Es wird direkt eine Variable an eine Funktion übergeben
- Variable kann bearbeitet werden
	```foo (i) {};```
## Call-by-Reference
- Es wird ein Pointer bzw. eine reference auf eine Variable übergeben
- Variable kann nicht bearbeitet werden und wird nur zum Rechnen benutzt
	```foo (&i) {};```
	```foo (*i) {};```
## Globale Variablen
- Kann von jeder Funktion verändert werden
- Führt schnell zu Rechenfehlern
- Nicht optimal im Bezug auf Speicherverwaltung
