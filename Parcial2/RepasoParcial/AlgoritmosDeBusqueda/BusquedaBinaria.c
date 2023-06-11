#include <stdio.h>
int busquedaBinaria(int arr[], int inicio, int fin, int objetivo) {
    if (fin >= inicio) {
        int medio = inicio + (fin - inicio) / 2;

        // Si el elemento medio es igual al objetivo, se ha encontrado
        if (arr[medio] == objetivo)
            return medio;

        // Si el elemento medio es mayor que el objetivo, buscar en la mitad inferior del arreglo
        if (arr[medio] > objetivo)
            return busquedaBinaria(arr, inicio, medio - 1, objetivo);

        // Si el elemento medio es menor que el objetivo, buscar en la mitad superior del arreglo
        return busquedaBinaria(arr, medio + 1, fin, objetivo);
    }

    // Si no se encuentra el objetivo en el arreglo, retornar -1
    return -1;
}

int main() {
    int arreglo[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int objetivo = 12;
    int indice = busquedaBinaria(arreglo, 0, n - 1, objetivo);
    if (indice != -1)
        printf("El elemento %d se encuentra en el índice %d.\n", objetivo, indice);
    else
        printf("El elemento %d no se encuentra en el arreglo.\n", objetivo);
    return 0;
}