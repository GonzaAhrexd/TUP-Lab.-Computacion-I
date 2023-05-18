#include <stdio.h>
int sumatoriaMatriz(int matriz[5][2]){
    int sumatoria = 0;
        for (int i = 0; i < 5; i++){
             for (int j = 0; j < 2; j++){
                  sumatoria+=matriz[i][j];
        }
     }
     return sumatoria;
}
int busquedaEnMatriz(int matriz[5][2], int busqueda){
    int contador = 0;
        for (int i = 0; i < 5; i++){
             for (int j = 0; j < 2; j++){
                  if(matriz[i][j] == busqueda){
                    contador++;
                  }
        }
     }
     return contador;
}
int main(){
    int sumatoria, promedio, busqueda, encuentros=0;
    int matriz[5][2] = 
    {{0,0},
     {1,2},
     {2,4},
     {3,6},
     {4,8}};

     for (int i = 0; i < 5; i++){
        for (int j = 0; j < 2; j++){
            printf("matriz[%d][%d] = ", i,j);
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
     }

    sumatoria = sumatoriaMatriz(matriz);
    printf("La suma de los elementos es: %i", sumatoria);
    promedio = sumatoria / 10;
    printf("\nEl promedio de los elementos es: %i", promedio);

    printf("\nIngrese un numero a buscar: ");
    scanf("%i", &busqueda);
    
    encuentros = busquedaEnMatriz(matriz, busqueda);
    printf("\nEl numero aparece %i veces.", encuentros);
    return 0;
}