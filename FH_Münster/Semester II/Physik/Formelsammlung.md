## Konstanten
### Lichtgeschwindigkeit
$c=3\cdot 10^{8}\ \text{m/s}$
### Erdbeschleunigung
$g=9,81\ m /s^2$
### Avogadrokonstante
$N_{A}=6,023\cdot 10^{23}\frac{J}{K\cdot mol}$
### ideale Gaskonstante
$R=8,314J/mol\cdot K$
### Gravitationskonstante
$\gamma=6,674\cdot10^{-11}m^3/kg\cdot s^2$
## U1 Einführung
### Verhältnis Masse zu Volumen
$\rho=\frac{m}{V}$
### Standardabweichung
$\sigma=\sqrt{\frac{1}{n-1}\sum_{i=1}^n(x_{i}\overline{x})^2}$
### Stichprobenfehler
$\Delta x=\pm\frac{\sigma}{\sqrt{ n }}$
### Fehler 
$\Delta x=|\frac{\partial x}{\partial y_{1}}|\Delta y_{1}+|\frac{\partial x}{\partial y_{2}}|\Delta y_{2}+| \frac{\partial x}{\partial y_{3}}|\Delta y_{3}$
$\Delta x=\sqrt{ \left( \frac{\partial x}{\partial y_{1}}\cdot \Delta y_{1} \right)^2+\left( \frac{\partial x}{\partial y_{2}} +\Delta y_{2}\right)^2 }$
## U2 Mechanik Kinematik
### Geschwindigkeit
$\vec{v}=\frac{d\vec{x}}{dt}=\frac{d\vec{x}}{dt}\vec{e_{x}}+\frac{d\vec{y}}{dt}\vec{e_{y}}$
### Beschleunigung
$\vec{a}=\frac{d \vec{v_{x}}}{dt}\vec{e_{x}}+\frac{d \vec{v_{y}}}{dt} \vec{e_{y}}$
$x=x_{0}+v_{0}\cdot t+\frac{1}{2}\cdot a\cdot t^2$
$v=v_{0}+a\cdot t$
$v^2=v_{0}^2+2a\Delta v$
$h=\frac{1}{2} \frac{v_{0}^2}{g}$
$v_{1}^2=v_{0}^2-2a\Delta x$
$x=\frac{v_{0}^2\cdot \sin(2\theta)}{g}$
$t=\frac{2v_{0}\cdot \sin \theta}{g}$
## U3  Mechanik Dynamik
### Newtonsche Gesetze
1. $\vec{F}=0\implies v=0\ \text{oder}\ v=\text{const}$
2. $\vec{a}=\frac{\vec{F}}{m}$
3. $\vec{F_{A\to B}}=-\vec{F_{B\to A}}$
### Reibung
$F_{R}=\mu_{R}\cdot F_{N}$
### Zentripetalkraft
$|F_{ZP}|=|F_{ZF}|$
$\vec{F_{ZP}}=-\frac{mv^2}{r}\vec{e_{r}}$
$a_{ZP}=\omega^2r$
## U4 Mechanik Arbeit, Energie, Leistung
### Energie
$W=\int_{Pfad}\vec{F}(\vec{r})\cdot d\vec{r}=\int_{Pfad}\nabla U(\vec{r})\cdot d \vec{r}=U(\vec{r_{2}})-U(\vec{r_{1}})$
### Gravitationskonstante
$\gamma 6,674\cdot 10^{-11}\ \frac{m^3}{kg\cdot s^2}$
### Gravitationskraft
$\vec{F}=\pm \gamma \frac{m_{1}m_{2}}{r_{12}^2}\vec{e_{12}}$
$\vec{F}(\vec{r})=-\nabla U(\vec{r})$
Potentialfeld: $U(\vec{r})=\pm \gamma\frac{ m_{1}m_{2}}{r_{12}}$
#### Auf der Erde
$\vec{F}=-m\vec{e_{Z}}$
Potentialfeld: $U(\vec{r})=mg\vec{e_{Z}}$
### kinetische Energie
$E_{kin}=\frac{1}{2}mv^2$
### potentielle Energie
$E_{pot}=mgh$
### Leistung
$P=\frac{dW}{dt}=\vec{F}\cdot \vec{v}$
### Energieerhaltungssatz
$E=E_{kin}+E_{pot}=const$
### Taylorreihe
$g_{M}=9,81m/s^2$
$g_{B}=g_{M}\left( 1-2 \frac{\Delta r}{r_{E}}+3 \left( \frac{\Delta r}{r_{E}} \right)^2-\dots \right)$
## U5 Impuls
### Impuls
$\Delta \vec{p}=\int_{t_{1}}^{t_{2}}\vec{F}(t)dt$
$\vec{p}=m \vec{v}$
### Impulserhaltungssatz
$\vec{p}=const$
$m_{1}v_{1}+m_{2}v_{2}=m_{1}v_{1}'+m_{2}v_{2}'$
### elastischer Stoß
Impuls- und Energieerhaltungssatz gelten
### unelastischer Stoß
#### Geschwindigkeit
$v_{KP}=\frac{m_{1}v_{1}+m_{2}v_{2}}{m_{1}+m_{2}}$
### vollkommen unelastischer Stoß
Impulserhaltungssatz, $E=E_{ein_{1}}+E_{ein_{2}}+\Delta W$ 
### Schwerpunkt
Unterteilung der Fläche in kleinere Flächen
$\vec{r_{S}}=\frac{1}{\sum A_{i}}\left( \sum A_{i\vec{r}} \right)$
$\vec{r}_{s}=\frac{1}{\sum m_{i}}\left( \sum m_{i}\vec{v}_{i} \right)$
## U6 Drehbewegung
### Winkelgeschwindigkeit
$\omega(t)=\frac{d\varphi}{dt}=\dot{\varphi}$
### Bahngeschwindigkeit
$v_{\varphi}=\omega \cdot r$
### Winkelbeschleunigung
$\alpha=\frac{d\omega}{dt}=\dot{\omega}=\ddot{\varphi}$
### Bahnbeschleunigung
$a_{\varphi}=\alpha \cdot r$
### Bewegungsgleichung
#### $\omega=const$
$d\varphi=\omega dt\to \int d\varphi=\omega\to \varphi(t)\omega t+\varphi_{0}$
#### $\alpha=const$
gleichförmige beschleunigte Drehbewegung
$d\omega=\alpha dt\to \int d\omega=\alpha \int dt=\alpha t+\omega_{0}$
$\int d\varphi=\int \omega dt\to \int (\alpha t+\omega_{0}dt\to \varphi(t)=\frac{\alpha}{2t^2+\omega_{0}t+\varphi_{0}}$
### Drehbewegung
$\omega(t)=\alpha t+\omega_{0}$
$\varphi(t)=\frac{\alpha}{2}t^2+\omega_{0}+\varphi_{0}$
$\omega^2=\omega_{0}^2+2\alpha \varphi$
$\overline{\omega}=\frac{\omega+\omega_{0}}{2}$
### Translationsbewegung
$v(t)=\alpha t+v_{0}$
$x(t)=\frac{a}{2}t^2+v_{0}t+x_{0}$
$v^2=v_{0}^2+2ax$
$\overline{v}=\frac{v+v_{0}}{2}$
### Beschleunigung
$\vec{a}=\vec{a_{\varphi}}+\vec{a_{r}}=\vec{a_{t}}\vec{a}_{ZP}$
### vektorielle Betrachtung der Drehbewegung
$|\vec{v}|=\sqrt{v_{\varphi}^2\sin^2\varphi(t)+v_{\varphi}^2\cos^2\varphi(t)}=v_{\varphi}$
### Zentripetalbeschleunigung
$|a_{ZP}|=|\omega v_{\varphi}|=\omega^2r=\frac{v_{\varphi^2}}{r}$
$\vec{a}_{ZP}=\vec{a}_{r}$
### Arbeit der Zentripetalkraft
$E_{kin}=m\alpha r^2\varphi=\frac{1}{2}m\alpha^2r^2t^2=\frac{1}{2}m\omega^2r^2=\frac{1}{2}mv^2$
### Trägheismoment
$I=mr_{\perp}^2$
### Rotationsenergie
$E_{rot}= \frac{\omega^2}{2}I$
$E_{rot}=\frac{\omega^2}{2}mr_{\perp}^2$
### Rollbewegung
$E_{kin}=\frac{1}{2}I\omega^2+\frac{1}{2}mv_{s}^2$
## U7 Schwingungen
### Frequenzen
$f_{schnell}=\frac{f_{1}+f_{2}}{2}$
$f_{langsam}=\frac{f_{1}-f_{2}}{2}$
$f_{Schwebung}=|f_{1}-f_{2}|$
### Federkraft
$\vec{F}_{F}=-k\cdot x$
### Federkonstante
$k=\frac{mg}{\Delta y}$
### Frei ungedämpfte Schwingung
#### Differentialgleichung
$\vec{F}_{F}=-kx=m\overline{x}+kx=0\implies \begin{array}·\ \omega_{0}=\sqrt{\frac{k}{m}} \\ \lambda^2+w_{0}^2=0\end{array}$
#### Lambda bestimmen
$\sqrt{\lambda^2}=\pm\omega_{0}^2\cdot i$
$\lambda=a\pm b\implies \begin{array} \ x(t)=e^{at}\cdot \cos(bt) \\ x(t)=e^{at}\cdot \sin(bt)\end{array}$
#### Energie
$E_{mech}=\frac{1}{2}x^2k=\frac{1}{2}mv_{0}^2$
### Frei gedämpfte Schwingung
#### Differentialgleichung
$\ddot{y}+\frac{D}{m}\dot{y}+\frac{k}{m}y=0$
 $\omega_{0}=\sqrt{\frac{k}{m}}$
#### Abklingkoeffizient
$\delta=\frac{D}{2m}=-\frac{\ln\left( \frac{1}{2} \right)}{n\cdot T}$
#### Periode ohne Dämpfung
$\omega_{0}=\sqrt{ \omega_{\delta}^2+\delta^2 }$
#### Amplitude
$A=\frac{F_{0}}{\sqrt{ m^2\cdot(\omega_{0}^2-\omega^2)^2+D^2\cdot \omega^2 }}$
#### Phasenverschiebung
$\arctan\left( \frac{\omega D}{m\cdot(w_{0}^2-\omega^2)} \right)$
### Schwingungskreisfrequenz
$\omega_{0}=\sqrt{ \frac{k}{m} }$
### Zeit
$t=\frac{3}{4}T$
### Für unkomprimiert
$E_{kin}=E_{pot}$
$\frac{1}{2}mv^2=\frac{1}{2}k_{F}(\Delta y)^2$
### Geschwindigkeit
$v=A\cdot \omega_{0}$
### Amplitude überlagerter Frequenzen
$A_{1}\cdot \sin (\omega_{01}t+\varphi_{1})+A_{2}\cdot \sin(\omega_{02}t+\varphi_{2})=c\cdot \sin(\omega_{0}t+\delta)$
$c=\sqrt{ a^2+b^2+2ab\cdot \cos(\alpha-\beta) }$
$\delta=\arctan\left(\frac{A_{1}\cdot \sin \varphi_{1}+A_{2}\cdot \sin \varphi_{2}}{A_{1}-\cos \varphi_{1}+A_{2}\cdot \cos \varphi_{2}} \right)$

## U8 Wellen
### Allgemeine Wellengleichung
$y(x,t)=A\cdot \sin(kx-\omega t)$
### Harmonische Welle
Richtung durch Vorzeichen im Sinus aber invertiert
#### Geschwindigkeit
$v=c=\frac{\omega}{k}$ $k$ ist vordere Zahl im Sinus
#### Wellenlänge
$\lambda=\frac{2\pi}{k}$
#### maximale Geschwindigkeit
$v(x fest, t)=A\cdot(\sin())'$
#### Ausbreitungsgeschwindigkeit
$c^2=\frac{F_{S}}{\mu}=\frac{F_{S}\cdot l}{m}$
$c=\lambda\cdot f$
#### Amplitude addierter Wellen
$A_{\sum}=2\cdot A\cdot \cos\left( \frac{\Phi}{2} \right)$ 
#### Phasenverschiebung
$\Delta\Phi=\frac{\Delta l\cdot2\pi}{\lambda}$
### Schwebungsfrequenz
$f_{sch}=f_{1}-f_{2}$
### Frequenz eines Körpers in Bezug auf Quelle
$f_{K}=f_{Q}\cdot \frac{c\pm v_{K}}{c}$
### Geschwindigkeit eines reflektierenden Körpers
$\Delta f=f_{R}\cdot \frac{v_A}{c}$
$v_{A}=\frac{\Delta f\cdot c}{2f_{R}-\Delta f}$
## U9/10 Thermodynamik
Temperatur immer in Kelvin umwandeln
![[Pasted image 20250707164653.png]]
### Änderung bei Temperatur
$\Delta X=X_{0}\cdot \alpha \cdot \Delta T$
### Wärmeabgabe
$Q=c \cdot \Delta T=c_{m}\cdot m\cdot \Delta T$
$c_{m}$: Wärmekapazität
### Temperatur mit Druck
$n=\frac{p\cdot v}{R\cdot T}$
### Druck
$\rho \cdot g\cdot h+p_{0}$
#### Faustformel
1 Bar pro 10m Zunahme
### Energie
$E_{kin}=\frac{3}{2}\cdot n\cdot R\cdot T=\frac{1}{2}\cdot v^2\cdot n\cdot N_{A}$
### Volumen eines Atoms
$V_{1}=\frac{b}{N_{A}}$
### Radius eines Atoms
$R^3=\frac{3V_{A}}{4\pi}$
### ideales Gasgesetz
$p\cdot V=n\cdot R\cdot T$
$\frac{p_{1}\cdot V_{1}}{T_{1}}=\frac{p_{2}\cdot V_{2}}{T_{2}}$
### Atomanzahl
$n=\frac{m}{m_{mol}}$
### 1. Hauptsatz
$\Delta U=\Delta Q \textcolor{green}{(Wärme)}+\Delta W$
### Wärmekapazität
$C=\frac{\Delta Q}{\Delta T}$
### spezifische Wärmekapazität
$c=\frac{\Delta Q}{m\Delta T}$
### molare Wärmekapazität
$C_{mol}=\frac{\Delta Q}{n\Delta T}$
### Bewegungsenergie
$U=\frac{3}{2}Nk_{B}T$ für 1-atomig
$U=\frac{f}{2}Nk_{B}T$ für n-atomig
### isochore Wärmekapazität (konstantes Volumen)
$\Delta U=\Delta Q=\frac{f}{2}Nk_{B}\Delta T$
$C_{V}=\frac{\Delta Q}{\Delta T}=\frac{f}{2}Nk_{B}$ $V=const$
$\Delta W=0$
$\Delta Q=c_{mol,v}\cdot n\cdot\Delta T=c_{mol,v}\cdot n(T_{2}-T_{1})$
$\Delta U=\Delta Q$
### isobare Wärmekapazität (konstanter Druck)
$C_{P}=\frac{\Delta Q}{\Delta T}=\frac{\Delta U-\Delta W}{\Delta T}\neq C_{V}$
für 1-atomig: $C_{P}=\frac{\Delta Q}{\Delta T}=\frac{5}{2}Nk_{B}$
$\Delta W_{12}=-p\cdot \Delta V$
$\Delta Q_{12}=C_{P}=\Delta T=C_{mol,p}\cdot n(T_{2}-T_{1})$
$\Delta U_{12}=\Delta Q_{12}+\Delta W_{12}=C_{mol,p}\cdot n(T_{2}-T_{1})-P(V_{2}-V_{1})$
$\Delta W_{21}=p\cdot \Delta V$
$\Delta Q_{21}=n\cdot C_{mol,p}(T_{1}-T_{2})$
$\Delta U_{12}=\Delta Q_{21}+\Delta W_{21}=C_{mol,p}\cdot n(T_{1}-T_{2})-P(V_{1}-V_{2})$
### isotherme Wärmekapazität (konstante Temperatur)
$\Delta W_{21}=-nRT\cdot \ln \frac{V_{2}}{V_{1}}$
$\Delta U=0$
$\Delta Q=-\Delta W$
$\Delta W_{21}=-nRT\cdot \ln \frac{V_{1}}{V_{2}}$
### adiabatische Wärmekapazität (selbe Energie)
$\Delta W=-p\Delta V$
$\frac{dT}{T}+\frac{nR}{CV}\cdot \frac{dV}{V}=0$ partielle DGL
$\Delta U=C_{V}\cdot \Delta T$
$\Delta Q=0$
$T\cdot V^{\gamma-1}=const$
$pV^\gamma=const$
$p^{1-\gamma}T^\gamma=const$
#### adiabatische Konstante
$\gamma=\frac{C_{mol,p}}{C_{mol,v}}$
$\gamma_{zweiatom}=\frac{4N_{A}k_{B}}{\frac{6}{2}N_{A}k_{B}}$
### Expensation, Kompression

P1 zu P2 -> Expansion
P2 zu P1 -> Kompression
### Wärmekraftmaschine
#### Arbeitsbilanz
$|\Delta W|$
#### Wärmebilanz
$\Delta Q=\Delta Q_{12}+\Delta Q_{21}$
#### Wirkungsgrad
$\eta=\frac{|\Delta W|}{\Delta Q_{zufuhr}}$
### Carnotscher Wirkungsgrad
$\eta=\frac{T_{high}-T_{low}}{T_{high}}$
![[Pasted image 20250707164623.png]]
Carnot immer größer als normaler