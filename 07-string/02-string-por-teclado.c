/*
-------------------------------------------------- ----------------------------------
-una de la manera mas simple de ingresar una string por teclado para luego 
usarla en el programa es usando la funcion gets()
------------------------------------------------------------------------------------
*/

// se incluye para poder usar las 
// funciones gets() y printf
#include <stdio.h>

int main(){

    char texto[20];

    printf("escriba un texto y luego presione enter: ");
    gets(texto); // gets espera que se preione enter 
    printf("el texto ingresado es: %s", texto);

    return 0;
}


/*
------------------------------------------------------------------------------------
 Desafío: 
 Escriba un program quye pida al usuario su nombre, su edad y su nacionalidad que
 luego imprima esos datos por pantalla.
------------------------------------------------------------------------------------
*/
