/*
Ejercicio N° 2: Realizar el ejercicio usando las funciones
* Ingresar dos cadenas llamadas C1 y C2.
* Mostrar el contenido de C1 y C2.
* Indicar cuál es la cadena más larga.
* Comparar ambas cadenas
* Concatenar una cadena a la cadena más corta.
*/

#include <stdio.h>
int main(){
    char C1[30];
    char C2[30];

    printf("Ingrese el contenido de C1: ");
    scanf("%s", C1);
    
    printf("Ingrese el contenido de C2: ");
    scanf("%s", C2);

    printf("\nEl contenido en C1 es: %s", C1);
    printf("\nEl contenido en C2 es: %s", C2);

    if(strlen(C1)>strlen(C2)){
        printf("\nLa cadena mayor es %s", C1);
    }else{
        printf("\nLa cadena mayor es %s", C2);
    }
    
    printf("\nLa comparacion entre ambas cadenas es: %d", strcmp(C1,C2));
    
    return 0;
}