/* 
------------------------------------------------------------------------------------
Este programa muestra el funcionamiento de los operadores aritmeticos. 
La variable x se utiliza primero para almacenar la suma 
de los dos numeros, luego su diferencia,  producto, etcetera.
------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    int n1, n2, x;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    
    x = n1+n2;  // suma
    printf("n1 + n2 = %d \n", x);
    
    x = n1-n2;  // resta
    printf("n1 - n2 = %d \n", x);
    
    x = n1*n2;  // multiplicacion
    printf("n1 * n2 = %d \n", x);
    
    x = n1/n2;  // division
    printf("n1 / n2 = %d \n", x);
    
    x = n1%n2;  // resto division entera
    printf("n1 %% n2 = %d \n", x);
    
    x = 0;  // se pone el valor de x a 0
    
    printf("el valor de x ahora es = %d \n", x);

    // se incrementa el valor de x
    x++; 
    printf("el valor de x ahora es = %d \n", x);

    // se vuelve a incrementar el valor de x
    x++; 
    printf("el valor de x ahora es = %d \n", x);

    // se vuelve a incrementar el valor de x
    x++; 
    printf("el valor de x ahora es = %d \n", x);

    // se decrementa el valor de x
    x--; 
    printf("el valor de x ahora es = %d \n", x);

    // se vuleve a decrementar el valor de x
    x--; 
    printf("el valor de x ahora es = %d \n", x);


    
}
/*
------------------------------------------------------------------------------------
 Desafio: 
 tome 2 numeros como entradas del usuario. 
 Realice las operaciones anteriores en las entradas y imprima una aviso que diga
 el resultado de cada operacion es par o impar. 
------------------------------------------------------------------------------------
*/
