/* 
------------------------------------------------------------------------------------
Practica y descubrimiento:
Este programa le pide al usuario que ingres dos numeros
y luego imprime en pantalla el reultado de la suma.

Compilalo y ejecutalo para ver que hace.

------------------------------------------------------------------------------------
*/

#include "stdio.h"

int main() {
  float a,b;
  
  printf("ingrese el primer numero: ");
  scanf("%f", &b);
  
  printf("ingrese el segundo numero: ");
  scanf("%f", &b);
  
  printf("A+B = %.2f\n", a+b);
  
  return 0;
}

/* 
------------------------------------------------------------------------------------
Desafio 1: Modifica el programa para que ademas de la suma imprima la resta, 
la multiplicacion y la division de los dos numeros ingresados

Desafio 2: Fijate que el formato de salida no es solo %f ahora es %.2
que significara? 
que pasa si cambia el %.2 por %.4?
en un comentario explica que es lo que hace el %.2f

Desafio 3: comenta cada linea del programa explicando que es lo que hace

------------------------------------------------------------------------------------
*/

