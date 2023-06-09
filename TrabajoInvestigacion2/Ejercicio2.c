#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define a "arch.dat"
struct registro{
    int cliente;
    char nombre[20];
    float saldo;
};
int main(){
    FILE *arch;
    struct registro reg;
    char seguir;
    if ((arch = fopen(a, "wb")) == NULL)
        printf("No se pudo abrir el archivo");
    do{
        printf("\nIngrese numero de cliente: ");
        scanf("%d", &reg.cliente);
        printf("\nIngrese el nombre: ");
        scanf("%s", reg.nombre);
        printf("\nIngrese el saldo: ");
        scanf("%f", &reg.saldo);
        fwrite(&reg, sizeof(reg), 1, arch);
        printf("desea terminar s/n: ");
        scanf("\n%c", &seguir);
    } while (seguir == 'n');
    fclose(arch);

/*Abrimos el  archivo para leerlo*/
     if ((arch = fopen("arch.dat", "rb")) == NULL) {
        printf("No se pudo abrir el archivo");
        return 1;
    }else{
      
       while (fread(&reg, sizeof(reg), 1, arch) == 1) { /*Utilizamos fread y mostramos los valores del archivo*/
        printf("Cliente: %d\n", reg.cliente);
        printf("Nombre: %s\n", reg.nombre);
        printf("Saldo: %.2f\n\n", reg.saldo);
    }
        
    }
    fclose(arch);
    getch();
    return 0;
 
}
