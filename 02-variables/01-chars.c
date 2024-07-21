/*
-------------------------------------------------- ----------------------------------
C usa el tipo char para almacenar caracteres y letras.
Pero, en el fondo, C almacena numeros enteros en lugar de caracteres.
Los valores de caracteres se almacenan en 1 byte en la memoria y 
el valor varia de -128 a 127 o de 0 a 255.
Para representar caracteres, la computadora tiene que asignar cada numero entero
con un caracter correspondiente mediante un codigo numerico.
El codigo numerico mas comun es ASCII.
-------------------------------------------------- ----------------------------------
*/

#include <stdio.h>
int main()
{
    char caracter = 'R';
    printf("caracter = %c, guardado como char\n", caracter);
    printf("caracter = %d, guardado como integer\n", caracter);
    return 0;
}
/*
------------------------------------------------------------------------------------
Desafio 1 :
Crea un programa que pregunte: "¿Sos humano? ('s'o 'n')" y capta la respuesta en una variable char.
Luego, imprime en la consola la respuesta.

Desafio 2: 
Codifica un programa que lea cuatro carecteres desde el teclado y que los luego
de ingresados los imprima en el orden inverso en el que se ingresaron.


------------------------------------------------------------------------------------
*/
