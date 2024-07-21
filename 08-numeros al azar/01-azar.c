/*---------------------------------------------------------------------------

-Para generar numeros al azar en C se utiliza la función rand().  
-rand() genera números pseudoaleatorios (no totalmente aleatorios). 
-rand() generar números al azar en el rango de 0 a 32787.
-La función rand() es parte de la biblioteca <stdlib.h>, 
por lo que para usar esta función, debemos incluir esta biblioteca.
-La función rand() utiliza de forma predeterminada el valor 1 como semilla 
para generar números pseudo aleatorios, lo que genera la misma secuencia de 
números aleatorios cada vez que se la llama. Para evitar esto, podemos 
utilizar la función srand() para especificar una nueva semilla 
para la función rand() cada vez que se ejecuta el programa.

------------------------------------------------------------------------------*/


#include <stdio.h>   // para usar printf
#include <stdlib.h>  // para usar srand() y rand()
#include <time.h>    // para usar time()

// el punto de entrada
int main()
{
    int i;
    int dado;
    int segundos;

    // la funcion time devuelve la cantidad de segundos que pasaron
    // desde el 1 de enero de 1970 (fecha Epoch)
    // por lo tanto cada vez que se ejecuta entrega un numero mas grande
    // y diferente que el anterior
    segundos=time(0);
    printf("Cantidad de segundos desd el 1 de enero de 1970 = %ld\n", segundos);

    // se inicializa el generador de numero aleatorios con la una semilla
    // que cambia cada vez que se ejecuta el programa, en este caso
    // la cantidad de segundos desde la fecha epoch
    srand(segundos);

    // ahora se generan 20 numeros aleatorios del 1 al 6
    for (i = 0; i < 20; ++i) {
        // la funcion rand genera numero entre el rango 0 - 32787
        // por eso hay que hacer una serie de operaciones
        // matematicas para obtener un numero entre 1 y 6
        dado = (rand () % 6) + 1
        printf ("%d\n", dado);
    }

    return 0;
}


/*---------------------------------------------------------------------------

Desafio 1:
Saca la funcion srand(segundos) del programa (comentala) y ejecuta varias
veces el programa.
¿Que sucede? ¿Podes explicarlo?

Desafio 2:
Escribi un programa que le pida un numero del 1 al 6 al usuario y luego 
genere un numero al azar tambien del 1 al 6 y lo compare con el que
eligio el usuario y le diga si acerto o no, mostrandole el numero
generado

------------------------------------------------------------------------------*/