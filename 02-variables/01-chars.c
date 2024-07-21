/*
-------------------------------------------------- ----------------------------------
C usa el tipo char para almacenar caracteres y letras.
Pero, en el fondo, C almacena números enteros en lugar de caracteres.
Los valores de caracteres se almacenan en 1 byte en la memoria y 
el valor varía de -128 a 127 o de 0 a 255.
Para representar caracteres, la computadora tiene que asignar cada número entero
con un carácter correspondiente mediante un código numérico.
El código numérico más común es ASCII.
-------------------------------------------------- ----------------------------------
*/

#include <stdio.h>
int main()
{
    char character = 'R';
    printf("character = %c, Stored as char\n", character);
    printf("character = %d, Stored as integer\n", character);
    return 0;
}
/*
------------------------------------------------------------------------------------
Desafío 1 :
Crea un programa que pregunte: "¿Sos humano? ('s'o 'n')" y capta la respuesta en una variable char.
Luego, imprime en la consola la respuesta.

Desafío 2: 
Codificá un programa que lea cuatro carecteres desde el teclado y que los luego
de ingresados los imprima en el orden inverso en el que se ingresaron.


------------------------------------------------------------------------------------
*/
