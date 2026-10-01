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

Como podemos observar, los diodos tienen dos patillas. Fuera de la simulación, una patilla es más larga para distinguir el lado positivo (Ánodo) y la más corta para el negativo (Cátodo). Al ánodo conectamos el cable ya conectado al pin correspondiente de cada diodo, el cual da igual el orden. Al cátodo, conectamos la resistencia, un pequeño componente electrónico que sirve para que el diodo tenga una sobrecarga y pueda estropearse, opone resistencia, como dice su nombre. La resistencia la medimos en Ohmios (Ω).  Podemos hacer el montaje con dos resistencias, cada una conectada a un diodo, pero también se pude hacer con solo una, como he decidido yo hacerlo. De la placa de Arduino tenemos que sacar un cable del pin GND (tierra-negativo), que debemos conectar a las resistencias o a la línea de pines negativa de la protoboard, que esta nos ayuda a conectar de manera más fácil los componentes de nuestra práctica. Como observamos, se saca un cable de GND a la línea de pines negativos de la protoboard y ya de ahí se sacan los cables a los diodos. Finalmente, posterior a esto podemos ver un vídeo con el reto realizado y completado. Pulsa en la siguiente imagen para ver el vídeo.

https://github.com/user-attachments/assets/2a253130-8973-4ee6-ae37-25e71c7ca700



[![](https://img.youtube.com/vi/2f6OHwZokGQ/0.jpg)](https://www.youtube.com/watch?v=2f6OHwZokGQ)

Este reto corresponde al apartado 2 de la página con contenido y ayuda sobre Arduino que no proporcionó nuestro profesor. [Pincha aquí para más información](http://kio4.com/arduino/index.htm)


# Reto 2: Encendido de diodos LED utilizando un pulsador

Para esta práctica vamos a, utilizando un pulsador que ahora voy a proceder a explicar, encender dos diodos LED. Antonio, nuestro profesor, nos ha puesto una serie de condiciones que debemos seguir:

·Debe ser un encendido alternativo, en el que los diodos se encuentren encendidos hasta que se pulse el pulsador. Mientras que el pulsador esté accionado, los diodos deben estar apagados. 

·Podíamos utilizar el mismo montaje que la práctica anterior, solo que añadiendo los componentes necesarios para realizar esta. 

·Tenemos que utilizar variables. Estas variables son un espacio que guarda la placa de Arduino para almacenar información. Para entenderlo mejor, imaginemos que esa variable es una caja en la que guardamos cosas, que podemos sacar y meter, refiriéndonos también a que esa información puede cambiar durante el código. En este caso vamos a utilizar una variable de tipo ``int``, pero hay muchas más. Podemos crearla y darle un valor o podemos dejarla sin valor para ir añadiéndole información durante el programa. Hemos creado una variable por cada uno de los componentes, y otra más para añadir el estado del pulsador, utrilizando un comando que veremos ahora. Para añadir valores a la variable tenemos un ejemplo: ``int LED1 = 1;``. Hemos puesto un nombre a la variable, ese nombre debemos de escribirlo cada vez que queramos referirnos al valor del pin del componente que queremos utilizar, por si se nos olvida en qué pin se encuentra. Podemos aplicarlo al ``pinMode``, explicado anteriormente en el anterior reto, o al ``digitalWrite``, teniendo como ejemplos los siguientes: ``digitalWrite(LED1, HIGH);``, ``pinMode(pulsador, HIGH);``. 

·Debemos de utilizar un pulsador. Un pulsador es un botón mecánico que deja pasar la corriente miestras este se encuentra accionado, es decir, que puede transmitir información digital (``HIGH`` o ``LOW``, encendido o apagado, ``1`` o ``0``), con la que podemos hacer diversas cosas como lo que vamos a hacer en la práctica, el encendido, o en este caso apagado, de los diodos LED. Hay varios tipos de botones, los normalmente abiertos (NA, o NO en inglés, normally open) y los normalmente cerrados. La diferencia entre estos dos es que el primero normalmente se encuentra el ``LOW`` y cuando lo acciones está en ``HIGH``, y el otro es al revés. Estos, tienen un muelle que permite accionar el botón para permitir el paso de corriente y enviar la señal.

·Hemos aprendido a utilizar las condiciones, los conocidos ``if`` (lo mismo que si pusieras una condición en inglés). Esto básicamente lo que hace es poner una condición, como su nombre indica. Si ocurre tal situción, que suceda lo que tú quieras. En este caso, debemos colocar ``if`` en el código, seguido de un paréntesis poniendo la condición que tiene que ocurrir, y después dentro de llaves lo que queremos que ocurra si pasa eso. En el paréntesis, debemos de poner dos iguales antes de decir el componente o variable que queremos leer y el valor en el que esté, para que los compare. Lo pongo por aquí en ejemplo: 

``if (pulsadorlectura == HIGH){``

``digitalWrite(LED1, LOW);``

``digitalWrite(LED2, LOW);``

``}``

Como podéis observar, así se vería el uso de variables y del ``if`` en el código. Lo veremos ahora todo en conjunto en la captura del código. 


·Ya, para finalizar las condiciones, tenemos el uso del ``digitalRead``. Este, básicamente sirve para leer un valor de cualquier elemento que tú le ordenes que lea, y posteriormente lo introduce en una variable. Un ejemplo es el siguiente: ``pulsadorlectura = digitalRead(pulsador);``

Ahora, vemos a ver el código completo.

<p align="center">
<img src="Imágenes/CÓDIGO RETO 2.PNG" width="450" height="400" />
</p>


Al principio del todo, he colocado las distintas variables que necesitaba para la práctica, siempre se ponen antes del ``void setup``. Posteriormente, he puesto el ``void setup``, declarando los pines de cada uno de los componentes. Después, el ``void loop``, en el que lo primero que tenemos que poner es el ``digitalRead``, para que esté todo el rato leyendo los valores del pulsador, y que lo meta en la variable ``pulsadorlectura``. Para finalizar, colocamos dos ``if``, uno que explica que, si el pulsador se encuentra en ``LOW``, los diodos deben estar encendidos, y otro que es al revés. Después, ponemos nuestras correspondientes llaves y el programa está finalizado. Debemos empezar ya a tabular, que consiste en diferenciar qué parte del programa va con cual, insertando espacios. 


Ahora, procedemos a ver el montaje, ya para finalizar.

<p align="center">
<img src="Imágenes/MONTAJE RETO 2.png" width="450" height="400" />
</p>


















