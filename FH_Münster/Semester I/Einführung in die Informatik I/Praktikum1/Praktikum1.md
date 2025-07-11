![[hello world - code.png]]
Hier sieht man den C-Code, der notwendig ist um "hello world" auszugeben.

![[hello world ausgabe.png]]
Dies ist die Ausgabe des oben gezeigten Codes. 

Sollte ein Semikolon ";" vergessen werden, kommt folgende Fehlermeldung:
![[semikolon fehler.png]]
Diese zeigt, dass der Compiler erwartet, dass der Satz durch ein Semikolon beendet werden sollte, bevor ein neuer beginnt bzw. das Programm beendet wird.

Leerzeichen und Zeilenumbrüche kann man beliebig setzen, man muss allerdings dabei darauf achten, dass sie nicht innerhalb von festen Blöcken gesetzt werden. Diese werden durch "()" oder "<>" gekennzeichnet.
Sollte man dies trotzdem tun werden folgende Fehler angezeigt:
![[umbruch fehler.png]]
Hier gibt der Compiler an, dass die Klammer nicht geschlossen wurde, der Befehl "include" nicht vervollständigt wurde, und der Satz, der durch den Umbruch getrennt wurde, nicht durch ein Semikolon beendet wurde.

![[ls dir commanbd 1.png]]
Mit dem "cd"-Command habe ich das Verzeichnis gewählt, in dem ich die Dateien für das "hello world"-Programm erstellt habe. Sowohl der "dir"- als auch der "ls"-Command  zeigen die in dem Verzeichnis erhaltenem Dateien. Dabei markiert der "ls"-Command in der shell die Verzeichnisse in blau und ausführbare Dateien in weiß.
In dem gewählten Verzeichnis sieht man die Datei "CMakeList.txt", die als Konfigurationsdatei in CLion verwendet wird. Zudem sieht man die "main.c" Datei, in der das Programm geschrieben ist.
Anhand des "nano"-Commands habe ich die Datei "CMakeList.txt" geöffnet und mit der Ansicht in CLion verglichen; In beiden Ansichten steht das selbe.


## *2 Variablen und Datentypen*
![[variablen.png]]
Hier sieht man wie die Variablen, die für die Aufgabe benötigt werden, initialisiert werden; Im späteren Verlauf des Codes werden sie auf spezifische Werte gesetzt. Die Variable "k" ist ein Array, das auf 3 Werte festgelegt wird. "i" beschreibt den Index, der in der folgenden for-Schleife genutzt werden wird.

![[Aufgabe 2.png]]
Der hier gezeigte Code legt die Variablen "a" und "b" auf $a=10^k+ \frac1 3$ und $b=10^k+\frac1 7$ fest, wobei "k" innerhalb der for-Schleife die drei oben definierten Werte annimmt. 
Dann wird "c" als die vier verschiedenen Rechenregeln definiert, die auf "a" und "b" angewandt werden. Nach jeder Definition von "c" werden alle Variablen mit deren Ergebnissen als Ganzzahl ausgegeben.
Wird mit der Integer Datengröße gerechnet kommen folgende Ergebnisse raus:
![[ausgabe int.png]]
Bei $c=a\cdot b$ ist das resultierende Ergebnis zu groß um in diesem Datentyp ausgegeben zu werden und die sehr große Zahl wird durch die Vorzeichenziffer verfälscht und wird negativ.

![[ausgabe long.png]]
werden "a", "b" und "c" als long definiert, kommen diese Ergebnisse heraus. Man sieht, dass in diesem Datentyp das Ergebnis von $c=a\cdot b$ als Ganzzahl korrekt ist.

![[float ausgabe.png]]
Werden die Variablen als float, also Gleitkommazahl, definiert, erhalten die Ergebnisse Dezimalzahlen. Hier zeigt das Programm die ersten 2 ziffern dieser an. Man kann auch sehen, das $c=a\cdot b$ ein Ergebnis in der richtigen Größenordnung ausgibt, allerdings ist dieses mathematisch nicht korrekt. Das mathematisch richtige Ergebnis wäre $c=a\cdot b = 1,000,000,430,000.0372$ Die Abweichung ist nicht zu groß, wenn man die Größe der Zahl in Betracht zieht, aber trotzdem ausschlaggebend für berechnungen.

![[double ausgabe.png]]
Definiert man die Gleitkommazahlen als double, erhält man diese Ergebnisse. Hier sind die einzelnen Werte für "a" und "b" bereits genauer, allerdings hat das Ergebnis von $c=a\cdot b= 1,000,000,476,190.52$ immer noch eine mathematische Abweichung. Das richtige Ergebnis würde lauten $c = a\cdot b= 1,000,000,470,000.0461$, die Abweichung ist zwar kleiner als die bei dem float Datentyp, sie ist aber trotzdem signifikant für quasi alle Anwendungen von Rechnern.