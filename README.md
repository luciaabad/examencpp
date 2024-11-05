# examencpp
https://github.com/luciaabad/examencpp.git

Parte 2: Problemas de Codificación (70 puntos en total)
Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero". 

Primero pedimos un numero entero y luego utilizamos una condicional patra ver si el numero es positivo, negativo o 0. 
La primera condicion preguntamos que si el numero es mayor que 0, el numero es positivo, dentro de esta ponemos que si el numero es menor de 0 el numero es negativo. Por ultimo si el numero no cumple ninguna de esas condiciones el numero es 0.

Ejercicio 2: Día de la Semana
Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 

Para este ejercicio he utilizado el switch. Primero he pedido que ingrese un numero del 1 al 7. Desopues utlizamos el switch para asignar cada caso (los numeros del 1 al 7) con cada dia de la semana.


Ejercicio 3: Cálculo de Promedio de Calificaciones
Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones. 

#fuente chatgpt
Primero declkaramos todas las variables necesarias. Luego pedimos que ingrese la calificacion. Utilizamos un bucle for para pedir la calificacion de los 8 ejercicios. Despues utilizamos la condicional para comprobar que la calificacion se encuentra entre el 0 y el 10. Si es así hacemos la suma de la calificaciones. Por ultimo, hacemos la media de las calificaciones dividiendo la suma entre el numro de ejercicios.

Ejercicio 4: Promoción de "3 por 2" en Tienda
En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.

#chatgpt
Primero declaramos las variables de los tres precios y pedimos que ingrese su valor.
Utilizamos un arreglo para ordenar los tres precios de mayor a menor. Despues una vez vistos los mas caros, pedimos que los sume y que nos de la cantidad de dinero.
