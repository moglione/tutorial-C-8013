/* 
------------------------------------------------------------------------------------
Existen otras funciones para leer el teclado, en este ejempo estan las funciones
getch(), getche() y putch().

-getch() y getche() leen una sola tecla (no hay que presionar enter como en scanf)
-getch() no hace eco en la pantalla
-getche() si hace eco en la pantalla
-Las dos funciones devuelven el caracter de la tecla presionada

-putch() imprime un caracter en pantalla en la posicion del cursor

Las tres funciones estan definidas en la libreria conio (Console Input Output)
por eso para usarlas se necesita #include "conio.h"
------------------------------------------------------------------------------------
*/


#include "stdio.h"
#include "conio.h"

int main() {
  char a, b;
  
  printf("Apreta una tecla (no se va a mostrar la letra):\n");
  a = getch(); // no se va a ver en la pantalla (por ejemplo: tecleo de passwords)
  
  printf("\napreta otra tecla ahora (esta si la vas aver)\n");
  b = getche(); // esta si va a hacer un "eco" en pantalla
  
  
  printf("\n\nla primera letra era: ");
  putch(a);
  
  printf("\nla segunda letra era: ");
  putch(b);
  
  return 0;
}


/* 
------------------------------------------------------------------------------------
desafio 1: 
Modifica el programa de arriab para que pida un password de 4 letras
se ingrese sin ver lo que se teclea y luego imprima el password en pantalla

ejemplo:
        ingrese un pasword de 4 letras

        el password es: wxfd


desafio 2:
Modifica el programa anterior para que cada vez que ingrese una letra
se imprima un asterico y al final imprima el password ingresado

ejemplo:
        ingrese un pasword de 4 letras
        ****
        el password es: wxfd

------------------------------------------------------------------------------------
*/
