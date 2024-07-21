/*
------------------------------------------------------------------------------------
 Declaración if...else
 En declaración If...else si la expresión booleana se evalúa como verdadero, 
 entonces se ejecutará el bloque if, de lo contrario, se ejecutará el bloque else.
 ------------------------------------------------------------------------------------
 La sintaxis general de if-else en C es:
 si (expresión_booleana) 
 {
      declaración //Si la expresión es verdadera, ejecutará esta línea
 } 
 else 
 {
      declaración //Si la expresión es falsa, ejecutará esta línea
 }
-------------------------------------------------- ----------------------------------
*/

#include <stdio.h>

// ejemplo
int main(){  
     
     // se declara e inicializa la variable numero
     int numero = 12;

     // verifica la condición booleana usando la declaración if...else
     // se comprobará si el número es mayor que cero o no
     if(numero > 0)
     {
         // si la condición es verdadera entonces imprimirá la siguiente declaración
         printf("%d es un numero positivo", numero);
     } 
     else 
     {
        // si la condición es falsa entonces imprimimos la siguiente declaración
        printf("%d es un numero negativo", numero);
     }

    return 0;
}

/*
------------------------------------------------------------------------------------
 Desafio 1: 
 Comprueba si un número es mayor que 18 o no.
 
 Desafio 2:
 haga un programa en el que se ingresen dos numeros e imprima cual es el mayor

 deafio 3:
 Usando varios if sin el else, escriba un programa que lea un número entero entre
 1 y 7 e imprima el día de la semana correspondiente a ese número. Es decir, el domingo
 si es 1, lunes, si es 2, y así sucesivamente. 

------------------------------------------------------------------------------------
*/
