/* 
------------------------------------------------------------------------------------
 En este ejemplo veremos como comentar en el programa C.
 Comentar en el codigo se considera una buena practica ya que el programador
 puede guardar notas breves que expliquen lo que hace el codigo.
 Durante la ejecucion de un programa se omiten todos los comentarios.
 Comentar no tiene restricciones ni alcance.
 Se puede colocar en cualquier parte del programa.
 Hay dos tipos de comentarios:
 1. Comentario de una sola linea
 2. Comentario de varias lineas
 Explora el siguiente codigo para obtener una vision sobre como comentar en c.
------------------------------------------------------------------------------------
*/

// Los comentarios sirven como notas para explicar
// que hace cada parte de un programa
#include <stdio.h>
int main()
{
    // este es un comenatrio de una sola linea
    int a = 5;
    
    /*
    Este es un comentario de varias lineas
    y puiede ocupar la cantidad de lineas que se quiera
    */

    // un comentario puede servir para descativar una linea de programa
    // a=8;

    printf("%d", a);  // Tambien podemos poner comentarios al lado de una linea como esta.
    return 0;  /* Incluso los comentarios de varias lineas tambien se pueden colocar al lado de una linea. */
}
/*
------------------------------------------------------------------------------------
 Desafio 1:  Escriba un programa en C para sumar dos numeros e incluya 
 comentarios que expliquen brevemente todas y cada una de las lineas de codigo.

 Desafio 2:  Modifique el programa del Desafio1 para que ahora reste dos numeros, 
 pero no borre la linea que los sumaba desactivela con un comentario. 
------------------------------------------------------------------------------------
*/
