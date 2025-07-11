## 1.2 Vorbereitung
1. Messung Wechselspannung mit dem Multimeter: Was ist zu beachten?
- Bei digitaler Signalverarbeitung wird auf dem Display des Multimeters nicht der Spitzenwert, sondern der Effektivwert angezeigt.
- Bei analoger Signalverarbeitung wird nahezu der Mittelwert der Wechselspannung angezeigt. Wichtig dabei ist auch, dass eine geringe Restwelligkeit der Gleichgerichteten Spannung besteht. Um den Mittelwert mit einem AD-Wandler richtig interpretieren zu können muss man die Frequenz und Art des AC-Signals kennen.
- Nur hochwertige Multimeter können AC-Signale mit Gleichanteil berücksichtigen
- Bei analoger Signalverarbeitung ist die Glättung des Eingangs Frequenz abhängig und bei digitaler Signalverarbeitung werden mehr Abtastungen pro Zeiteinheit benötigt.
2. Wie kann mit einem Oszilloskop ein Strom gemessen werden (2 Möglichkeiten)?
- Man kann den Spannungsabfall über einem Messwiderstand messen und mit dem Widerstandswert und der gemessenen Spannung den fließenden Strom berechnen.
- Man kann eine Strommesszange nutzen, die ein Magnetfeld misst, welches proportional zum Strom ist und auf dem Oszilloskop dargestellt werden kann.
- Dabei zu beachten ist: ein DC-Offset, das vor der Messung auf 0 geregelt werden muss; die Einheit des Kanals muss auf Ampere umgestellt werden oder der Strom via eines Umrechnungsfaktor berechnet werden; bei kleinen Strömen sollte man die Mittelwertbildung nutzen; Phasenlage ist frequenzabhängig und muss berechnet werden; nach der Messung muss die Zange ausgeschaltet werden
- Wir nutzen im Praktikum die Messung über den Messwiderstand
3. Was ist zu beachten, wenn mit einem Oszilloskop mehrere Spannungen gleichzeitig gemessen werden (z.B. mit allen 4 Kanälen)?
- Man sollte beachten, dass alle Kanäle separate Spannungsskalierungen haben, allerdings teilen sie sich die Zeitachsenskallierung.
- Alle Eingänge haben das selbe Nullpotential, was direkte Spannungsmessung über manchen Bauteilen unmöglich macht.
4. Welchen Phasenwinkel  $\phi = \phi_{u}-\phi_{i}$ hat ein idealer Kondensator, welchen ein realer?
- Ein idealer Kondensator hat einen Phasenwinkel $\phi = -90°$, ein realer allerdings $\phi = -\arctan (\frac{\omega C}{\frac{1}{R}})$ 
5.  Welchen Phasenwinkel 𝜑 = 𝜑𝑢 − 𝜑𝑖 hat eine ideale Induktivität, welchen ein reale?
 - Eine ideale Induktivität hat einen Phasenwinkel von $\phi = 90°$, eine reale allerdings $\phi =\arctan\left( \frac{R}{\omega L} \right)$ 
 6. Wie lässt sich eine Induktivität berechnen, wenn Wirkwiderstand und Betrag der Impedanz einer Spule gegeben sind.
 - Die Formel hier für beträgt: $Z^2=\sqrt{R^2 +X_{L}^2}\Leftrightarrow X_{L}=\sqrt{Z-R^2}$.  
 7. Wie kann man einen Phasenwinkel aus einem Oszilloskop-Bild bestimmen?
 - Man kann die Spannungen an dem Bildschirm des Oszilloskops ablesen und mit der altbewährten Formel $\phi =\arctan(\frac{X_{L}}{R})$ berechnet werden
 - Anders kann man die Zeitverschiebung auf der X-Achse ablesen und über den Dreisatz den Verschiebungswinkel ausrechnen
 8. Was wird unter Blindleistungskompensation verstanden und wozu wird diese eingesetzt?
 -  Die Blindleistungskompensation beschriebt die Gegenwirkung eines Kondensators gegen eine Induktivität oder umgekehrt um eine Scheinleistung nahe der Wirkleistung zu erzeugen.
 9. Berechnen Sie die erforderliche Kapazität um die Blindleistung einer Reihenschaltung aus einem Wirkwiderstand von $10\Omega$ und einer Spule mit den Kenngrößen $10mH$ und $2\Omega$ an einer sinusförmigen Wechselspannungsquelle mit $U_{Q}=10V$ und $f=50Hz$ vollständig zu kompensieren.
 - Blindwiderstand der Schaltung berechnen: $X_{L}=2\pi fL=2\pi \cdot 50Hz \cdot 10mH$
 - Für die Blindleistung werden Wirkwiderstände nicht beachtet
 - Um die Blindleistung an der Spule zu kompensieren muss der Blindwiderstand an dem Kondensator gleich dem der Spule sein: $X_{C}=R+X_{L}\Leftrightarrow \frac{1}{2\pi f C}=R+2\pi f L\Leftrightarrow C=\frac{1}{2\pi fR+(2\pi f)^2 L}=\frac{1}{2\pi \cdot 50Hz\cdot12\Omega+4\pi^2 (50Hz)^2 \cdot 10mH} =210\mu F$ 

## 1.4.1 Kennlinie Glühlampe
![[Pasted image 20250329220014.png]]
- Leistung und Widerstand werden im nachhinein berechnet
- Da die Lampe eine Nennleistung von $12V\,10W$, kann man daraus den Strom $I_{max}=\frac{P}{U}=\frac{10W}{12V}=0,8\overline{333}A$ berechnen.

## 1.4.2 Messung mit dem Oszilloskop
- Um den Strom ohne Strommesszange messen zu können benötigt man einen bekannten Messwiderstand
- Über den Widerstand kann man allerdings nicht direkt die Spannung messen, da die Eingänge ein geteiltes Bezugspotential haben. Daher muss man sie indirekt messen, indem man die Spannung an der Lampe misst und sie von der Quellspannung abzieht.
- Den Strom berechnet man dann mithilfe der errechneten Spannung und dem Messwiderstand aus: $I=\frac{U_{R}}{R_{Mess}}$
![[Pasted image 20250407191112.png]]
- Der Eingang muss auf DC-Kopplung gestellt werden, da wir die Gleichanteile nicht abblocken möchten.

## 1.4.3 Induktive Last
![[Pasted image 20250407191416.png|200]]
- $U_{La}=U_{q}-U_{L}-U_{R}=8V\Rightarrow U_{q}=U_{L}+U_{R}+8V$ 
- $U_{L}=Z_{L}\cdot I$
- $Z_{L}=R_{L}+j\omega L=2,5\Omega+j\cdot 2\pi \cdot 50Hz\cdot 9mH=3,774\Omega \cdot e^{j48,52°}$
- $I=\frac{U_{La}}{R_{La}}=\frac{8V}{R_{La}}$, $R_{La}$ aus Kennlinie 1.4.1
- $U_{R}=R\cdot I=1\Omega \cdot \frac{8V}{R_{La}}$
- -> $U_{q}=8V+\left( 3,774\Omega \cdot e^{j48,52°}\cdot \frac{8V}{R_{La}} \right)+\left(1\Omega \cdot\frac{8V}{R_{La}} \right)$
- erwarteter $\Phi_{I}=\arcsin\left( \frac{R_{L}}{Z_{L}^2} \right)=\arcsin \left(\frac{2,5\Omega}{(3,774\Omega)^2}\right)=10,11°$ 

## 1.4.4 Bestimmung der Kenngrößen der Spule
- Der Wirkwiderstand der Spule kann mit dem einfachen Ohmmeter des Multimeters gemessen werden.
- Blindwiderstand: $X_{L}=\sqrt{ Z_{L}^2-R_{L}^2}$ mit $R_{L}$ und $Z_{L}$ aus vorherigen Versuchen gemessen oder errechnet
- Induktivität: $X_{L}=2\pi fL\Rightarrow L=\frac{X_{L}}{2\pi f}$ oder mit einem Induktivitätsmessgerät, das wir nicht haben.
## 1.4.5 Frequenzabhängigkeit und Leistung
- Wirkleistung: $P=U\cdot I=R_{L}\cdot I^2$
- Blindleistung: $Q=U_{L}\cdot I=X_{L}\cdot I^2=2\pi fL\cdot I^2$
- Scheinleistung: $S=U\cdot I=I^2\cdot Z$ 

## 1.4.6 Blindleistungskompensation
 - $C=\frac{L}{R_{L}^2+\omega^2\cdot L^2}$
- Durch die vollständige Kompensation einer Blindleistung kann es zu einem Schwingkreis zwischen Kondensator und Spule kommen.

## 1.4.7 Variation der Induktion
- Bei höherer Induktivität wird Phasenverschiebungswinkel $\phi$ größer: $\phi=-\arctan| (\frac{R_{L}}{\omega L})|$
- Da der Blindwiderstand $X_{L}=2\pi fL$ zunimmt, wird der Strom $I=\frac{U_{L}}{X_{L}}$ kleiner.
- Mit kleinerem Strom wird auch die Helligkeit sinken.

## 1.4.8 Variation der Frequenz
- keine Vorbereitung nötig

## 1.4.9 Zusatzaufgabe: Leistungsmessgerät
- keine Vorbereitung nötig