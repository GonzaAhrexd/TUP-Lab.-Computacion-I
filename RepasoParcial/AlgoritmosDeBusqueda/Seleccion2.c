#include <stdio.h>
void mostrarVector(int vector[], int limite){
       for (int i = 0; i < limite; i++) {
                printf("%d ", vector[i]);
            }
}
int main(){

    int arreglo[6] = {6,4,7,2,5,9};
    int aux, minPos;
    for (int i = 0; i < 6; i++){
        minPos=i;
        for (int j = i+1; j < 6; j++){
            if(arreglo[j]<arreglo[minPos]){
                minPos = j;
            }
        }
        aux = arreglo[i];
        arreglo[i] = arreglo[minPos];
        arreglo[minPos] = aux;
    }
    
    mostrarVector(arreglo,6);




    return 0;
}