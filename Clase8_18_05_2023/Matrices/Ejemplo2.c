#include <stdio.h>
#define FILAS 5
#define COLUMNAS 5
void cargarMatriz(int matriz[FILAS][COLUMNAS]){
 for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("MATRIZ POSICION [%d][%d]: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void mostrarMatriz(int matriz[FILAS][COLUMNAS]){
     for(int i=0;i<FILAS;i++){
        for(int j=0;j<COLUMNAS;j++){
            printf("[%i][%i]%i",i,j, matriz[i][j]);
        }
            printf("\n");
    }
}
void divisiblesEnCuatro(int matriz[FILAS][COLUMNAS]){
    int contador;
    for (int i = 0; i < FILAS; i++){
        for (int  j = 0; j < COLUMNAS; j++){
            if(matriz[i][j] % 4 == 0){
                contador++;
            }        
        }
    }
    printf("La cantidad de elementos de la matriz divisible por 4 es de : %i", contador);
    printf("\nLos elementos son: ");
    for (int i = 0; i < FILAS; i++){
         for (int j = 0; j < COLUMNAS; j++){
                if(matriz[i][j] % 4 == 0)
            printf("\n%i ", i, j, matriz[i][j]);
        }
    }
    
}
int main(){
    int matriz[FILAS][COLUMNAS];

    cargarMatriz(matriz);
    mostrarMatriz(matriz);
    divisiblesEnCuatro(matriz);    
    return 0;
}