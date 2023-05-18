#include <stdio.h>

int pascal(int fila, int columna) {
    if (columna == 0 || columna == fila) {
        return 1;
    } else {
        return pascal(fila-1, columna-1) + pascal(fila-1, columna);
    }
}

void imprimir_triangulo(int n) {
    int fila, columna;
    for (fila = 0; fila < n; fila++) {
        for (columna = 0; columna <= fila; columna++) {
            printf("%d ", pascal(fila, columna));
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Ingrese el número de filas: ");
    scanf("%d", &n);
    imprimir_triangulo(n);
    return 0;
}
