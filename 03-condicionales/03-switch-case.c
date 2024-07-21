/*
------------------------------------------------------------------------------------
 La declaración switch se utiliza para realizar diferentes acciones 
 según diferentes condiciones. La switch se evalúa una vez y este valor se 
 compara con los valores  de cada case. Si hay una coincidencia, entonces 
 se ejecuta el bloque de código asociado con ese case. 

 si ningun case conincide se ejecuta el bloque de código default. 
 Los valores enteros y de caracteres pueden ser utilizado en la 
 condición de verificación. Cuando se utilizan variables char, inicialícelas 
 siempre entre ''(comillas simples). Las declaraciones break se utilizan para terminar 
 una secuencia de declaraciones.
 Si no hay declaraciones de break entre casos, los casos que siguen al caso coincidente 
 se ejecutarán hasta que se ejecute una declaración de interrupción.
 
 Sintaxis:
  switch (elección)
  {
  
  case 1:
    // Declaración o bloque de código que se ejecutará si elección = 1
  break;
  
  caso 2: 
   // Declaración o bloque de código que se ejecutará si elección = 2
  break;
  .
  .
  .
  case n: 
  // Declaración o bloque de código que se ejecutará si elección = n
  break;
  
  default: 
    // Declaración o bloque de código que se ejecutará si la 
    // elección no coincide con ninguno de los casos
  }
-------------------------------------------------- ----------------------------------
*/

#include <stdio.h>
int main()
{
    int ch;
    printf("ingrese su eleccion (1,2,3,4) : ");  // se pide al usuario que ingrese una opcion
    scanf("%d", &ch);
    switch (ch)
    {
    
        case 1:
            printf("\nSu eleccion es 1\n");  // Statement or block of code which will be executed if choice = 1
        break;
        
        case 2:
            printf("\nSu eleccion es 2\n");  // Statement or block of code which will be executed if choice = 2
        break;
        
        case 3:
            printf("\nSu eleccion es 3\n");  // Statement or block of code which will be executed if choice = 3
        
        case 4:
            printf("\nSe ejecuta ya que no hay interrupción en el cas3. 3\n");  // Statement or block of code which will be executed if choice = 4
        break;
        
        default:
            printf("\nLa elección ingresada no es una de las opciones 1, 2, 3, 4.\n");  // Statement which will be executed if choice does not match any of the cases
        break;
    }
    
    return 0;
}
/*
------------------------------------------------------------------------------------
 Desafío: 
 haga una calculadora basica (suma, resta, multiplacion y division), para dos
 operandos, usando un switch case para eegir que operacion hacer (Intente usar 
 caracteres para las opciones del menú)

ejemplo:

        ingrese el primer operando: 15
        ingrese el segundo operando: 20
        Seleccione que operacion quiere realizar
        S) Suma
        R) Resta
        D) Division
        M) Multiplicacion
        ingrese S, R, D o M
        M
        el resultado de multiplcar 15 por 20 es: 300

------------------------------------------------------------------------------------
*/
