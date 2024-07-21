/* 
------------------------------------------------------------------------------------
Uso de scanf para leer diferentes tipos de datos.
Scanf es una funcion para leer datos ingresados por el teclado.
------------------------------------------------------------------------------------
*/

// Todas las funciones relacionadas con 
// la entrada (lectura teclado) y la salida (escritura pantalla) 
// estan incluidos en stdio.h.
// stdio: STandar Input Output.
#include <stdio.h>


int main()
{
    // Declarar variables e inicializarlas.
    char letra = 's';
    int num = 100;
    float decimal = 3.1415;

    // imprimir  los valiores de las variables en pantalla
    printf("Initial values:\n");
    printf("%c\n", letra);
    printf("%d\n", num);
    printf("%f\n", decimal);

    // Modificar el contenido de las variables con scanf
    printf("Entre el nuevo valor valor para letra: ");
    scanf("%c", &letra);

    printf("Entre el nuevo valor valor para num: ");
    scanf("%d", &num);

    printf("Entre el nuevo valor valor para decimal: ");
    scanf("%f", &decimal);

    // Como podes ver, scanf necesita al menos dos parametros
    // un identificador de formato (%d, %f, %c) y un & seguido 
    // del nombre de la variable donde vas a guardar el valor.
    // El identificador de formato indica que tipo de datois se
    // debe esperar

    // Imprime los nuevos valores:
    printf("Nuevos Valores:\n");
    printf("%c\n", letra);
    printf("%d\n", num);
    printf("%f\n", decimal);
}
/*
------------------------------------------------------------------------------------
 Scanf puede leer varios valores a la vez, solo necesita escribir los identificadores 
 de formato entre comillas "separados por un espacio, ese sera el primero
 argumento, despues de eso, todos los argumentos siguientes seran un & seguido de
 el nombre de la variable. Si desea leer dos variables int a la vez, 
 la sintaxis sera asi

 scanf("%d %d", &num1, &num2)

 Desafio: ingrese la palabra "Hola" desde el teclado letra por letra e luego imprime 
 todas las letras juntos.

 ejemplo:
    Ingrese la primera letra: H
    Ingrese la segunda letra: o
    Ingrese la tercera letra: l
    Ingrese la cuarta letra: a

    La plabra completa es: Hola
    

------------------------------------------------------------------------------------
*/
