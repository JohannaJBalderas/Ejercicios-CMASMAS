//---------MAYOR A 100---------

#include "iostream" 
#include"string" 
#include"stdlib.h"

using namespace std;

int main()
{
    int resultado=0; 
    float producto1; 
    float producto2; 
    float suma;

    printf("\n Intrduzca el precio del primer producto:"); 
    scanf("%f", &producto1); 
    printf("\n Intrduzca el precio del segundo producto:"); 
    scanf("%f", &producto2); 
    suma=(producto1+producto2);
    //cout<<"La suma es:", &suma; 
     if(suma>=100)
    {
        cout<<"La compra es mayor o igual a 100.00pesos\n";
    }
    else
    {
        cout<<" La compra en menor a cien pesos, compra mas productos\n\n.";
    }
    // system("pause"); 
    return 0;
}
