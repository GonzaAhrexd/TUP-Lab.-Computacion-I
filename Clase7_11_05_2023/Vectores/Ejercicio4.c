/*
Dada un arreglo de 10 números enteros positivos, generar un nuevo vector con aquellos
númerosque son múltiplos de 3 y otro con el resto de los elementos del vector original.
Mostrar los tres vectores.
*/

#include <stdio.h>
int main(){
    int vector[10] = {};
    int multiplos[10] = {};
    int restoValores[10] = {};

    for(int i=0;i<10;i++){
        printf("Ingrese el valor en %i: ", i);
        scanf("%i", &vector[i]);
    }

    for(int i=0;i<10;i++){
        if(vector[i] % 3 ==0){
            multiplos[i] = vector[i];
        }
        else{
            restoValores[i] = vector[i];
        }
    }

    printf("\nVector original: ");
    for (int i = 0; i < 10; i++)
    {
        printf("\nVector original[%i]: %i", i, vector[i]);
    }
    
    
    printf("\nMultiplos de 3: ");
    for (int i = 0; i < 10; i++){   
        if(multiplos[i] != 0){
            printf("\nMultiplos de 3[%i]: %i", i,multiplos[i]);
        }
    }   
    printf("\nElementos no multiplo de 3: ");
    for (int i = 0; i < 10; i++){   
        if(restoValores[i] != 0){
        printf("\nResto de valores[%i]: %i", i,restoValores[i]);
        }
    }   



    return 0;
}