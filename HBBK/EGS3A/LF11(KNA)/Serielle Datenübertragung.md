*Smolka, Loos; 15.01.2025*
#### Praxistest Max7219
Wir haben das Display mit einem Max7219 als Steuer-IC an den Arduino verbunden (DIN an D12, CLK an D11, CS an D10).
Auf den Arduino haben wir zuerst das oben geschriebene Testprogramm gespielt, welches alle Segmente der einzelnen 7-Segment-Anzeigen durchläuft. Dieses musste leicht verändert werden, damit alle Segmente durchlaufen, die Änderung war allerdings nicht schwer (die zweite for-Schleife musste in die erste hinzugefügt werden).
Nachdem wir die Funktion festgestellt haben, wurde der unten geschriebene Code auf den Arduino gespielt, der das heutige (und nur das heutige Datum) anzeigen kann. Die Verbindung zwischen Arduino und Display blieben gleich.
![[Max.jpg|500]]

```C
#include <LedControl.h>

//12= data pin(DIn), 11= CLK Pin, 10= Load/CS Pin, 1 = num of devices

LedControl lc88=LedControl(12,11,10,1);

  

void setup(){

lc88.shutdown(0,false); // Wake up! 0= index of first device;

lc88.setIntensity(0,2);

lc88.clearDisplay(0);

delay(500);

}

  

void zero(int i){

lc88.setLed(0,i,1,true);

for(int j=2; j<7; j++){

lc88.setLed(0,i,j,true);

}

}

  

void one(int i){

lc88.setLed(0,i,2,true);

lc88.setLed(0,i,3,true);

}

  

void two(int i){

lc88.setLed(0,i,1,true);

lc88.setLed(0,i,2,true);

lc88.setLed(0,i,4,true);

lc88.setLed(0,i,5,true);

lc88.setLed(0,i,7,true);

}

  

void onedot(int i){

lc88.setLed(0,i,0,true);

lc88.setLed(0,i,2,true);

lc88.setLed(0,i,3,true);

}

  

void five(int i){

lc88.setLed(0,i,1,true);

lc88.setLed(0,i,3,true);

lc88.setLed(0,i,4,true);

lc88.setLed(0,i,6,true);

lc88.setLed(0,i,7,true);

}

  

void fivedot(int i){

lc88.setLed(0,i,0,true);

lc88.setLed(0,i,1,true);

lc88.setLed(0,i,3,true);

lc88.setLed(0,i,4,true);

lc88.setLed(0,i,6,true);

lc88.setLed(0,i,7,true);

}

  

void dot(int i){

lc88.setLed(0,0,i,true);

}

  

void loop(){

five(0);

two(1);

zero(2);

two(3);

onedot(4);

zero(5);

dot(6);

fivedot(6);

one(7);

delay(1000);

lc88.clearDisplay(0);

}
```

Auf die selbe Weise wie die 7-Segment-Anzeige wurde eine 8x8 LED-Matrix mit dem Arduino verbunden. Der Code hat für diese die selbe setup Funktion wie die für die 7-Segment-Anzeige. Für die loop Funktion wurden verschiedene 2 dimensionale Arrays gebaut, die in Binär Code Bilder enthalten. Diese Bilder werden in Form von Schleifen auf das Display geschrieben. Hierbei war die Schwierigkeit den Wert des Arrays an einer bestimmten Stelle auszulesen um herauszufinden ob dieser eine 0 oder eine 1 enthält. Ein weiterer (eher dummer) Fehler war es, den Namen des Arrays in der aufrufenden Funktion nicht zu ändern, dadurch hat die Funktion auf ein Array zugegriffen, das nicht existiert.
![[creeper.webp]]