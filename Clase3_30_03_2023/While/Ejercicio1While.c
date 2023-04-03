#include <stdio.h>
int main(){
    float lado;
    lado=0;
    while(lado<=0){
        printf("Ingrese cuanto mide los lados del cuadrado: ");
        scanf("%f",&lado);
    }
    printf("El perimetro del cuadrado es: %.2f", lado*4);
    return 0;
}