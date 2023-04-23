#include <stdio.h>
#include <stdlib.h>
int main(){
    int numerador, denominador;
    printf("Ingrese el numerador: ");
    scanf("%i", &numerador);
    
    printf("Ingrese el denominador: ");
    scanf("%i", &denominador);
    
    int mcd;
    if(denominador==0){
        printf("No se puede dividir por 0");
    
    }else if(denominador==1){
        printf(numerador);
    
    }else if(numerador==denominador){
        printf("1");
    
    }
    else if(numerador>denominador || denominador>numerador){ 
        for(int i=1; i <= numerador && i <= denominador; ++i){
        if(numerador%i==0 && denominador%i==0){
            mcd = i;
        }
    }
        numerador=numerador/mcd;
        denominador=denominador/mcd;

        printf("La simplificacion es: ");
        printf("\n %i", numerador);
        printf("\n %i", denominador);
}

    
    return 0;
}