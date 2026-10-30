#include <Ultrasonic.h>

int trigero=4;
int ecosdelrocio=5;
int LED=8;
int lecturasoniditos;

Ultrasonic torticulis (trigero,ecosdelrocio, 60000);

void setup() {
Serial.begin(9600);
pinMode(LED,OUTPUT);
}

void loop() {
lecturasoniditos=torticulis.read(CM);
Serial.print(lecturasoniditos);
Serial.println(" cm");

delay(100);

if (lecturasoniditos<15){
  digitalWrite(LED, HIGH);
  Serial.println("ALERTAAAAAAAAAAA");
}

if (lecturasoniditos>15){
  digitalWrite(LED, LOW);
}
}
