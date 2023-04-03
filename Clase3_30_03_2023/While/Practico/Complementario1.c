/*Ejercicio Nº 1: Realizar la operación multiplicación usando la operación suma.*/
#include <stdio.h>
int main(){
    int i=1, factor1, factor2, res=0;

    printf("Ingrese el primer factor: ");
    scanf("%i", &factor1);
    printf("Ingrese el segundo factor: ");
    scanf("%i", &factor2);

    while(i<=factor2){
        res = factor1 + res;    
        i++;
    }
    printf("El resultado es: %i", res);
    return 0;
}