/*
Realizar un programa que declare tres arreglos, ‘vector1’, ‘vector2’ y ‘vector3’ de cinco
enteros cada uno, pida valores por teclado para ‘vector1’ y ‘vector2’ y calcule
vector3=vector1+vector2. Mostrar los tres arreglos por pantalla.
*/
#include <stdio.h>
int main(){
    int vector1[5] = {};
    int vector2[5] = {};
    
    int vector3[5] = {};

    for(int i=0;i<5;i++){
        printf("Ingrese el valor en %i: ", i);
        scanf("%i", &vector1[i]);
    }
    
    for(int i=0;i<5;i++){
        printf("Ingrese el valor en %i: ", i);
        scanf("%i", &vector2[i]);
    }

    
    for(int i=0;i<5;i++){
        vector3[i] = vector1[i] + vector2[i];
        printf("\nValor en [%i] : %i", i, vector3[i]);
    }
}