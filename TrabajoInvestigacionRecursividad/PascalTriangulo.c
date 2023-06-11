#include <stdio.h>

int calcularValores(int filas, int columnas){
    if (columnas == 0 || filas == columnas){

        return 1;
    }
    else{
        return calcularValores(filas - 1, columnas - 1) + calcularValores(filas - 1, columnas);
    }
}

void mostrarTriangulo(int filas){
    for (int i = 0; i < filas; i++){
        printf("\n ");
           for (int k = 0; k < (filas - i - 1); k++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++){
            printf("%i ", calcularValores(i, j));
        }
    }
}

int main(){
    int filas;
    printf("Ingrese las filas que desea que el triangulo tenga: ");
    scanf("%i", &filas);
    mostrarTriangulo(filas);
    return 0;
}