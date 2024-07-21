/*
------------------------------------------------------------------------------------
Bucle do ... while 
A diferencia de los bucles for y while, que prueban la condición del bucle en la 
parte superior del bucle, el bucle do... while en la  C verifica su condición en 
la parte inferior del bucle.
Un bucle do... while es similar a un bucle while, excepto por el hecho de que 
se garantiza que se ejecutará al menos una vez.
------------------------------------------------------------------------------------
 La sintaxis general para los bucles do-while en C es:

 do {
   
   // muchas cosas
   // para hacer
 
 } while(condición);
-------------------------------------------------- ----------------------------------
*/

// ejemplo
#include <stdio.h>
int main()
{  // aquí es donde el programa comienza a ejecutarse
 
    // declaración de variable local
    int numero = 2;
    // do loop execution
    do
    {
        printf("el numero es: %d\n", numero);
        // se incrementa el numero en cada paso
        numero = numero + 1;
        
 
    } while (numero < 5);  // mientras numero sea menor que 5 seguira el bucle
    
    return 0;
}
/*
------------------------------------------------------------------------------------
 Desafíos:
 Usando un bucle do-while:
 1. Imprime todos los números del 1 al 10.
 2. Imprima todos los números pares hasta el 25.
------------------------------------------------------------------------------------
*/
