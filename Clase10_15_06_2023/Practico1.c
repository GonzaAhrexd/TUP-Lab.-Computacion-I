#include <stdio.h>
#define CANTIDAD 15
struct alumnos{
    int DNI;
    char Apellido[64];
    char Nombre[64];
    int Edad;
    float Promedio;
};
int main(){
    struct alumnos listaDeAlumnos[CANTIDAD];
    int contador = 0;
    char seguir = 's';
        for (int i = 0; i < CANTIDAD; i++){
        printf("\nAlumno numero %i", i);
        
        printf("\nIngrese el DNI del alumno: ");
        scanf("%i", &listaDeAlumnos[i].DNI);
        getchar();
        printf("\nIngrese el nombre del alumno:  ");
        gets(listaDeAlumnos[i].Nombre);

        printf("\nIngrese el apellido del amigo:  ");
        gets(listaDeAlumnos[i].Apellido);

        printf("\nIngrese la edad del alumno:  ");
        scanf("%i", &listaDeAlumnos[i].Edad);
        
        printf("\nIngrese el promedio del alumno:  ");
        scanf("%f", &listaDeAlumnos[i].Promedio);
        getchar();
        contador++;
        printf("Quieres seguir ingresando numero? s/n");
        scanf(" %c", &seguir);
        if(seguir=='n'){
            break;
        }
    }

    printf("\nLista de Alumnos");
    printf("\nDNI \t Apellido \t Nombre ");
    for (int i = 0; i < contador; i++){
        printf("\n%i", listaDeAlumnos[i].DNI);
        printf("\t%s", listaDeAlumnos[i].Apellido);
        printf("\t%s", listaDeAlumnos[i].Nombre);
        
    }
    
    return 0;
}
