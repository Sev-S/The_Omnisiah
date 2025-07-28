## Quelle
[Autodesk instructables](https://www.instructables.com/Atari-Punk-Console-Synthesizer/)
## Vorwort
- Ist auch bekannt als Stepped Tone Generator
- Die entstehenden Klänge klingen wie alte Atari Konsolen
- Besteht aus astabilen und monostabilen Kippstufe
## Teileliste
- [ ] NE555 (2)
- [ ] $1\ k\Omega$ Widerstand (1)
- [ ] $4,7\ k\Omega$ Widerstand (2)
- [ ] $0,1\ \mu F$ Kondensator (1)
- [ ] $0,01\ \mu F$ Kondensator (1)
- [ ] $10\ \mu F$ ElKo (1)
- [ ] $500\ k\Omega$ Potentiometer (2)
- [ ] Schalter (1)
- [ ] Lautsprecher (1)
- [ ] $9\ V$ Block Adaper
- [ ] $9\ V$ Batterie
- [ ] 3D gedrucktes Gehäuse
## Funktionsprinzip
![[Pasted image 20250714100349.png]]
### Monostabile Kippstufe
- Der 555 wird durch eine negative Flanke an Pin 2 getriggert
- Wenn der 555 getriggert ist, gibt er einen Impuls an Pin 3 aus
- Länge des Impulses wird durch die RC-Zeitgeber-Schaltung zwischen Pin 6 und 7 bestimmt
- Durch das in Reihe zum Kondensator geschaltete Potentiometer wird der Ladevorgang des Kondensators variabel beschränkt
- Wenn Pin 6 Low wird, wird der Kondensator über Pin 7 geladen
- Wenn der Kondensator geladen ist wird Pin 6 High und Pin 7 sperrt wieder
### Astabile Kippstufe
- Oszillator der Rechtecksignal erzeugt
- Durch die Verbindung zwischen Pin 2 und 6 kann der 555 sich selbst triggern
- Der Kondensator lädt auf die selbe Weise wie bei der monostabilen Kippstufe
- Pin 6 zieht Pin 2 wieder low und startet den Kreislauf neu
### Kombination
- Pin 3 astabilen Kippstufe wird mit dem Eingangspin 2 der monostabilen Kippstufe verbunden
- Wenn der Oszillator eine negative Flanke hat, gibt die monostabile Kippstufe einen Puls aus
- Durch die Potentiometer verändert man die Frequenz und Bandbreite des Synthesizers
- Die $4,7\ k\Omega$ Widerstände dienen als Pull-Up-Widerstände damit das Audio-Signal nicht durch Kurzschlüsse aussetzt
## Probleme
- Es gibt keine vernünftigen $500\ k\Omega$ Potentiometer (Spindeltrimmer zählen nicht)
	- Patrick fragen -> erstmal Spindeltrimmer einbauen und Platz für die richtigen Potentiometer lassen und einplanen
## Testaufbau
- Mit Spindeltrimmern funktioniert die Schaltung auf Breadboard
- Ein Versuch den Einstellbaren Bereich zu verkleinern durch feste Widerstände und kleinere Potentiometer war erfolglos, man kann keine vernünftige Frequenz einstellen
## Platine und Schaltplan
![[Pasted image 20250715145841.png]]
Schaltplan in KiCAD
![[Pasted image 20250715145543.png]]
Platinenlayout in KiCAD
## Gehäuse
### Vor dem Einbau
- In die dafür vorgesehenen Löcher müssen M3 Muttern mit einem heißen Lötkolben eingesetzt werden
### Einbau der Platine und externen Teile
- Zur Befestigung der Platine, der Batterieabdeckung und dem Deckel werden M3 Schrauben verwendet
- Zur Befestigung des Schalters werden M2 Schrauben und Muttern verwendet
- Die Potentiometer werden mit den Pins nach unten un die dafür vorgesehenen Löcher gesetzt
- Der Lautsprecher wird in die für ihn vorgesehene Halterung gesetzt
- Die Abdeckung der Schrauben wird mit dünnem doppelseitigem Klebeband befeestigt
## Anleitung
- Das linke Potentiometer verändert die Frequenz, also die Tonlage, des von dem Synthezisers ausgegebenen Tons
- Das rechte Potentiometer verändert die Frequenz des Trigger-Signals für den Ton, also die Häufigkeit in der der Ton ausgegeben wird.
- Betrieben wird der Syntheziser mit einer regulären 9V-Batterie