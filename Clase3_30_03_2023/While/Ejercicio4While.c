#include <stdio.h>
int main(){
    int num,contador=0;
    char continuar = 'y';

    while(continuar=='y' || continuar=='Y'){
        printf("Ingrese un numero: ");
        scanf("%i", &num);

        if(num%2 == 0){
            contador++;
        }

        printf("Desea ingresar otro numero? (y/n): ");
        scanf(" %c", &continuar);
    }
    printf("Se han ingresado %i numeros pares", contador);
    return 0;
}