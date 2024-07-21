/*
-------------------------------------------------- ----------------------------------
-Las cadenas (strings) se utilizan para almacenar texto/caracteres.
-En C, debes usar el tipo char y crear una matriz de caracteres para formar una cadena.
-Nota: Debe utilizar comillas dobles ("").
-Las string en C se guardan letra por letra, con un caracter nulo (\0) al final para indicar
que termina la cadena.
-El caracter de finalizacion (el nulo) es parte de la string en memoria, asi que sinse 
quiere guardar la plabar "hola" en una variable  char tipo string ocupara en memoria
5 espacios --> "h","o","l","a";"\0"

-Métodos para crear/inicializar cadenas en C

I) Asignar un literal de cadena sin tamaño:

 char str[] = "Código";

II) Asignar un literal de cadena con un tamaño predefinido

 char str[5] = "Código";

 Nota: declare siempre una cadena con un tamaño igual o mayor que n+1.

III) Asignación carácter por carácter con tamaño:

 char str[14] = { 'C','o','d','e','\0'};

 Nota: recuerde establecer el carácter final como "\0", que es un carácter nulo.

IV) Asignación carácter a carácter sin tamaño:

 char str[] = { 'C','o','d','e','\0'};

Nota: Las matrices y las cadenas son ciudadanos de segunda clase en C; 
no soportan al operador de asignación una vez declarado.
 
 por ejemplo:

 char c[100];
 c = "programación C"; // ¡Error! El tipo de matriz no es asignable.

-------------------------------------------------- ----------------------------------
*/

// Archivo de encabezado que incluye la función Strlen para encontrar la longitud de la cadena
#include<string.h>  

// para usar la funcion printf
#include<stdio.h>

int main()
{
    int len1, len2, len3;  //se declaran para contener la longitud de la cadena

    char str1[]="SanJo";  //se declara e inicializa la cadena (string) con el metodo I
    len1 = strlen(str1);
    printf("\n la longitud de %s es %d", str1, len1);  // deberia imprimir 4

    char str2[6]="SanJo";  //se declara e inicializa la cadena (string) con el metodo II
    len2 = strlen(str2);
    printf("\n la longitud de %s es %d", str2, len2);

    char str3[5]="Sanjo";  // esto va a generar un error al compilarse porque el tamaño para guardar
    len3 = strlen(str3);  // la string es muy chico, falta un byte mas para el caracter de final (\0)
    printf("\n Length of %s is %d", str3, len3);
}
/*
------------------------------------------------------------------------------------
 Desafío: 
 Inicialice una cadena con la string "En el Sanjo aprendo programacion en C" 
 usando diferentes métodos  e imprima la cadena en pantalla.
------------------------------------------------------------------------------------
*/
