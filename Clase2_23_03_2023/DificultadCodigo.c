#include <stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){

    float gasto, tasa;
    printf("\n Gasto de corriente: ");

    scanf("%f", &gasto);

    if(gasto < 1000){
        tasa = TARIFA1;
    }
    if(gasto >= 1000 && gasto <=1850){
        tasa = TARIFA2;
    }
    if(gasto > 1850){
        tasa = TARIFA3;
    }


    printf("\n Tasa que le corresponde a %.2f  Kwxh es de %.2f\n", gasto, tasa);
    
    

    return 0;


}