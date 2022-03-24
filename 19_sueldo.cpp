//<<---------SUELDO DE UN TRABAJADOR--------->>
    //Instrucciones: Ayuda a un trabajador a saber cual sera su sueldo semanal, quincenal y mensual,
    //              se sabe que si trabaja 40 hrs o menos, se le pagará $105 por hora, pero si trabaja
    //              más de 40 hrs entonces las horas extras se le pagarán a $175 por hora.

#include <iostream>
using namespace std;

int main()
{
    float cantidad_horas, pago_horas;
    float horas_extra; 
    cout<<"¿Cuantas horas trabajo esta semana?: ";
    cin>>cantidad_horas;

    if(cantidad_horas <=40)
    {
        cout<<"Su sueldo es de es:$ "<<cantidad_horas * 105;
    }else if(cantidad_horas > 40)
    {
        horas_extra =((cantidad_horas-40)*175);
        pago_horas= 40*105;
        cout<<"Pago de horas base: $"<<pago_horas<<endl;
        cout<<"Pago de horas extra: $"<<horas_extra<<endl;
         cout<<"Su sueldo es de es: $"<<pago_horas + horas_extra;
    }

    return 0;
}