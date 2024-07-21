// Estos son archivos de cabecera (.h por header)
// Incluyen codigo (funciones) ya escrito de "bibliotecas"
#include <stdio.h>
#include <stdlib.h>

// Esta es la primera funcion que se ejecuta
// En un programa en C SIEMPRE debe haber funcion main 
// y solo una
int main()
{
    // Entre "{" y "}" esta la defincion de la funcion
    // el coidgo se escribe aqui­. 

    // se llama a la funcion printf() que esta 
    // en la libreria stdio.h (standrad input output)
    printf("Hola Mundo!\n");
    
    // Esto devuelve un codigo de exito para que el sistema operativo 
    // sepa si el programa falla o hizo las cosas con exito.
    return 0;
}

/*
-------------------------------------------------------------------------------------
 Desafio: edite el codigo anterior para imprimir "¡hola universo!" 
-------------------------------------------------------------------------------------
*/
