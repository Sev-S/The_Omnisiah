## Erstellung eines C++ Programms
1. C++-Source Datei erstellen
2. Implementierung einer Aufgabe
3. Präprozessor
	- editiert Code mit Präprozessor-Direktiven (alles mit #)
4. Compiler
	- Erstellt aus Quellcode Maschinencode, der von der CPU verarbeitet werden kann
	- Der Maschinencode wird in einer Objekt-Datei gespeichert
5. Linker
	- verbindet binären Code der Objekt-Datei mit dem binären Code der verwendeten Bibliotheken
6. Ausführen der erstellten Datei
## Objektdatei
Eine Objektdatei ist eine Zwischendatei, die beim kompilieren des Programms erstellt wird. Sie ist eine kombinierte Datei aus Source- und Header-Dateien
## Regeln bei der Namensgebung
- Keine vordefinierten Funktionen, es sei denn sie werden aktiv überladen
	```int new {0};``` wäre falsch
- Der Zeichensatz umfasst das Alphabet in groß und klein, alle Zahlen und _
- Es darf höchstens ein _ aufeinander folgend zu Beginn haben
- Ein Name darf nicht mit einer Zahl beginnen
## Unterschied zwischen Pointern und Referenzen
- Pointer zeigen auf einen Adressereich der so groß ist wie der Datentyp
- Referenzen erzeugen einen Zeiger auf die Adresse einer Variable
## Explizite und Implizite Typumwandlung
- Explizite Typumwandlung ruft direkt zu einer Typumwandlung auf
	```int i = static_cast <int> (4.3); ``` -> Kontrolle zu Kompilierzeit
	```int i = dynamic_cast <int> (4.3);``` -> Kontrolle zu Laufzeit
	```int i = const_cast <int> (4.3);	```-> kann const beseitigen
	```int i = reinterpret_cast <int> (4.3);```-> Kontrolliert nur const
- Implizite Typumwandlung ruft nur indirekt zu einer Typumwandlung auf
	```int i = 4.3; ```
- Explizite Typumwandlung wird präferiert
## Call-by-Value
- Es wird direkt eine Variable an eine Funktion übergeben
- Bearbeitung wirkt sich nur in der Funktion aus
	```foo (i) {};```
## Call-by-Reference
- Es wird ein Pointer bzw. eine reference auf eine Variable übergeben
- Bearbeitung ist auch außerhalb der Funktion gültig
	```foo (&i) {};```
	```foo (*i) {};```
## Globale Variablen
- Kann von jeder Funktion verändert werden
- Führt schnell zu Rechenfehlern
- Nicht optimal im Bezug auf Speicherverwaltung
## Modell
- Konkret oder abstrakt
- nicht originalgetreu
- hebt manche Eigenschaften hervor
## Literale
- Normale Zahle 
- werden als ```const``` gesehen
- können nicht mit ``` ++  ``` oder ``` --  ``` inkrementiert werden
## L-Werte
- Enthält Namen mit dem das Programm auf die Adresse eines L-Wertes zugreifen kann
- Kann auch rechts stehen
## R-Werte
- Temporärer Wert der aus Rechnung oder Funktion entstehen kann
- Literale und Konstanten können auch R-Werte sein
- Können ==nur== rechts stehen
## Smarte Zeiger
- Speicherbedarf erst zu Laufzeit bekannt
- Objekte werden nicht direkt zum Ende des Wertebereichs gelöscht
- Deklaration und Initialisierung von Objekten kann an verschiedenen Orten erfolgen
## Dynamische Speicherverwaltung
- Man muss sich selbst um Speicherreservierung kümmern
- Gefahr von "dangling pointers"
- Ist von der Laufzeit her langsamer
### Hängende Zeiger
- "dangling pointer"
- Zeiger die auf eine Speicherstelle Zeigen, auf die man nicht mehr zugreifen kann, weil das dort gespeicherte Objekt gelöscht wurde
## Zeiger auf R-Werte
- Auf R-Werte kann nur mit der Referenz ``` &&a  ``` zugegriffen werden
## Operatorüberladung
- Darf nicht die selben Werttyp einnehmen
- Welche Funktion genutzt wird wird statisch zur Kompilierzeit festgelegt
- Arithmetische Funktionen können nicht überladen werden
- Reihenfolge der Operatoren kann nicht geändert werden
- 
## UML Diagrammtypen
### Strukturdiagramm
- Statisch
- Klassendiagramm, Objektdiagramm
### Verhaltensdiagramm
- Dynamisch
- Anwendungsfalldiagramm, Aktivitätsdiagramm, Zustandsdiagramm
## Objektbeziehungen
### Assoziation
- einfache Beziehung zwischen 2 Objekten
- Hat einen Lesepfeil
- Rolle der Klassen wird neben sie geschrieben
- Gerichtete Assoziationen besitzen einen Pfeil der auf den Teilnehmern, der den anderen Teilnehmer nicht kennt
### Multiplizität
- An beide Seiten einer Assoziation kann man die Anzahl der möglichen Teilnehmer der Beziehung schreiben
- * heißt unendlich viele
- Intervalle gehen auch
### Aggregation
- Objekt kann Teil von mehreren zusammengesetzten Objekten sein
![[Pasted image 20250827114720.png]]
- Raute zeigt auf das zusammengesetzte Objekt
### Komposition
- Objekt kann Teil von genau einem zusammengesetztem Objekt sein
![[Pasted image 20250827114855.png]]
- Raute zeigt auf das zusammengesetzte Objekt
### Reflexive Assoziation
- Objekte der selben Klasse stehen in Beziehung miteinander
- Kann nicht gerichtet sein, aber Multiplizitäten erhalten
