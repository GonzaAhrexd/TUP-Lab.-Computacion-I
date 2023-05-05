#include <stdio.h>

bool esPrimo(int num){
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

int main(){

    int num, contador;
    printf("Programa para calcular si el numero que se ingresa es primo o no");
    printf("\nEl programa terminara cuando se ingrese un 0");
    do{
        printf("\nIngrese un numero: ");
        scanf("%i", &num);
        if(esPrimo(num)){
            printf("\nEs primo");
            contador++;
        }else{
            printf("\nNo es primo");
        }
        /* code */
    } while (num!=0);
    
    printf("\nSe han ingresado %i numeros primos", contador);


    return 0;
}