#include <Ultrasonic.h>

int trigero=4;
int ecosdelrocio=5;
int LED=8;
int lecturasoniditos;
int pot=A0;
int valorpot;
int mapea;

Ultrasonic torticulis (trigero,ecosdelrocio, 60000);

void setup() {
Serial.begin(9600);
pinMode(LED,OUTPUT);
}

void loop() {
valorpot=analogRead(pot);
lecturasoniditos=torticulis.read(CM);
mapea=map(valorpot, 0, 1023, 0, 40);
Serial.print(lecturasoniditos);
Serial.println(" cm");

delay(100);

if (lecturasoniditos<mapea){
  digitalWrite(LED, HIGH);
  Serial.println("ALERTAAAAAAAAAAA");
  }
 if (lecturasoniditos>=mapea){
  digitalWrite(LED,LOW);
 }
}