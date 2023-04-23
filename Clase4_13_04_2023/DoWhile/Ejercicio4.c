#include <stdio.h>
int main(){
    int edad=12, dinero=10, dineroTotal=0;

    do{
        dinero=dinero*2;
        dineroTotal+=dinero;
        edad++;

    }while(dineroTotal<=1000);

    printf("\tCalculo del dinero recibido");
    
    printf("\nEdad: %i", edad);
    printf("\nDinero recibido: %i", dinero);
    printf("\nTotal recibido: %i", dineroTotal);
    

    return 0;
}