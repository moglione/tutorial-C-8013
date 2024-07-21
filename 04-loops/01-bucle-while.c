/*
----------------------------------------------------------------------------------------
 Tutorial:
 La sintaxis de un bucle while en el lenguaje de programacion C es: 
  while(condicion) 
  { 
    // hacer cosas 
    // una y otra vez
    // mientras 
    // while se cumpla 
  }
 
 Aqui, las declaraciones pueden ser una sola declaracion o un bloque de declaraciones. 
 El bucle se repite mientras la condicion sea verdadera.
 en C como en la logica de bool 
 1 es verdadero
 0 es falso
----------------------------------------------------------------------------------------
*/

// Esta es una directiva de preprocesador
// para nncluir la biblioteca de entrada 
// y salida estandar en nuestro programa.
#include <stdio.h>

// La funcion 'main' es el punto de entrada al programa
int main()
{
    // definicion e inicializacion de una  variable
    int a = 1;

    /*
    while loop will run till condition (a<=5) is true, that is till a=5 loop will be executed,
    so loop will run 5 times.
    El bucle while se ejecutara mientras que la condicion (a<=5) sea verdadera, 
    es decir, el bucle seguira hasta que a=5. E
    Entonces en este caso, el bucle se ejecutara 5 veces.
    */
    while (a <= 5)
    {
        // La funcion printf se utiliza para 
        // enviar datos a la pantalla (consola)
        printf("el bucle se esta ejecutando \n");

        // incrementando la variable a 
        // en +1 cada vez que se ejecuta el bucle
        a++;
    }
    
    printf("el bucle termino, cuanto renglones se imprimieron antes que este? \n");


    return 0;
}
/*
------------------------------------------------------------------------------------
 Desafio: 
 edite el codigo anterior para imprimir "Me encanta el bucle while" 
 10 veces en la pantalla
------------------------------------------------------------------------------------
*/
