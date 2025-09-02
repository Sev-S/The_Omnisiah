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
- Es darf höchstens ein _ aufeinander folgend zu Beginn haben
- Ein Name darf nicht mit einer Zahl beginnen
## Explizite und Implizite Typumwandlung
- Explizite Typumwandlung ruft direkt zu einer Typumwandlung auf
	```int i = static_cast <int> (4.3); ```
- Implizite Typumwandlung ruft nur indirekt zu einer Typumwandlung auf
	```int i = 4.3; ```
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
