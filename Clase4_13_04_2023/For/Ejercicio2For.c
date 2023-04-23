#include <stdio.h>
int main(){
    int numero, acumulador;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    for(int i=0;i<numero;i++){
        if(i%2==0){
        acumulador = acumulador + i;
        }
    }
    
    if(acumulador==numero){
        printf("El numero ingresado es perfecto");
    }
    else{
        printf("El numero ingresado no es perfecto");
    }

    return 0;
}