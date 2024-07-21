/*
------------------------------------------------------------------------------------
Un bucle for se utiliza para repetir un bloque de código específico 
un número conocido de veces.
Sintaxis: 
for (valor inicial ; condición ; incremento/decremento)
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
Desafío: 
use un bucle for para sumar números del 1 al 10.
------------------------------------------------------------------------------------
*/
