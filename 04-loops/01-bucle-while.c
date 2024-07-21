/*
----------------------------------------------------------------------------------------
 Tutorial:
 La sintaxis de un bucle while en el lenguaje de programación C es: 
  while(condición) 
  { 
    // hacer cosas 
    // una y otra vez
    // mientras 
    // while se cumpla 
  }
 
 Aquí, las declaraciones pueden ser una sola declaración o un bloque de declaraciones. 
 El bucle se repite mientras la condición sea verdadera.
 en C como en la logica de bool 
 1 es verdadero
 0 es falso
----------------------------------------------------------------------------------------
*/

// Esta es una directiva de preprocesador
// para nncluir la biblioteca de entrada 
// y salida estándar en nuestro programa.
#include <stdio.h>

// La función 'main' es el punto de entrada al programa
int main()
{
    // definición e inicialización de una  variable
    int a = 1;

    /*
    while loop will run till condition (a<=5) is true, that is till a=5 loop will be executed,
    so loop will run 5 times.
    El bucle while se ejecutará mientras que la condición (a<=5) sea verdadera, 
    es decir, el bucle seguira hasta que a=5. E
    Entonces en este caso, el bucle se ejecutará 5 veces.
    */
    while (a <= 5)
    {
        // La función printf se utiliza para 
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
 Desafío: 
 edite el código anterior para imprimir "Me encanta el bucle while" 
 10 veces en la pantalla
------------------------------------------------------------------------------------
*/
