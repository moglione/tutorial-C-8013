/*
------------------------------------------------------------------------------------
- Una función es un bloque de código que solo se ejecuta cuando se lo llama.
- Puede pasarle datos, conocidos como parámetros, a una función.


- La sintaxis de una función es asi:
  
    tipo_función nombre_función (tipo y nombre de argumentos) 
    {
          //bloque de sentencias
    } 


- El tipo de retorno es el tipo de datos (como: int, char, float, etc.) 
  que la función va a devolver.

- Cada función tiene un nombre por el cual es conocida por el resto del programa. 
- Normalmente, cada función realiza una acción, por lo que el nombre debería dejar claro qué hace esa funcion.
- El nombre de una función en C puede ser cualquier cosa, desde una sola letra hasta una palabra larga.
- Una funcion definida por el usuario no puede llamarse main. 

- La lista de parámetros es el nombre de todos los parámetros con su tipo de datos 
  que se pasarán en la función.

- La funcion tiene que estar definida antes de usarse.
------------------------------------------------------------------------------------
*/

// se incluye el archivo de cabecera
#include<stdio.h>  // se incluye <stdio.h> para usar la función printf()


////////////////////////////////////////////////////////////////////////// 
// Se define la funcion "max" que devuelve el máximo entre dos números 
// la primera linea define
// valor devuelto por la funcion
// nombre de la funcion
// parametros que necesita la funcion 
int max(int num1, int num2) {   
  /* se decalra una variabl local (se usa solo en esta funcion)*/
  int result;

  //se comparan dos nuemro y se devuelve el mas grande
  if (num1 > num2) result = num1;  
  else result = num2;
  return result;
}


////////////////////////////////////////////////////////////////////////
// la funcion main (punto de entrada del programa)
int main() {
  /* variables locales a main */
  int a = 100;
  int b = 200;
  int ret;
  
  // se llama a la funcion "max"
  // que ya es conocida porque esta definida
  // mas arriba
  ret = max(a, b);
  printf("el valor maximo es : %d\n", ret);
  return 0;
}


/*
------------------------------------------------------------------------------------
 Desafío:
 Escriba un programa usando una función que calcule el factorial del número dado 
 por el usuario.
 
 - ejemplo:
 - si llamaste a la función fact(5), debería devolver 120 (1 * 2 * 3 * 4 * 5).
 - si llamaste a la función fact(3), debería devolver 6 (1 * 2 * 3).
------------------------------------------------------------------------------------
*/
