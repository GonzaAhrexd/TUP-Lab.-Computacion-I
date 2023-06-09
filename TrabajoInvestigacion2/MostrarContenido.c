#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct registro {
    int cliente;
    char nombre[20];
    float saldo;
};

int main() {
    FILE *arch;
    struct registro reg;

    if ((arch = fopen("arch.dat", "rb")) == NULL) {
        printf("No se pudo abrir el archivo");
        return 1;
    }

    while (fread(&reg, sizeof(reg), 1, arch) == 1) {
        printf("Cliente: %d\n", reg.cliente);
        printf("Nombre: %s\n", reg.nombre);
        printf("Saldo: %.2f\n\n", reg.saldo);
    }

    fclose(arch);

    return 0;
}
