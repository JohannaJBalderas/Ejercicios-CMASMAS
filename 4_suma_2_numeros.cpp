//-------SUMAR DOS NUMEROS INTRODUCIDOS------

#include <iostream>
int main ()
{
    int n1;
    int n2;
    int suma;

    std::cout<<"Dime un numero: ";
    std::cin>>n1;
    std::cout<<"Dime otro numero: ";
    std::cin>>n2;
    suma = n1 + n2;
    std::cout<<"Su suma es "<<suma;

    return 0;
}
