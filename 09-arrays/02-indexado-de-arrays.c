/*
------------------------------------------------------------------------------------
 Este programa trata sobre la indexacion de matrices en lenguaje C.
 
 - En lugar de definir variables distintas para cada elemento, 
   se utilizan matrices para contener numerosos valores en una sola variable.
 
 - Para acceder a un elemento de la matriz, consulte su numero de indice.
 
 - Los indices de matriz comienzan con 0: [0] es el primer elemento. 
   [1] es el segundo elemento, etc.
 
 - El ultimo elemento de la matriz esta en la posicion n-1 (donde n es el numero 
 total de elementos presentes en la matriz).
 
 - considere el siguiente ejemplo:

 ------------------------------------
 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | <---- esta es la matriz x con 7 elementos (n = 7)
 ------------------------------------
   0    1    2    3    4    5    6    (n-1)
-------------------------------------------------- ----------------------------------
*/

#include <stdio.h>  // para usar printf se debe incluir stdio.h
int main() {  //la funcion principal (mai)
  
  // declarando matriz x
  // la matriz x tiene 7 elementos
  int x[]={11, 12, 13, 14, 15, 16, 17};  // tambien podes definirlo asi x[7]
  
  // imprime el elemento en la posicion 0
  printf("el elemento en la primera posicion es = %d \n", x[0]);
  
  // imprime el elemento en la cuarta posicion
  printf("el elemento en la cuarta posicion es = %d \n", x[3]);
  
  // imprime el elemento de la ultima posicion
  printf("el ultimo elemento de la array es = %d \n", x[6]);
  return 0;
}
/*
------------------------------------------------------------------------------------
 Desafio: 
 Defini una matriz x[]={5, 6, 3, 8, 29, 33, 2, 7} e imprimi 
 la suma de todos los elementos cuya posicion sea par.
 
 ejemplo:
 - tienes una matriz y[]={12, 22, 43, 54, 35}
 - las posiciones pares son 0, 2, 4
 - los elementos presentes en estas pociones son 12, 43, 35 respectivamente
 - entonces la suma deberia ser 12+43+35=90
 - entonces la salida deberia ser 90.
 ------------------------------------------------------------------------------------
*/
