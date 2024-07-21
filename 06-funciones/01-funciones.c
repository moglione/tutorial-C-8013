/*
------------------------------------------------------------------------------------
- Una funcion es un bloque de codigo que solo se ejecuta cuando se lo llama.
- Puede pasarle datos, conocidos como parametros, a una funcion.


- La sintaxis de una funcion es asi:
  
    tipo_funcion nombre_funcion (tipo y nombre de argumentos) 
    {
          //bloque de sentencias
    } 


- El tipo de retorno es el tipo de datos (como: int, char, float, etc.) 
  que la funcion va a devolver.

- Cada funcion tiene un nombre por el cual es conocida por el resto del programa. 
- Normalmente, cada funcion realiza una accion, por lo que el nombre deberia dejar claro que hace esa funcion.
- El nombre de una funcion en C puede ser cualquier cosa, desde una sola letra hasta una palabra larga.
- Una funcion definida por el usuario no puede llamarse main. 

- La lista de parametros es el nombre de todos los parametros con su tipo de datos 
  que se pasaran en la funcion.

- La funcion tiene que estar definida antes de usarse.
------------------------------------------------------------------------------------
*/

// se incluye el archivo de cabecera
#include<stdio.h>  // se incluye <stdio.h> para usar la funcion printf()


////////////////////////////////////////////////////////////////////////// 
// Se define la funcion "max" que devuelve el maximo entre dos numeros 
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
 Desafio:
 Escriba un programa usando una funcion que calcule el factorial del numero dado 
 por el usuario.
 
 - ejemplo:
 - si llamaste a la funcion fact(5), deberia devolver 120 (1 * 2 * 3 * 4 * 5).
 - si llamaste a la funcion fact(3), deberia devolver 6 (1 * 2 * 3).
------------------------------------------------------------------------------------
*/
