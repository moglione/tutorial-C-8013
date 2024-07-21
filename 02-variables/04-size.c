/*
------------------------------------------------------------------------------------
Encontrar el tamaño de las variables es un concepto importante.
Para encontrar el tamaño de variables de cualquier tipo de datos, 
ya sea Int, float, double. Podemos usar el operador sizeof(),
Necesitamos escribir el nombre de la variable o tipo de datos cuyo tamaño queremos saber
entre los parentesis de sizeof.
También una cosa a tener en cuenta es que los tamaños de los tipos de datos 
se basan en el compilador, pueden diferir en diferentes lugares.

Pero, generalmente el tamaño de

char es de 1 byte.
int es de 4 bytes.
flotante es de 4 bytes.
doble es de 8 bytes.

------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
    printf("Cantidad de bytes que ocupa un char: %d\n", sizeof(char));    
    printf("Cantidad de bytes que ocupa un int: %d\n", sizeof(int));
    printf("Cantidad de bytes que ocupa un float: %d\n", sizeof(float));
    printf("Cantidad de bytes que ocupa un double: %d\n", sizeof(double));


    // También podemos encontrar el espacio que ocupae una variable usando 'sizeof()'.
    int i = 32;
    printf("Cantidad de bytes que ocupa la variable i : %lu\n", sizeof(i));  

    return 0;
}

/*
------------------------------------------------------------------------------------
Desafio:
Intente descubrir los espacio que ocupan en memoria de las siguientes variables
(a) espacio que ocupa int a=12;
(b) espacio que ocupa int b=15423;
(c) espacio que ocupa int a[5];
(d) espacio que ocupa  char texto[10]="hola";
(e) espacio que ocupa  char texto2[]="hola";
Podrias explicar los diferentes resultados? (en comentarios del programa)
-----------------------------------------------------------------------------------
*/
