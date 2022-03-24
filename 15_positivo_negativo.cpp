//---------Señalar si un número es positivo, negativo o neutro----------
#include <stdio.h>

int main(void){
    double numero; 
    printf("Introduce un numero: \n");
    scanf("%lf",&numero); 
    
    if (numero==0) {
        printf("neutro");
    }else

    if (numero>0){
        printf("positivo");
    }
    else
    {
        printf("negativo"); 
    }
    
    return 0;
}
