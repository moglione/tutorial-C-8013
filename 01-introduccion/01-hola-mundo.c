// Estos son archivos de cabecera (.h por header)
// Incluyen código (funciones) ya escrito de "bibliotecas"
#include <stdio.h>
#include <stdlib.h>

// Esta es la primera función que se ejecuta
// En un programa en C SIEMPRE debe haber funcion main 
// y solo una
int main()
{
    // Entre "{" y "}" está la defincion de la función
    // el código se escribe aquí. 

    // se llama a la funcion printf() que esta 
    // en la libreria stdio.h (standrad input output)
    printf("Hola Mundo!\n");
    
    // Esto devuelve un código de exito para que el sistema operativo 
    // sepa si el programa falló o hizo las cosas con exito.
    return 0;
}

/*
-------------------------------------------------------------------------------------
 Desafío: edite el código anterior para imprimir "¡hola universo!" 
-------------------------------------------------------------------------------------
*/
