/*
------------------------------------------------------------------------------------
 Declaración if simple
 En declaración if si la expresión booleana se evalúa como verdadero, 
 entonces se ejecutará el bloque  a continuacion de if
 de lo contrario, si se evalua como falso NO se ejecutará el bloque.
 ------------------------------------------------------------------------------------
 La sintaxis general de if en C es:
 si (expresión_booleana) 
 {
      //bloque que se ejecuta solo si 
      // la expresion_booleana
      // es verdadera
 } 
 
-------------------------------------------------- ----------------------------------
*/


#include <stdio.h>

int main(){

    int hora;

    printf("Digite la hora: ");
    scanf("%d", &dia_semana);

    if(hora<12){
        printf("buen dia");
    }

    if(hora==12){
        printf("buen mediodia");
    }

    if(hora>12){
        printf("buenas tardes");
    }
    

    return 0;
}


/*
------------------------------------------------------------------------------------
desafio :
 Usando varios if, escriba un programa que lea un número entero entre
 1 y 7 e imprima el día de la semana correspondiente a ese número. Es decir, el domingo
 si es 1, lunes, si es 2, y así sucesivamente. 
------------------------------------------------------------------------------------
*/