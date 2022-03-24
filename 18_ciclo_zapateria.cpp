//<<---------ZAPATERIRA--------->>
    //Nota: si son más de 10 pares se les hará un 10% sobre el total de la compra; si el numero de pares
    //      es mayor de 20 pero menor de 30, se le otorga un 20% de descuento; y si son más de 30 pares
    //      se  otorgará un 40% de descuento. El precio de cada par es de $80.00

#include <iostream>
using namespace std;

int main()
{
    int cantidad_zapatos, monto=0;
    cout<<"Ingrese los datos de la compra"<<endl;
    cout<<"Cantidad de zapatos a comprar: ";
    cin>>cantidad_zapatos;
    monto= cantidad_zapatos * 80;

    if(cantidad_zapatos <=10)
    {
        cout<<"El total a pagar es: "<<monto;
    }else if(cantidad_zapatos<=20)
    {
        cout<<"El total a pagar es: "<<monto-(monto*0.10);
        //(monto * 0.10) representa el descuento que se va a realizar
    }else if(cantidad_zapatos<=30)
    {
        cout<<"El total a pagar es: "<<monto-(monto*0.20);
        //(monto * 0.20) representa el descuento que se va a realizar
    }
    else
    {
       cout<<"El total a pagar es: "<<monto-(monto*0.40);
        //(monto * 0.40) representa el descuento que se va a realizar  
    } 
    
    return 0;
}