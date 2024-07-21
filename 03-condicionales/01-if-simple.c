/*
------------------------------------------------------------------------------------
 Declaracion if simple
 En declaracion if si la expresion booleana se evalua como verdadero, 
 entonces se ejecutara el bloque  a continuacion de if
 de lo contrario, si se evalua como falso NO se ejecutara el bloque.
 ------------------------------------------------------------------------------------
 La sintaxis general de if en C es:
 si (expresion_booleana) 
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
    scanf("%d", &hora);

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
 Usando varios if, escriba un programa que lea un numero entero entre
 1 y 7 e imprima el dia de la semana correspondiente a ese numero. Es decir, el domingo
 si es 1, lunes, si es 2, y asi sucesivamente. 
------------------------------------------------------------------------------------
*/
