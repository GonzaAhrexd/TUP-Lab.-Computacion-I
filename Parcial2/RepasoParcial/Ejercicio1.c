/*
Realice un programa en lenguaje C que compruebe si una matriz cuadrada de 3x3 dada es una matriz simétrica.
 Mostrar la matriz mediante la representación gráfica propia de las matrices. Usar un procedimiento para cargar
y mostrar la matriz.
*/
#include <stdio.h>

void cargarMatriz(int matriz[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Ingrese los valores en la posicion [%i][%i]", i, j);
            scanf("%d", &matriz[i][j]);
            // matriz[i][j];
    }        
}
}
void mostrarMatriz(int matriz[3][3]){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Ingrese los valores en la posicion [%i][%i]", i, j);
            scanf("%d", &matriz[i][j]);
            
    }     
    printf("\n ");   
}
}

int main(){
    int matriz[3][3];
    int contador = 0;
    cargarMatriz(matriz);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
                if(matriz[i][j] == matriz[j][i]){
                    contador++;
                }
                else{
                    break;
                }
            }
        }

    if(contador == 9){
        printf("Es simetrica");
    }
    else{
        printf("No es simetrica");
    }
    

    return 0;
}
