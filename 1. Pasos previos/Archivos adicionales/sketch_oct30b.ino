#include <Ultrasonic.h>

int trigero=4;
int ecosdelrocio=5;
int LED=9;
int lecturasoniditos;
int mapea;

Ultrasonic torticulis (trigero,ecosdelrocio, 60000);

void setup() {
Serial.begin(9600);
pinMode(LED,OUTPUT);
}

void loop() {
lecturasoniditos=torticulis.read(CM);
mapea=map(lecturasoniditos, 0, 40, 255, 0);
Serial.print(lecturasoniditos);
Serial.println(" cm");
analogWrite(LED, mapea);
delay(100);
}