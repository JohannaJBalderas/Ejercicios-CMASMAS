//-----SUMA, DIVISION, MULTIPLICACION, RESTA VOID------
//La palabra void indica que el método main no retorna ningún valor

#include <iostream>
#include <iomanip>
using namespace std;
int main(void) //<--void
{
    float n1, n2;
    float suma, resta, div, mult;
    cout << "\n Introduzca un numero: ";
    cin >> n1 ;
    cout << "\nIntroduzca otro numero: ";
    cin >> n2;
    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;
    cout << fixed << setprecision(2); // Usar el método setprecision() para establecer una precisión personalizada para los floates
    cout << "\nsuma: " << fixed << setprecision(2) << suma;
    cout << "\nresta: " << resta;
    cout << "\nmultiplicacion: " << mult;
    cout << "\ndivision: " << div;
}
