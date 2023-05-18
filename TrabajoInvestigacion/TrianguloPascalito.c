#include <stdio.h>

int obtenerValores(int filas, int columnas){
    if(columnas == 0 || columnas == filas){
        return 1;
    }
    else{
        return obtenerValores(filas-1, columnas-1) + obtenerValores(filas-1, columnas);
    }
}

void  mostrarTriangulo(int numeroFilas){
    int filas, columnas;
    for(filas  = 0;filas<numeroFilas;filas++){
        printf(" ");
        for(columnas=0;columnas<=filas;columnas++){
            printf("\t %i", obtenerValores(filas,columnas));
        }
        printf("\n");
    }
}
int main(){

    int filas;
    printf("Ingrese cuantas filas desea obtener en el triangulo");
    scanf("%i", &filas);

    mostrarTriangulo(filas);
    return 0;
}