//-------SALUDO---------
#include <conio.h>
#include <stdio.h>
int main()
{
    char nombre[20];//char nombre[20] sirve para declarar la variable nombre de tipo cadena, pudiendo contener 20 char (caracteres).
    printf( "Introduzca su nombre: " );
    scanf( "%s", nombre ); //El especificador de formato %s debe utilizarse tanto en scanf como en printf para las cadenas (strings).
    printf( "Hola %s, buenos d%cas.", nombre, 161 );//161 es el número decimal que corresponde al carácter (í) con tilde en ASCII.
    getch(); /* Pausa */
    return 0;
}
