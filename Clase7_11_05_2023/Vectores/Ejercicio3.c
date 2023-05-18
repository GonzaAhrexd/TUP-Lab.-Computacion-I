/*
Crear un vector de 5 enteros, inicializa el vector en etapa de declaración. Copia los
elementos del vector en otro vector pero en orden inverso, y mostrar por la pantalla
ambos arreglos
*/

#include <stdio.h>
int main(){
    int vector1[5] = {5,3,6,4,7};
    int vector2[5];
    int j = 4;
    for(int i=0;i<5;i++){
        
        vector2[i] = vector1[j];
        j--;
    }

    for(int i=0;i<5;i++){
        printf("\n Vector 1[%i]:%i", i, vector1[i]);
     
    }
    for(int i=0;i<5;i++){
       printf("\n Vector 2[%i]:%i", i, vector2[i]);     
    }
    return 0;
}