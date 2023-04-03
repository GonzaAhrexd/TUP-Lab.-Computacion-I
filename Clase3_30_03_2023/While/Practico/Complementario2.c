#include <stdio.h>
int main(){

    int Dividendo=-1, Divisor = 0, res=0;

    while(Divisor==0 && Dividendo<Divisor){
        printf("Tenga en cuenta que el Dividendo debe ser mayor al dividendo y el dividendo tiene que ser distinto a 0 ");
        printf("Ingrese el Dividendo: ");
        scanf("%i", &Dividendo);
        printf("Ingrese el divisor distinto a 0: ");
        scanf("%i", &Divisor);
    }
    
     while(Dividendo>0){
         Dividendo=Dividendo-Divisor;
         res++;
     }
    if(Dividendo<0){
        res--;
    }
    printf("El resultado es: %i", res);


    return 0;
}