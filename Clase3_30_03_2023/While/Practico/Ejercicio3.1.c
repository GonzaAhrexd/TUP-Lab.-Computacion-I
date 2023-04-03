/*Se ingresa por teclado la cantidad de agua caída, en milímetros día a día durante una semana. Se pide determinar el día de mayor lluvia, el de menor y el promedio */
#include <stdio.h>
int main(){

    int i=1,diaMenor,diaMayor;
    float cantidad, total=0, menor=100000, mayor=0;

    while (i<=7){  
        printf("Ingrese la cantidad de agua caida en ml del dia %i: ", i);
        scanf(" %f",&cantidad);
        if(cantidad>mayor){
            mayor=cantidad;
            diaMayor = i;
        }
        if(cantidad<menor){
            menor=cantidad;
            diaMenor=i;
        }
        total = total + cantidad;

        i++;
    }
    printf("\nEl dia de mayor lluvia es el dia %i y llovio una cantidad de %.2f ml de agua", diaMayor, mayor);
    printf("\nEl dia de menor lluvia es el dia %i y llovio una cantidad de %.2f ml de agua", diaMenor, menor);
    printf("\nLa cantidad de lluvia promedio es de %.2f", total/7);

    return 0;
}