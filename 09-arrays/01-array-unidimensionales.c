/*
------------------------------------------------------------------------------------
Los array (matrices de una dimension o vectores) se utiliza para almacenar una 
coleccion de datos bajo un mismo nombre de variable
------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
   int puntaje[5];  /* puntajes es una  array de 5 enteros */
   int index;

   //se cargan los puntajes en cada uno
   //de los elementos de la array 
   puntaje[0]=980;
   puntaje[1]=820;
   puntaje[2]=115;
   puntaje[3]=533;
   puntaje[4]=120;

  
  /* imprime cada elemento dentro de la matriz puntaje */
  for (index = 0; index < 5; index++ )
  {
     printf("puntaje[%d] = %d\n", index, puntaje[index]);
  }

  return 0;
}
/*
-------------------------------------------------- ----------------------------------
Desafio 1 :
Escribi un programa que lea un vector X[5] con datos ingresado por el
usuario desde el teclado. A continuacion calcule la suma de todos los datos.

Desafio 2 :
Codifica un programa que Lea un valor desde el teclado poner el valor leido en la primera 
posicion de una matriz N[10]. En cada posicion subsiguiente, coloque el doble del valor de la
posicion anterior. Por ejemplo, si el valor leido es 2, los valores del vector deben ser
2,4,8,16, etc. Al final imprimir la matriz completa.
------------------------------------------------------------------------------------*/
