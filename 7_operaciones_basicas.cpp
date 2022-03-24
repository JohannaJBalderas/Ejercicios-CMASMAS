//-----SUMA, DIVISION, MULTIPLICACION, RESTA------
#include <conio.h>
#include <stdio.h>
int main()
{
    int n1, n2, producto, suma, resta, div;
    printf( "\n Introduzca primer numero (entero): " );
    scanf( "%d", &n1 );
    printf( "\n Introduzca segundo numero (entero): " );
    scanf( "%d", &n2 );
    suma = n1 + n2;
    resta = n1 - n2;
    div = n1 / n2;
    producto = n1 * n2;
    printf( "\n La suma es: %d", suma );
    printf( "\n La resta es: %d", resta );
    printf( "\n La division es: %d", div );
    printf( "\n La multiplicacion es: %d", producto );
    suma = n1 + n2;
    getch(); /* Pausa */
    return 0;
}
