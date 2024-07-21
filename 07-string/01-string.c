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

-Metodos para crear/inicializar cadenas en C

I) Asignar un literal de cadena sin tamaño:

 char str[] = "Codigo";

II) Asignar un literal de cadena con un tamaño predefinido

 char str[5] = "Codigo";

 Nota: declare siempre una cadena con un tamaño igual o mayor que n+1.

III) Asignacion caracter por caracter con tamaño:

 char str[14] = { 'C','o','d','e','\0'};

 Nota: recuerde establecer el caracter final como "\0", que es un caracter nulo.

IV) Asignacion caracter a caracter sin tamaño:

 char str[] = { 'C','o','d','e','\0'};

Nota: Las matrices y las cadenas son ciudadanos de segunda clase en C; 
no soportan al operador de asignacion una vez declarado.
 
 por ejemplo:

 char c[100];
 c = "programacion C"; // ¡Error! El tipo de matriz no es asignable.

-------------------------------------------------- ----------------------------------
*/

// Archivo de encabezado que incluye la funcion Strlen para encontrar la longitud de la cadena
#include<string.h>  

// para usar la funcion printf
#include<stdio.h>

int main()
{
    int len1, len2, len3;  //se declaran para contener la longitud de la cadena

    char str1[]="SanJo1";  //se declara e inicializa la cadena (string) con el metodo I
    len1 = strlen(str1);
    printf("\n la longitud de %s es %d", str1, len1);  // deberia imprimir 6

    char str2[7]="SanJo2";  //se declara e inicializa la cadena (string) con el metodo II
    len2 = strlen(str2);
    printf("\n la longitud de %s es %d", str2, len2);

    char str3[6]="Sanjo3";  // esto va a generar un error porque el tama�o para guardar
    len3 = strlen(str3);  // la string es muy chico, falta un byte mas para el caracter de final (\0)
    printf("\n la longitud de %s is %d", str3, len3);
}
/*
------------------------------------------------------------------------------------
 Desafio: 
 Inicialice una cadena con la string "En el Sanjo aprendo programacion en C" 
 usando diferentes metodos  e imprima la cadena en pantalla.
------------------------------------------------------------------------------------
*/
