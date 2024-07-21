/*
---------------------------------------------------------------------------------------------------------------------------------
 Este ejemplo trata sobre cómo utilizar la función printf en lenguaje c.
 - Printf() es una de las funciones de salida principales en la programación en C. 
 - La función envía una salida formatead a la pantalla.
 - Debemos usar la declaración #include <stdio.h> para incluir el archivo de encabezado stdio.h para poder usar printf() 
 - Usamos el especificador de formato %d para imprimir tipos int. El %d se reemplaza por el valor de la variable.
 - Para imprimir flotantes, utilizamos el especificador de formato %f.
 - para imprimir caracteres, utilizamos el especificador de formato %c.
 - También se pueden realizar algunas operaciones aritméticas dentro de la funcion.
 - La función printf devuelve el número de caracteres impresos o un valor negativo si se produce un error.
-----------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>   // Se debe utilizar la declaración "#include <stdio.h>"" 
                     // si queremos utilizar printf().

int main() {  // la funcion principal empieza aca
  
  // imprime la cadena completa usando comillas dobles ("").
  printf("Hello World \n");  // \n se utiliza para generar un nuevo renglon (salto de línea)

  // printf devuelve el número de caracteres impresos
  // por la tanto la variable X debera tener la cantidad de caracteres de "Hola Sanjo 8013"
  int x = printf("Hola Sanjo 8013");
  printf("\n %d \n", x);  // 15 es la salida (nota: se cuenta el carácter de espacio)

  // se declaran e inicializan las variables
  int a = 10;
  char c = 'c';
  float f = 12.3;
  

  // Para imprimir tipos int, utilizamos el especificador de formato %d. 
  // El valorde la variable se sustituye por %d.
  printf("Integer a = %d \n", a);

  // Para imprimir el tipo char, se utiliza %c.
  printf("Character c = %c \n", c);

  // Para imprimir flotante, usamos el especificador de formato %f.
  printf("Float f = %f \n", f);

  // Puede realizar alguna operación dentro de la función printf y se mostrará el resultado.
  printf("a + f = %f \n", a+f);

  return 0;
}

// aca termina la funcion principal (main)

/*
-------------------------------------------------- ------------------------------------------------------------------------------------
Desafío: a dos  variables llamadas a y b asignele dos numeros y luego imprima el número de caracteres 
que tiene cada numero. Luego imprima la suma del número de elementos presentes en a y b.
 ejemplo:
 - a = 12343212  
 - b = 8877.88
 - el número de caracteres en a es 8 y en b es 7.
 - la suma es 15.


---------------------------------------------------------------------------------------------------- ----------------------------------
*/