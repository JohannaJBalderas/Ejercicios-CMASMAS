//---------EDAD 18----------

#include "iostream"
#include"string" 
#include "stdlib.h"

using namespace std; 
int main() 
{
    int resultado=0; 
    float mayor18; 
    float pedir_edad;

    printf("\n Pedir la edad para entrar:"); 
    scanf("%f",&mayor18);
    pedir_edad=(mayor18); 
    
    if (pedir_edad >=18)
    {
        cout<<"Puedes ingrasar\n";
    }
    else
    {
    cout<<"No puedes pasar\n";
    }
    //system("pause"); 
    return 0;
}
