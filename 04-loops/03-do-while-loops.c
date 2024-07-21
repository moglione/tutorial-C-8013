/*
------------------------------------------------------------------------------------
Bucle do ... while 
A diferencia de los bucles for y while, que prueban la condicion del bucle en la 
parte superior del bucle, el bucle do... while en la  C verifica su condicion en 
la parte inferior del bucle.
Un bucle do... while es similar a un bucle while, excepto por el hecho de que 
se garantiza que se ejecutara al menos una vez.
------------------------------------------------------------------------------------
 La sintaxis general para los bucles do-while en C es:

 do {
   
   // muchas cosas
   // para hacer
 
 } while(condicion);
-------------------------------------------------- ----------------------------------
*/

// ejemplo
#include <stdio.h>
int main()
{  // aqui es donde el programa comienza a ejecutarse
 
    // declaracion de variable local
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
 Desafios:
 Usando un bucle do-while:
 1. Imprime todos los numeros del 1 al 10.
 2. Imprima todos los numeros pares hasta el 25.
------------------------------------------------------------------------------------
*/
