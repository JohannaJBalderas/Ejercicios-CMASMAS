//----------Pedir datos al usuario---------
//Dentro de este ejercicio pediremos datos al usuario

#include <iostream>
int main ()
{
    int numero;
    std::cout << "Dime un numero: ";
    std::cin >> numero;
    std::cout << "El triple de tu numero es " <<numero*3;
    return 0;
}