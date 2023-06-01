#include <stdio.h>
void mostrarVector(int vector[], int limite){
       for (int i = 0; i < limite; i++) {
                printf("%d ", vector[i]);
            }
}

int main(){

    int vector[5]={2,5,1,6,9};
    int limite = sizeof(vector) / sizeof(vector[0]);
    int index, i,j;
    for (i = 1; i < 5; i++){
        index=vector[i];
        j=i-1;
        while (j>=0 && vector[j] > index)
        {    
            vector[j+1] = vector[j];
            j--;
        }
        vector[j+1] = index;
    }
    
    mostrarVector(vector, limite);

    return 0;
}