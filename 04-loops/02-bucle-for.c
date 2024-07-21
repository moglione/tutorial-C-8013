/*
------------------------------------------------------------------------------------
Un bucle for se utiliza para repetir un bloque de codigo especifico 
un numero conocido de veces.
Sintaxis: 
for (valor inicial ; condicion ; incremento/decremento)
{
    // hacer muchas cosas
    // mientras el bucle for se ejecuta
}
------------------------------------------------------------------------------------
*/
#include <stdio.h>

int main()
{
  int i;
  
  // ejecucion de bucle for
  for (i = 0; i < 10; i++)
  {
    printf("el valor de i es: %d\n", i);
  }
  
  return 0;
}
/*
------------------------------------------------------------------------------------
Desafio: 
use un bucle for para sumar numeros del 1 al 10.
------------------------------------------------------------------------------------
*/
