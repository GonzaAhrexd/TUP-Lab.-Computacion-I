#include <stdio.h>
void mostrarVector(int vector[], int limite){
       for (int i = 0; i < limite; i++) {
                printf("%d ", vector[i]);
            }
}

int main(){

    int ordenar[6] = {50,20,53,63,32,62};
    int aux;
    //Menor a Mayor
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++)
        {
            if(ordenar[i]<ordenar[j]){
                aux = ordenar[i];
                ordenar[i] = ordenar[j];
                ordenar[j] = aux;
            }
        }     
    }
    mostrarVector(ordenar,6);
    //Mayor a menor
        for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++)
        {
            if(ordenar[i]>ordenar[j]){
                aux = ordenar[j];
                ordenar[j] = ordenar[i];
                ordenar[i] = aux;
            }
        } 
    }
    mostrarVector(ordenar,6);
    

    return 0;
}