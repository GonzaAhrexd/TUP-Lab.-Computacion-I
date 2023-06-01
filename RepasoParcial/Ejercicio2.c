#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

void cargarVector(int vector[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        printf("Ingrese el valor de la posición [%i]: ", i);
        scanf("%d", &vector[i]);
    }
}
void mostrarVector(int vector[], int limite){
       for (int i = 0; i < limite; i++) {
                printf("%d ", vector[i]);
            }
}

int* insertarNuevoElemento(int* arreglo) {
    int *nuevoArreglo = (int*)malloc((SIZE+1) * sizeof(int));

    for (int i = 0; i < SIZE; i++) {
        nuevoArreglo[i] = arreglo[i];
    }

    int nuevoValor;
    printf("Ingrese el nuevo valor: ");
    scanf("%d", &nuevoValor);
    nuevoArreglo[SIZE] = nuevoValor;
    free(arreglo);

    return nuevoArreglo;
}


int* eliminarElemento(int* arreglo){

    int indiceAEliminar, aux;
     int *nuevoArreglo = (int*)malloc((SIZE-1) * sizeof(int));

    do
    {
        printf("Que indice desea eliminar? ");
        scanf("%i", &indiceAEliminar);
    } while (indiceAEliminar>SIZE || indiceAEliminar<0);
    for (int i = indiceAEliminar; i < SIZE-1; i++){
            aux = arreglo[i];
            arreglo[i] = arreglo[i+1];
            arreglo[i+1] = aux;
    }
    for (int i = 0; i < SIZE-1; i++) {
        nuevoArreglo[i] = arreglo[i];
    }

    return nuevoArreglo;
    
}

int buscarValor(int arreglo[]){
    int valorABuscar;
    printf("Ingrese el valor que desea encontrar: ");
    scanf("%i", &valorABuscar);

    for (int i = 0; i < SIZE; i++)
    {
        if(arreglo[i]==valorABuscar){
            return i;
        }
    }
    
    return -1;
}

int* ordenarElemento(int* arreglo) {
  
    for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 6; j++) {
        if (arreglo[i] < arreglo[j]) {
          int aux = arreglo[i];
          arreglo[i] = arreglo[j];
          arreglo[j] = aux;
        }
      }
    }
    return arreglo;
}

int main() {
    int opcion = 0;
    int arreglo[SIZE];
    cargarVector(arreglo);

    do {
        printf("1- Insertar\n");
        printf("2- Eliminar\n");
        printf("3- Buscar\n");
        printf("4- Ordenar\n");
        printf("Elija la opcion a realizar: ");
        scanf("%d", &opcion);
    } while (opcion > 4 || opcion < 1);

    int* arregloModificado = NULL;
    int valorAEncontrar;
    switch (opcion) {
        case 1: // Insertar
            arregloModificado = insertarNuevoElemento(arreglo);
            mostrarVector(arregloModificado, SIZE+1);

            free(arregloModificado);
            break;
        case 2: // Eliminar
            arregloModificado = eliminarElemento(arreglo);
            mostrarVector(arregloModificado, SIZE-1);
            free(arregloModificado);
            break;
        case 3: // Buscar
        valorAEncontrar=buscarValor(arreglo);
            if(valorAEncontrar==-1){
                printf("No se encuentra el valor");
            }else{
                printf("El valor esta en la posicion %i", valorAEncontrar);                
            }
            break;
        case 4: // Ordenar
            arregloModificado = ordenarElemento(arreglo);
            mostrarVector(arregloModificado,SIZE);
            free(arregloModificado);
        break;
        default:
            break;
    }

    return 0;
}
