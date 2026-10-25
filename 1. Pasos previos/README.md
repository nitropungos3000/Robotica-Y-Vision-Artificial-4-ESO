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


[![](https://img.youtube.com/vi/2f6OHwZokGQ/0.jpg)](https://www.youtube.com/watch?v=2f6OHwZokGQ)

Este reto corresponde al apartado 2 de la página con contenido y ayuda sobre Arduino que no proporcionó nuestro profesor. [Pincha aquí para más información]((https://kio4.com/arduino/2protoboard.htm))


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
<img src="Imágenes/CÓDIGO RETO 2 SIN PULLUP.png" width="450" height="400" />
</p>


Al principio del todo, he colocado las distintas variables que necesitaba para la práctica, siempre se ponen antes del ``void setup``. Posteriormente, he puesto el ``void setup``, declarando los pines de cada uno de los componentes. Después, el ``void loop``, en el que lo primero que tenemos que poner es el ``digitalRead``, para que esté todo el rato leyendo los valores del pulsador, y que lo meta en la variable ``pulsadorlectura``. Para finalizar, colocamos dos ``if``, uno que explica que, si el pulsador se encuentra en ``LOW``, los diodos deben estar encendidos, y otro que es al revés. Después, ponemos nuestras correspondientes llaves y el programa está finalizado. Debemos empezar ya a tabular, que consiste en diferenciar qué parte del programa va con cual, insertando espacios. 


Ahora, procedemos a ver el montaje, ya para finalizar.

<p align="center">
<img src="Imágenes/MONTAJE RETO 2.png" width="450" height="400" />
</p>

Como podemos observar, tenemos los mismos dos diodos que en la práctica anterior, solo que les hemos añadido el pulsador y una resistencia de protección. El pulsador tiene dos filas de pines, una fila la debemos conectar a la resistencia de protección (que debe de ir conectada al GND) junto con el pin al que vayamos a conectar el pulsador, y después la otra línea la debemos conectar al pin de 5V, que básicamente proporciona energía. Es un montaje muy sencillo para una práctica muy sencilla. Por aquí debajo dejo un vídeo donde se puede observar cómo funciona:


[![](https://img.youtube.com/vi/-WE_l8MV6Dg/0.jpg)](https://www.youtube.com/watch?v=-WE_l8MV6Dg)

<p align="center">
<img src="Imágenes/Diagrama de Flujo Reto 2.png" width="400" height="450" />
</p>


Este reto corresponde al apartado 3 de la página con contenido y ayuda sobre Arduino que no proporcionó nuestro profesor. [Pincha aquí para más información](https://kio4.com/arduino/3entradasalida.htm)

# Reto 3: Lectura de valores del potenciómetro

En este reto nos vamos a basar únicamente en la lectura de valores de un potenciómetro. Para saber cómo realizarla, lo primero que debemos de saber es qué es un potenciómetro. Un potenciómetro es un componente electrónico con una resistencia variable cuyo valor se puede ajustar manualmente. Tiene dos terminales fijos conectados a unos extremos de una pista resistiva interna y un terminal central móvil, llamado cursor. Al girar una perilla o mover un deslizador, el cursor cambia de posición sobre la pista resistiva. Esto divide el voltaje de entrada y ofrece una fracción ajustable en la salida. Si se utiliza un solo cursor y uno de los terminales extremos, funciona como una resistencia variable tradicional. Este ya no es un componente digital, es analógico. Esto significa que no tiene únicamente 2 valores, tiene bastantes más. Estos varían dependidendo del componente que estamos utilizando. Se colocan en los pines analógicos (A0, A1, A2, A3, A4 y A5). Según la posición en la que se encuentre, tendrá un valor. Este tiene 1024 valores, que oscilan entre 0 y 1023.

Para esta práctica solo vamos a utilizar cables, la placa y el potenciómetro, pero sí que hay elementos nuevos en el código que debo de explicar. 

Lo primero que debemos de colocar en nuestro código es la variable en la que vamos a incluir los valores que lea el potenciómetro. Creamos una variable ``int`` o ``float`` (números con decimales) y la llamamos como queramos. Un ejemplo: ``int valorpot;``. Ahora, podríamos crear una variable en la que incluyamos en qué pin vamos a colocar nuestro potenciómetro, pero no hace falta. En este caso lo hemos colocado en el A0. Creamos la variable como ejemplo: ``int pot=A0`` o ``float pot=A0``. No olvidemos que tenemos que declarar el pin detrás de un igual y poner el punto y coma al final.

Ahora pasamos al ``void setup``. Al ser un componente analógico, no hace falta declarar en ningún momento el pin, solo le debemos decir a un comando de dónde tiene que leer loa valores, que ahora vamos a ver. Lo único que vamos a poner es ``Serial.begin(9600);``. Esto es para utilizar el monitor serie. Es una ventana del software que actúa como un canal de chat directo entre tu ordenador y la placa Arduino a través del cable USB. La placa nos va a mandar los valores que lea del potenciómetro y nos lo va a mostrar en la pantalla de nuestro ordenador. Lo que hace este comando es imponer la velocidad del envío de datos, en este caso, con 9600 baudios (es con lo que se mide) es suficiente. 

Finalmente, tenemos el ``void loop``, donde nos encontramos dos únicos elementos, y los dos son nuevos. Primero, tenemos que utilizar la variable que hemos creado antes donde íbamos a guardar los valores que nos otorgara el potenciómetro. Para meter los valores en la variable, debemos de utilizar lo siguiente: ``analogRead(pot);``. Esto le dice al Arduino que lea los valores del potenciómetro. Para que los meta en la variable, debemos de poner: ``valorpot=analogRead(pot);``. Ponemos un igual detrás del nombre de la variable y ponemos el comando. Así incluimos los valores dentro de la variable. El segundo comando es ``Serial.println(valorpot);``. Esto utiliza el monitor serie, y le indica a la placa que los valores que lea del potenciómetro y que incluya dentro de la variable se muestren en el monitor. El ``ln`` detrás de ``print`` indica que se escriban los valores en el monitor en líneas unas debajo de las otras.

Así quedaría finalmente el código:

<p align="center">
<img src="Imágenes/CÓDIGO RETO 3.png" width="400" height="450" />
</p>


Y aquí tenemos un vídeo de cómo funciona el montaje y cómo se ven en el monitor serie los valores del potenciómetro:

[![](https://img.youtube.com/vi/)](https://www.youtube.com/watch?v=) 

https://kio4.com/arduino/5potenciometro.htm

# Reto 4: Mapeado de valores con potenciómetro

Este reto en muy sencillo, es el previo paso al reto siguiente. Tenemos que reutilizar todo lo del reto anterior, pero incluyendo un nuevo comando, el mapeado. El mapeado consiste en convertir o escalar un valor desde un rango original a un rango diferente. Por defecto, cuando Arduino lee una señal analógica (como un potenciómetro en el pin A0), obtiene un número entre 0 y 1023. Sin embargo, la mayoría de las veces necesitas usar ese valor en rangos diferentes, como lo que vamos a hacer ahora. Vamos a transformar los valores del potenciómetro en una escala de 0 a 255. Para ello, vamos a utilizar la función ``map``. Esta se utiliza de la siguiente manera: ``map(valorpot, 0, 1023, 0, 255);``. Esto transforma los valores que que lee el potenciómetro, como pone en ``valorpot`` al principio, posteriormemte transformando los valores de 0 a 1023 del potenciómetro de 0 a 255 de lo que vamos a utilizar. Después, con el mapeado, lo que salga, se incluye dentro de una variable que deberíamos de haber creado. Vamos a llamarla bombilla: ``int bombilla;``. Ahí meteremos lo de mapeado: ``bombilla=map(valorpot, 0, 1023, 0, 255);``.

Vale, ahora utilizamos ponemos todo lo del reto anterior en su correspondiente sitio, incluyendo la variable ``bombilla`` de la que hemos hablado antes e incluyendo la función ``map`` justo debajo de la línea de ``analogRead`` (``Map`` y ``analogRead`` dentro del ``void loop``, obviamente). Lo único que habría que cambiar finalmente es que en ``Serial.println`` del monitor, pongamos la varaible bombilla para imprimir, quedando así: ``Serial.println(bombilla);``. Con esto, se imprimirán en el monitor serie valores del 0 al 255 transformando respecto a los valores del potenciómetro. 

Aquí debajo vemos el código completo de cómo quedaría: 

<p align="center">
<img src="Imágenes/CÓDIGO RETO 4.PNG" width="400" height="450" />
</p>

Y aquí un vídeo de como funciona con el monitor serie:

[![](https://img.youtube.com/vi/)](https://www.youtube.com/watch?v=) 

https://kio4.com/arduino/5b_mapear.htm

# Reto 5: Encendido progresivo de un diodo LED con un potenciómetro, utilizando Duty Cycle.

Para este último reto antes del primer reto no guiado, vamos a utilizar todo lo aprendido anteriormente, sobre todo con las prácticas del potenciómetro. Vamos a necesitar cables, un potenciómetro, un diodo LED y una placa. Vamos a introducir dos nuevos conceptos que nos serán de mucha utilidad, tanto para esta práctica como para posteriores. Durante estas prácticas hemos visto que podemos conectar componentes digitales a los 13 pines digitales superiores de la placa, y también componentes analógicos en los pines analógicos inferiores. Nosotros queremos regular la luminosidad del LED, pero claro, el componente solo tiene dos valores, por lo tanto es digital, no podemos utilizar los pines analógicos. Para ello utilizamos el PWM (Modulación por Ancho de Pulso). Este son unos pines digitales que te permiten simular la salida analógico mediante pulsos digitales rápidos (de entre 0V y 5V, ya que sigue siendo un componente digital). Nos encontramos con 6 pines digitales PWM (pin 3, 5, 6, 9, 10 y 11. Podemos identificarlos porque al lado del número tienen una virgulilla), en los que vamos a conectar nuestro LED. Para esta práctica lo conecté en el pin 6. 

Perfecto, ahora pasamos al Duty Cycle. Este es el porcentaje de tiempo en que la señal que se envía al componente que sea (en este caso un LED) está en ``HIGH``. Como Arduino no puede dar voltajes intermedios (solo da 0V o 5V), usa el Duty Cycle para engañar a los componentes haciendo parpadeos tan rápidos que el ojo humano no los nota. El resultado es un voltaje promedio. Siempre parpadea a la misma frecuencia (490 Hz o 980 Hz según el pin), pero varía la duración de cada parpadeo, por lo tanto, cambia el voltaje promedio, cuanto más bajo sea ese voltaje, más tenue se verá la luz. No debemos confundir estos conceptos. Los valores del Duty Cycle van del 0 al 255, es decir, tiene 256 valores.

Ahora pasamos a aplicar esto al código. Para empezar, debemos de crear 4 variables: una la llamaremos LED1, LED6 o como queráis y le ponéis el pin en el que la hayáis colocado (``int LED=6;``); otra, donde digamos en qué pin va el potenciómetro (``int pot=A0;``), la siguiente, la de los valores del potenciómetro (``int valorpot;``), por último, una variable llamada dutycyle (``int dutycycle;``).

Ya tenemos creadas nuestras variables, ahora pasamos al ``void setup``. En este caso, declaramos el pin en el que está el LED con ``pinMode`` y ponemos el ``Serial.begin`` para el monitor serie. 

Ahora tenemos el ``void loop``. En la práctica anterior, aprendimos a utilizar el mapeado. En esta la vamos a aplicar transformando los valores del potenciómetro (de 0 a 1023) respecto a los valores de Duty Cycle y PWM (0 a 255). Así podremos controlar la luminosidad del LED con nuestro potenciómetro. Primero, colocamos la lectura de los valores del potenciómetro dentro de la variables ``valorpot`` utilizando ``analogRead``. Segundo, mapeamos los valores con la función ``map`` y los metemos en la variable ``dutycycle``, quedando así: ``dutycycle=map(valorpot, 0, 1023, 0, 255);``. Tercero, utilizamos el comando ``analogWrite``, que lo que hace es enviarle al LED la señal de que adopte ese valor, en vez de leer los valores los recibe y los adopta (en este caso de 0 a 255 al utilizar Duty Cycle, ya veremos que con otros componentes cambia). Para ello, debemos de escribir lo siguiente: ``analogWrite (LED, dutycycle);``. Aquí le estamos diciendo que el LED escriba de manera analógica los valores que se recojan en la variable ``dutycycle``. Y ,finalmente, por último en ``Serial.println``, colocamos la variable ``dutycycle`` para ver los valores transformados en el monitor serie.

Aquí podemos ver cómo quedaría el código completo:

<p align="center">
<img src="Imágenes/CÓDIGO RETO 5.PNG" width="400" height="450" />
</p>

Y por aquí un vídeo del montaje y del LED variando su luminosidad girando el potenciómetro:

[![](https://img.youtube.com/shorts/lNvYDDDU6xU)](https://youtube.com/shorts/lNvYDDDU6xU) 

https://kio4.com/arduino/6pwm.htm

# Reto no dirigido 1: Encendido progresivo de 5 diodods LED usando un potenciómetro.

Para esta práctica no dirigida (sin ayuda del profesor), hemos aplicado todo lo visto anteriormente y aplicando un par de cosas nuevas. De lo que se trataba esta práctica era de encender poco a poco cada uno de los 5 diodos utilizados, utilizando también el PWM y el potenciómetro para que se fueran encendiendo progresivamente (aumentando su intensidad de luz). 

La práctica es muy básica pero hay que tener claros todos los conceptos para poder realizarla. Además, hemos introoducido los llamados valores frontera. Estos son, en pocas palabras, los valores mínimos y máximos que una variable, un sensor o un actuador pueden alcanzar. En este caso, los vamos a utilizar para mapear los valores del portenciómetro. Debemos de dividir los valores de este entre los 5 diodos y establecer una serie de rangos (se puede hacer exacto o aproximando, como se prefiera). Con rangos me refiero a un valor mínimo y un máximo, por ejemplo de 234 hasta 567. Cuando tengamos esos rangos, debemos crear una serie de ``if`` para poder mapear los valores del potenciómetro de cada uno de los rangos respecto a los 255 valores de cada diodo. Se verá mejor ahora con el código completo.
