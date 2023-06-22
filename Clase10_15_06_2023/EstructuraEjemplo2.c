#include <stdio.h>
struct agenda
{
    int id;
    char nombre[64];
    char dir[64];
    char email[64];
};
int busquedaBinaria(struct agenda arr[], int inicio, int fin, int objetivo) {
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        
        if (arr[medio].id == objetivo) {
            return medio;  // Se encontró el objetivo, se devuelve el índice
        }
        
        if (arr[medio].id < objetivo) {
            inicio = medio + 1;  // El objetivo está en la mitad derecha
        } else {
            fin = medio - 1;  // El objetivo está en la mitad izquierda
        }
    }
    
    return -1;  // El objetivo no se encontró en la lista
}

void mostrarEstructura(struct agenda record[], int cantidad){
    printf("\n \tListado de Amigos ");
    printf("\nID Nombre Direccion \t Email ");
    for (int i = 0; i < cantidad; i++){
        printf("\n%d ", record[i].id);
        printf("%s ", record[i].nombre);
        printf("%s ", record[i].dir);
        printf("%s ", record[i].email);
        printf("\n");
    }
    printf("\nTotal de amigos: %i ", cantidad);
}

int main()
{
    int cantidadAmigos;
    printf("\nCuantos amigos desea cargar? ");
    scanf("%i", &cantidadAmigos);
    getchar();
    struct agenda record[cantidadAmigos]; // declarar la estructura
    // asignar datos a cada elemento de la estructura

    for (int i = 0; i < cantidadAmigos; i++){
        printf("\nAmigo numero %i", i);
        
        printf("\nIngrese el id del amigo: ");
        scanf("%i", &record[i].id);
        getchar();
        printf("\nIngrese el nombre del amigo:  ");
        gets(record[i].nombre);

        printf("\nIngrese la direccion del amigo:  ");
        gets(record[i].dir);

        printf("\nIngrese el email del amigo:  ");
        gets(record[i].email);
    }

    mostrarEstructura(record,cantidadAmigos);
    
    int idABuscar;
    printf("\nIngrese el id del elemento que desea buscar:  ");
    scanf("%i", &idABuscar);

    int indiceEncontrado = busquedaBinaria(record, 0, 100, idABuscar);  
    if(indiceEncontrado!=-1){
    printf("El amigo con el id ingresado es : %s ", record[indiceEncontrado].nombre);
    }
    else{
        printf("No se encuentra el valor");
    }
    return 0;
}