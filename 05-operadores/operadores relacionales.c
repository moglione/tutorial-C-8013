/* 
------------------------------------------------------------------------------------
/*
------------------------------------------------------------------------------------
 Algunos de los operadores que se utilizan frecuentemente en bucles while, for 
 o condicionales if son los operadores relacionales.
 Para examinar la relación entre las dos variables, se emplean 
 operadores relacionales en C.
 estos operadores devolverá el valor 1 (verdadero) si la relación es verdadera o
 el valor cero(falso) si la relacion no se cumple.
  ------------------------------------------------------------------------------------------
  | Operador |    Uuso     | Pregunta a responder por V o F     |         Ejemplo          |
  ------------------------------------------------------------------------------------------
  |  ==      |     x==y    |   x es igual a y ?                 |  10==10 verdadero [1]    |
  |-----------------------------------------------------------------------------------------
  |  !=      |    x!=y     |   x es diferente de y ?            |  5!=6   verdadero [1]    |
  |-----------------------------------------------------------------------------------------
  |  >       |   x>y       |   x es mayor que y  ?              |  9>10   falso [0]        |
  |-----------------------------------------------------------------------------------------
  | >=       |  x>=y       |   x es mayor o igual a y ?         |  10>=9  verdadero [1]    |
  |-----------------------------------------------------------------------------------------
  |  <       |  x<y        |  x es menor que y ?                |  5<3    falso [0]        |
  |-----------------------------------------------------------------------------------------
  |  <=      |  x<=y       |  x menor o igual a y               | 8<=8    verdadero [1]    |
  ------------------------------------------------------------------------------------------
           
------------------------------------------------------------------------------------
*/
#include <stdio.h>   // para poder usasr la funcion printf() 

int main() {   // The main function
  
  //  se declaran e inicializan dos variables
  int a = 5; 
  int b = 10;
  
  if (a > b) printf("a es mayor que b\n");
    
  if (a >= b) printf("a es mayor que o igual que b\n");
  
  if (a < b) printf("a es menor que b\n");
  
  if (a <= b) printf("a es menor o igual que b\n");
    
  if (a == b) printf("a es igual a b\n");
    
  if (a != b) printf("a es diferente de b\n", a, b);
    
  return 0;
}
/*
------------------------------------------------------------------------------------
 Desafío: 
 tome la entrada del usuario y compárela con el numero 10; 
 si la entrada del usuario es mayor que 10, imprima "mayor".
 si la entrada es menor que 10, imprima "menos" 
 y si la entrada es igual a 10, imprima "igual".
 
 -Ejemplo:
 - si el usuario ingresó 11, entonces la salida debería ser "mayor".
 - Si el usuario ingresó 8, entonces la salida debería ser "menos".
 - si el usuario ingresó 10, entonces la salida debe ser "igual".
------------------------------------------------------------------------------------
*/
