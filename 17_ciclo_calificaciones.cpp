#include "iostream"
#include "string"
#include "stdlib.h"
using namespace std;
int main(){
	int resultado=0;
	float calif1;
	float calif2;
	float calif3;
	float calif4;
	float suma;
    printf("Introduzca la primera calificacion: ");
	scanf("%f", &calif1);
	printf("Introduzca la segunda calificacion: ");
	scanf("%f", &calif2);
	printf("Introduzca la tercera calificacion: ");
	scanf("%f", &calif3);
	printf("Introduzca la cuarta calificacion: ");
	scanf("%f", &calif4);
	cout<< "La suma de todas las calificaciones: ";
	suma=(calif1+calif2+calif3+calif4)/4;
	if(suma >= 8)
	{
		cout<<"Felicidades disfruta de tus vacaciones";
}
else
{
cout<<"No tienes vacaciones, estudia mas\n\n.";
}
    system("pause");
	return 0;
}