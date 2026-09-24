# Reto 1: Encendido alternativo de dos diodos LED
En este primera práctica/reto tenemos que conseguir que, a través de programación con Arduino (ya sea con montaje físico o a través del programa Tinkercad en el ordenador), dos diodos LED se enciendan alternativamente programando cada uno con su código correspondiente. Para primero entender el funcionamiento de la siguiente práctica, primero debemos de saber cada componente que vamos a utilizar, cómo los vamos a utilizar y también cómo los vamos a programar. Empecemos por el principio.
Lo primero que debemos sabeer para empezar a trabajar es...¿Qué es una placa de Arduino? Pues bien, la placa de Arduino es básicamente un miniordenador que a través de diferentes programas podemos conseguir automatizaciones y crear diferentes dispositivos interactivos. Un ejemplo de estos son los robots que montamos, programamos y calibramos con Arduino para las competiciones de la WRO, la World Robot Olympiad. Esta placa puede recibir información a través de sensores y actuadores, pero también puede enviar información, como vamos a hacer ahora en nuestra práctica. Como he mencionado antes, en esta práctica vamos a aprender a programar un encendido alternativo con dos diodos LED, programando con Arduino. En esta ocasión, vamos a hacerlo con el simulador [Tinkercad](https://www.tinkercad.com/), para el cual puedes pinchar en la palabra para acceder a su página de inicio. A continuación, vamos a proceder a explicar paso a paso el código con el que hemos realizado el programa.



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



















https://github.com/user-attachments/assets/2a253130-8973-4ee6-ae37-25e71c7ca700
