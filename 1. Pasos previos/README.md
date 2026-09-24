# Reto 1: Encendido alternativo de dos diodos LED
En este primera práctica/reto tenemos que conseguir que, a través de programación con Arduino (ya sea con montaje físico o a través del programa Tinkercad en el ordenador), dos diodos LED se enciendan alternativamente programando cada uno con su código correspondiente. 

``void setup()
{
 pinMode(3, OUTPUT);
 pinMode(2, OUTPUT);
}``

``void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(1000); 
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(1000); 
}``



<video src="https://raw.githubusercontent.com/nitropungos3000/TU_REPOSITTORIO/main/1.%20Pasos%20previos/V%C3%ADdeos/GRABACI%C3%93N%20RETO%201.mp4" controls width="100%"></video>
