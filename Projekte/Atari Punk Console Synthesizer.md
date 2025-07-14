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
- [ ] $10\ \mu F$ Kondensator (1)
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
- 