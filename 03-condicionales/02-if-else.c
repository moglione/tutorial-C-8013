/*
------------------------------------------------------------------------------------
 Declaracion if...else
 En declaracion If...else si la expresion booleana se evalua como verdadero, 
 entonces se ejecutara el bloque if, de lo contrario, se ejecutara el bloque else.
 ------------------------------------------------------------------------------------
 La sintaxis general de if-else en C es:
 si (expresion_booleana) 
 {
      declaracion //Si la expresion es verdadera, ejecutara esta linea
 } 
 else 
 {
      declaracion //Si la expresion es falsa, ejecutara esta linea
 }
-------------------------------------------------- ----------------------------------
*/

#include <stdio.h>

// ejemplo
int main(){  
     
     // se declara e inicializa la variable numero
     int numero = 12;

     // verifica la condicion booleana usando la declaracion if...else
     // se comprobara si el numero es mayor que cero o no
     if(numero > 0)
     {
         // si la condicion es verdadera entonces imprimira la siguiente declaracion
         printf("%d es un numero positivo", numero);
     } 
     else 
     {
        // si la condicion es falsa entonces imprimimos la siguiente declaracion
        printf("%d es un numero negativo", numero);
     }

    return 0;
}

/*
------------------------------------------------------------------------------------
 Desafio 1: 
 Comprueba si un numero es mayor que 18 o no.
 
 Desafio 2:
 haga un programa en el que se ingresen dos numeros e imprima cual es el mayor

 deafio 3:
 Usando varios if sin el else, escriba un programa que lea un numero entero entre
 1 y 7 e imprima el dia de la semana correspondiente a ese numero. Es decir, el domingo
 si es 1, lunes, si es 2, y asi sucesivamente. 

------------------------------------------------------------------------------------
*/
