#include <stdio.h>
#define MAX 5

int pares(int listaNumeros[]){
    int i = 0;
    int contador = 0;
    for(i;i<MAX;i++){
        if(listaNumeros[i] % 2 == 0){ 
            contador++;
        }
    }
    return contador;
}


int main(){

    int lista[MAX];
    int i, cantidadPares;
    
    for (i = 0; i < MAX; i++)
    {
        printf("Ingrese un numero entero: \n");
        scanf("%i",&lista[i]);
    }

    cantidadPares = pares(lista);
    printf("La cantidad de numeros pares es: %i", cantidadPares);
}