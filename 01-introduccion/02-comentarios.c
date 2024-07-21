/* 
------------------------------------------------------------------------------------
 En este ejemplo veremos cómo comentar en el programa C.
 Comentar en el código se considera una buena práctica ya que el programador
 puede guardar notas breves que expliquen lo que hace el código.
 Durante la ejecución de un programa se omiten todos los comentarios.
 Comentar no tiene restricciones ni alcance.
 Se puede colocar en cualquier parte del programa.
 Hay dos tipos de comentarios:
 1. Comentario de una sola línea
 2. Comentario de varias líneas
 Explorá el siguiente código para obtener una visión sobre cómo comentar en c.
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

    printf("%d", a);  // También podemos poner comentarios al lado de una línea como esta.
    return 0;  /* Incluso los comentarios de varias líneas también se pueden colocar al lado de una línea. */
}
/*
------------------------------------------------------------------------------------
 Desafío 1:  Escriba un programa en C para sumar dos números e incluya 
 comentarios que expliquen brevemente todas y cada una de las líneas de código.

 Desafío 2:  Modifique el programa del Desafio1 para que ahora reste dos números, 
 pero no borre la linea que los sumaba desactivela con un comentario. 
------------------------------------------------------------------------------------
*/
