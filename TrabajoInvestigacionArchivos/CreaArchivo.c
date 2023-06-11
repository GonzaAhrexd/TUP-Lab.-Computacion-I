#include <stdio.h>
struct alumnos{
    int DNI;
    char apellido[20];
    char nombre[20];
    float nota;
};
 int main(){
    
    FILE *archivo;
    struct alumnos al;
    char seguir;
     if ((archivo = fopen("alumno.dat", "wb")) == NULL){
        printf("No se pudo abrir el archivo");
     }
    do{
        printf("\nIngrese DNI del alumno: ");
        scanf("%d", &al.DNI);
        printf("\nIngrese el nombre: ");
        scanf("%s", al.nombre);
        printf("\nIngrese el apellido: ");
        scanf("%s", al.apellido);
        printf("\nIngrese la nota: ");
        scanf("%f", &al.nota);
        fwrite(&al, sizeof(al), 1, archivo);
        printf("desea terminar s/n: ");
        scanf("\n%c", &seguir);
    } while (seguir == 'n');
    fclose(archivo);


    return 0;
 }