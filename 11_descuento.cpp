//----------DESCUENTO------------------
#include <conio.h>
#include <stdio.h>
int main()
{
    float producto1;
    float producto2;
    float producto3;
    float descuento;
    float precio_iva;
    float precio;
    float precio_descuento;
    float desc, desc2;
    char nombre[20];

    printf("Introduzca su nombre:");
    scanf("%s", nombre);

    printf("\n Intrduzca el precio del primer producto:");
    scanf("%f", &producto1);
    printf("\n Intrduzca el precio del segundo producto:");
    scanf("%f", &producto2);
    printf("\n Intrduzca el precio del tercer producto:");
    scanf("%f", &producto3);
    printf("\n Introduzca el porcentaje de descuento:");
    scanf("%f", &desc);

    precio=(producto1+producto2+producto3);
    descuento=(desc/100);
    desc2= precio * descuento;
    precio_descuento=(precio-desc2);

    printf("\nEl precio de los productos es de: $ %.2f\n\n", precio);
    printf("\nEl descuento es de: $ %.2f\n\n", desc2);
    printf("\nEl precio con descuento es de: $ %.2f\n\n", precio_descuento);
    printf("\nGracias por tu compra:", nombre);
    //system("pause");

    return 0;
}


