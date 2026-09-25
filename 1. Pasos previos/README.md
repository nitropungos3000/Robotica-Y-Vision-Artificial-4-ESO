# Reto 1: Encendido alternativo de dos diodos LED

En este primera práctica/reto tenemos que conseguir que, a través de programación con Arduino (ya sea con montaje físico o a través del programa Tinkercad en el ordenador), dos diodos LED se enciendan alternativamente programando cada uno con su código correspondiente. Para primero entender el funcionamiento de la siguiente práctica, primero debemos de saber cada componente que vamos a utilizar, cómo los vamos a utilizar y también cómo los vamos a programar. Empecemos por el principio.

Lo primero que debemos saber para empezar a trabajar es...¿Qué es una placa de Arduino? Pues bien, la placa de Arduino es básicamente un miniordenador que a través de diferentes programas podemos conseguir automatizaciones y crear diferentes dispositivos interactivos. Un ejemplo de estos son los robots que montamos, programamos y calibramos con Arduino para las competiciones de la WRO, la World Robot Olympiad. 

Esta placa puede recibir información a través de sensores y actuadores, pero también puede enviar información, como vamos a hacer ahora en nuestra práctica. Todos esos componentes se conectan a los diversos pines que tiene la placa, que se distinguen entre digitales (solo tiene dos valores, HIGH y LOW, 1 y 0) y analógicos (tiene 1024 valores, desde el 0 hasta el 1023). 

Como he mencionado antes, en esta práctica vamos a aprender a programar un encendido alternativo con dos diodos LED, programando con Arduino. En esta ocasión, vamos a hacerlo con el simulador [Tinkercad](https://www.tinkercad.com/), para el cual puedes pinchar en la palabra para acceder a su página de inicio. A continuación, vamos a proceder a explicar paso a paso el código con el que hemos realizado el programa.

Lo primero que nos encontramos en el programa es el llamado ``void setup()``. Este sirve para declarar los pines en los que vamos a conectar los diodos LED para controlarlos, que en este caso vamos a colocarlos en los pines digitales 2 y 3, porque solo es encendido y apagado, es decir, dos valores. Para decir en qué pin están, debemos poner la siguiente línea:  ``pinMode(3, OUTPUT);``. Lo primero, pinMode, nos dice que estamos declarando un pin; el número 2, nos dice qué pin estamos utilizando; y OUTPUT, que estamos enviando información a los diodos, es decir, que la información es de salida, no de entrada. Así, debemos hacer lo mismo con el otro pin, el 3. Debemos meter las declaraciones del ``void setup()`` entre llaves ({}). 

Después, tenemos el ``void loop()``. Aquí es donde realmente ejecutamos las acciones, que en realidad se repiten en bucle, como su propio nombre indica. Como en el ``void setup()``, debemos meter el código entre llaves. Para darle el valor de HIGH o LOW al diodo, utilizamos esta línea: ``digitalWrite(2, HIGH);``. Con esto, lo que hacemos es mandarle la información del valor que queremos darle a cada diodo. ``delay(1000);`` es un pequeño tiempo de espera que ponemos entre el encendido y apagado de cada diodo, porque si no lo ponemos se encenderían los dos diodos a la vez y no se alternarían. Este se escribe en milisegundos, por lo tanto si ponemos un delay de mil milisegundos, será una duración de un segundo. Para que uno esté apgado y el otro encendido, debemos darle a uno ``HIGH`` y al otro ``LOW`` y poner un pequeño delay entre medias. Para que ahora se encienda el otro, lo hacemos al revés. Cuando lo hagamos la segunda vez, también hay que poner un delay, y finalmente cerra la llave. Para que nos funcione el código, detrás de las líneas de ``pinMode``, ``digitalWrite`` y ``delay``, debemos de poner un punto y coma. El código completo quedaría así:

<p align="center">
<img src="Imágenes/CÓDIGO RETO 1.png" width="600" height="400" />
</p>

A continuación, procedo a explicar el montaje físico (en este caso en el simulador de Tinkercad) a partir de la siguiente imagen:

<p align="center">
<img src="Imágenes/MONTAJE RETO 1 ROBÓTICA.png" width="450" height="400" />
</p>

Como podemos observar, los diodos tienen dos patillas. Fuera de la simulación, una patilla es más larga para distinguir el lado positivo (Ánodo) y la más corta para el negativo (Cátodo). Al ánodo conectamos el cable ya conectado al pin correspondiente de cada diodo, el cual da igual el orden. Al cátodo, conectamos la resistencia, un pequeño componente electrónico que sirve para que el diodo tenga una sobrecarga y pueda estropearse, opone resistencia, como dice su nombre. La resistencia la medimos en Ohmios (Ω).  Podemos hacer el montaje con dos resistencias, cada una conectada a un diodo, pero también se pude hacer con solo una, como he decidido yo hacerlo. De la placa de Arduino tenemos que sacar un cable del pin GND (tierra-negativo), que debemos conectar a las resistencias o a la línea de pines negativa de la protoboard, que esta nos ayuda a conectar de manera más fácil los componentes de nuestra práctica. Como observamos, se saca un cable de GND a la línea de pines negativos de la protoboard y ya de ahí se sacan los cables a los diodos. Finalmente, posterior a esto podemos ver un vídeo con el reto realizado y completado.

https://github.com/user-attachments/assets/2a253130-8973-4ee6-ae37-25e71c7ca700

Este reto corresponde al apartado 2
