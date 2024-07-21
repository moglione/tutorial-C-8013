/*
-------------------------------------------------------------------------------------
 Este programa trata sobre como se pasan los argumentos a una funcion.

- Para llamar a una funcion especifica en C, necesitamos hacer coincidir la 
 llamada a la funcion con  la firma de la funcion, es decir, si alguna funcion 
 toma un argumento de tipo int,  luego, para llamar a esa funcion, tambien necesitamos 
 pasar un parametro de tipo int cuando la llamo.

- Hay funciones que NO necesitan parametros para realizar su trabajo 

- Para llamar a una funcion necesitamos pasar la misma cantidad de parametros, con
el mismo tipo y el mismo orden en el que estan declarados en la definicion de la funcion.
-------------------------------------------------------------------------------------
*/

// se incluye este archivo de cabecera
// para poder usar la funcion printf()
#include<stdio.h>  

/***********************************************
esta funcion recibe un valor entero y devuelve
otro valor entero que es el cuadrado del primero 
***********************************************/
int cuadrado(int x){
    return x*x;
}

/***********************************************
esta funcion recibe un dos valores enteros y 
devuelve otro valor entero que es la suma 
de los dos valores que se le pasaron 
***********************************************/
int suma(int x, int y){
    return x+y;
}

/***********************************************
esta funcion recibe un dos valores enteros y 
devuelve otro valor entero que es la resta 
de los dos valores que se le pasaron 
***********************************************/
int resta(int x, int y){
    return x-y;
}

/***********************************************
esta funcion recibe un valores e imprime en
pantalla el cubo, pero no devuelve ningun 
valor a quien lo llama, por eso es una funcion
del tipo "void" (vacia)
***********************************************/
void imprimirCubo(int x){
     int cubo=x * x *x;
     printf("\nel cubo de %d es: %d\n", x, cubo);
}

/***********************************************
esta funcion es del tipo void (vacia) porque
no devuelve ningun valor a quien la llama, pero
ademas no necesita ningun parametro parametro
para funcionar
***********************************************/
void despedida(){
    printf("\nChau, el programa termina aca\n");
}


/***********************************************
esta es la funcion "main" donde empieza el 
programa, siempre debe haber una funcion
"main" en un programa en "C" y solo 
una funcion "main" por programa 
***********************************************/
int main()
{
    //se llama a la funcion cuadrado() y se imprime el resultado en pantalla.
    printf("\nEl cuadrado de 3 es: %d", cuadrado(3));

    //se llama a la funcion suma() y se imprime el resultado en pantalla.
    printf("\nla suma de 30 + 50 es: %d", suma(30, 50));

   //se llama a la funcion resta() y se imprime el resultado en pantalla.
   printf("\nla resta de 50 - 30 es: %d", resta(50, 30));

   //se llama a la funcion imprimirCubo().
   imprimirCubo(4);

   //se llama a la funcion despedida
   despedida();

    return 0;
    // fin de la funcion principal.
}
/*
------------------------------------------------------------------------------------
 Desafio: 
 escribir un programa para imprimir la tabla de multiplicar de un 
 numero especifico usando una funcion.
 
 Por ejemplo:
 - Si llamas a la funcion tablaMultiplicar(5), entonces tu programa imprimira la
 tabla de multiplicar del 5. 
 - Si llamas a la funcion tablaMultiplicar(7), entonces tu programa imprimira la
 tabla de multiplicar del 7 en la pantalla.
------------------------------------------------------------------------------------
*/
