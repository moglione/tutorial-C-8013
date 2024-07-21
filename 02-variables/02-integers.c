/*
------------------------------------------------------------------------------------
 El tipo int (entero) es uno de los tipos de datos del lenguaje  C.
 El tamaño de int es ocupa en memoria 2 bytes o  4 bytes segun el compilador.
 Los int son números enteros, pueden ser cero, valores positivos o negativos, 
 pero no valores decimales( con coma, o en realidad punto).
 Por ejemplo, 0, -3, 11 son enteros.
 No son int: 3.141516, 2.67, 1.67
------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
  int edad;  // declara la variable edad como un entero

  edad= 27;  // le asigna un valor a la variable tipo entera
  
  // este printf imprime dos variable, una es la edad y la otra es 
  // el caracter ascii 164
  printf("Mi nombre es juan tengo %d a%cos de edad.\n", age, 164);

  return 0;
}
/*
------------------------------------------------------------------------------------
Desafío: 
leer dos valores enteros, en este caso para las variables 'a' y 'b'. 
Luego calcula la suma entre ellos y asignarlo a una variable llamada 'suma'. 
Luego imprima el valor de la variable 'suma'.
------------------------------------------------------------------------------------
*/
