*Smolka, Gerhard, Rauße, Loos* **21.05.2025**

## Erster Bluetooth Test
Hier wurde ein ESP32 mit Hilfe der Arduino IDE angesteuert und beschrieben. ^e2fd65

Wir haben dem hochgeladenem Tutorial gefolgt um die eingebaute LED des ESP32 per Bluetooth anzusteuern. Dabei mussten wir erst die Board-Library für die ESP32-Boards in der IDE installieren. Dies erwieß sich als relativ einfach, durch ein online [Tutorial](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/ ).

Danach konnte man den Code aus dem Video einfach abschreiben. Wir haben unser Board in "Christina" umbenannt um Verwechslung mit anderen Boards zu verhindern. Zudem haben wir ein weiteres Ereignis bei Übermittlung einer "2" an den ESP32; Sie blinkt 100 mal.
![[esp32.jpeg|250]]![[christina.jpeg|250]]
Hier sieht man den ESP32, wie er an dem Laptop angeschlossen ist und die eingebaute LED leuchtet. Rechts sieht man das Bluetooth Terminal über das man die Eingaben an den ESP32 übergibt.

![[ESP32_BT.ino]]

## Sensorkit und Bluetooth Kommunikation
Der ESP32 wurde nach folgender Tabelle mit dem Grove Sensorkit anstelle eines Arduinos verbunden.
![[Pasted image 20250521165421.png]]
Danach wurde er wie oben beschrieben mit der Arduino IDE aufgerufen und bespielt.
Dazu wurde der Beispielcode von [mschoeffler](https://mschoeffler.com/2020/12/17/seeed-studios-arduino-sensor-kit-whats-new-whats-different-from-grove-beginner-kit-what-about-esp32/) auf den ESP gespielt und um die Code Änderungen aus der uns gegebenen Dokumentation verändert:
```Arduino
#define LED 16 // LED is on Digital Pin 16 (Arduino Sensor Kit Kit: D6) 
#define Buzzer 15 // Buzzer is on Digital Pin 15 (Arduino Sensor Kit Kit: D5)
#define Button 14 // Button is on Digital Pin 14 (Arduino Sensor Kit Kit: D4) 
#define Light 13 // Light sensor is on Analog Pin 13 (Arduino Sensor Kit Kit: A3)
```

```Arduino
void loop() { unsigned light_measured = analogRead(Light); // Light is measured unsigned frequency = map(light_measured, 0, 4095, 1000, 10); // Amount of light is converted to the turn 
// Additional explanation: No light (sensor value: 0) will switch on/off the LED each 1000ms 
// A lot of light (sensor value => 4095) will switch on/off the LED each 10ms ("LED starts flickering")
```
Dabei war das einzige Problem, dass man den Code aus Teams nicht direkt kopieren konnte.

### Bluetooth
Wir haben den Code um die Bluetooth Integration des oberen Absatzes erweitert und "Tiffany" getauft. Dabei konnten wir uns erst nicht mit unseren Smartphones mit "Tiffany" verbinden, dies hat ein weiteres Aufspielen aber gelöst. Ein übergeben einer Zeichenkette über die Konsole hat noch nicht ganz geklappt.
![[Tiffany.ino]]
