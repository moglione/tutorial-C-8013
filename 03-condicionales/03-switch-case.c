/*
------------------------------------------------------------------------------------
 La declaracion switch se utiliza para realizar diferentes acciones 
 segun diferentes condiciones. La switch se evalua una vez y este valor se 
 compara con los valores  de cada case. Si hay una coincidencia, entonces 
 se ejecuta el bloque de codigo asociado con ese case. 

 si ningun case conincide se ejecuta el bloque de codigo default. 
 Los valores enteros y de caracteres pueden ser utilizado en la 
 condicion de verificacion. Cuando se utilizan variables char, inicialicelas 
 siempre entre ''(comillas simples). Las declaraciones break se utilizan para terminar 
 una secuencia de declaraciones.
 Si no hay declaraciones de break entre casos, los casos que siguen al caso coincidente 
 se ejecutaran hasta que se ejecute una declaracion de interrupcion.
 
 Sintaxis:
  switch (eleccion)
  {
  
  case 1:
    // Declaracion o bloque de codigo que se ejecutara si eleccion = 1
  break;
  
  caso 2: 
   // Declaracion o bloque de codigo que se ejecutara si eleccion = 2
  break;
  .
  .
  .
  case n: 
  // Declaracion o bloque de codigo que se ejecutara si eleccion = n
  break;
  
  default: 
    // Declaracion o bloque de codigo que se ejecutara si la 
    // eleccion no coincide con ninguno de los casos
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
            printf("\nSe ejecuta ya que no hay interrupcion en el cas3. 3\n");  // Statement or block of code which will be executed if choice = 4
        break;
        
        default:
            printf("\nLa eleccion ingresada no es una de las opciones 1, 2, 3, 4.\n");  // Statement which will be executed if choice does not match any of the cases
        break;
    }
    
    return 0;
}
/*
------------------------------------------------------------------------------------
 Desafio: 
 haga una calculadora basica (suma, resta, multiplacion y division), para dos
 operandos, usando un switch case para eegir que operacion hacer (Intente usar 
 caracteres para las opciones del menu)

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
