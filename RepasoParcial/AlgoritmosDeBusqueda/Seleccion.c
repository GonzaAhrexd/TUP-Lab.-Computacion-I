#include <stdio.h>

void mostrarVector(int vector[], int limite)
{
    for (int i = 0; i < limite; i++)
    {
        printf("%d ", vector[i]);
    }
}

int main()
{

    int vector[5] = {4, 5, 3, 1, 2};
    int min = 0, aux;

    for (int i = 0; i < 4; i++){
        min=i;
        for (int j = i; j < 5; j++){
            if (vector[j] < vector[min]){
                min = j;
            }
        }
        aux=vector[i];
        vector[i] = vector[min];
        vector[min] = aux; 
 }
    mostrarVector(vector,5);
    return 0;
   
}