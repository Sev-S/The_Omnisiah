
## Slew Rate
### a)
Spannungsfolger:
![[Pasted image 20250610151730.png]]
Slew-Rate bestimmen:
- Rechtecksignal am Eingang anlegen ($5V_{pp}$ hier)
- Steilheit bei Flanken im Oszilloskop messen
- Slew Rate ist Maximalwert der Ableitung von $U_{aus}(t)$
### b)
- bestimmt mit Cursor bei $f=100\ kHz$: $14,2949 \frac{V}{\mu s}$
![[scope_1.png]]
### c)
- Slew Rate aus dem Datenblatt: $13\ \frac{V}{\mu s}$
-  Die von uns bestimmte Slew Rate ist leicht größer als die von dem Hersteller angegebene
### d)
- $U_{pp}\approx_{4},95\ V\dots 5,02\ V$
![[scope_2.png]]
![[scope_3.png]]
![[scope_4.png]]
![[scope_5.png]]
- wird zum Dreieck weil Slew-Rate und OPV nicht hinterherkommt
## Offset Abgleich
### a)
![[Bildschirmfoto vom 2025-06-12 13-54-14.png|500]]
- $R_{1}= 10\ k\Omega$
- $R_{2}=2,5\ k\Omega$
- $R_{3}=R_{1}\parallel R_{2}=2\ k\Omega$
![[scope_6.png]]
- Verstärkung: $A_{D}=\frac{U_{ein}}{U_{aus}}=\frac{1\ V}{4,45\ V}=4,45$
### b) 
- $U_{OS}$ bei $A_{D}=5$: $5,5\ mV$
- $U_{OS}$ bei $A_{D}=50$: $56,88\ mV$
- Offset-Spannung steigt analog zur Verstärkung
### c)
- Eingestellte $U_{OS}$: $-0,02\ mV$
- Poti-Einstellung: $5,643\ k\Omega$-Schleifer-$4,888\ k\Omega$
- $U_{OS}=-85,5 \dots 73,78\ mV$
## Übertragungsverhalten
### a)
![[scope_8.png]]
- $f=15,02\ kHz$
- Weil Regler Kaputt keine Werte zwischen 0,5x und 1,0x
### b) 
![[Pasted image 20250615144831.png]]
### c) 
![[Pasted image 20250615144915.png]]
### d)
- Die Verstärkung des OPVs und der Phasengang zwischen Ein- und Ausgangsspannung sind Frequenzabhängig

## Integrator und Differentiator
### a)
- Eingestellte Spannung: $5,4\ V$
- Eingestellte Frequenz: $1,216\ kHz$
- Integrierer:
	- Rechteck: 
	![[scope_13.png]]
	- Sinus: 
	![[scope_15.png]]
	- Dreieck: 
	![[scope_14.png]]
- Differeniattor:
	- Rechteck: 
	![[scope_11.png]]
	- Sinus: 
	![[scope_9.png]]
	- Dreieck: 
	![[scope_10.png]]