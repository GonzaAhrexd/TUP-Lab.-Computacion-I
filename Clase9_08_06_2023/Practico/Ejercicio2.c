#include <stdio.h>
#include <string.h>
int main(){
    char C1[30]; 
    char C2[30];
    char concatenar[] = "aeiou";
    
    /*Pedimos ingresar el contenido de ambas cadenas*/
    printf("Ingrese el contenido de C1: ");
    scanf("%s", C1);
    printf("Ingrese el contenido de C2: ");
    scanf("%s", C2);

    /*Mostramos el contenido en C1 y C2*/
    printf("\nEl contenido en C1 es: %s", C1);
    printf("\nEl contenido en C2 es: %s", C2);

    /*Mostramos cual cadena es mayor*/
    if(strlen(C1)>strlen(C2)){
        printf("\nLa cadena mayor es: %s", C1);
    }else{
        printf("\nLa cadena mayor es: %s", C2);   
    }

    /*Realizamos la comparacion con la funcion strcmp*/
    printf("\nLa comparacion entre ambas cadenas es: %d", strcmp(C1,C2));
    
    /*Utilizamos una sentencia if para ver la cadena menor y concatenamos la variable concatenar al mismo*/
    if(strlen(C1)<strlen(C2)){
        printf("\nLa cadena menor concatenada es: %s", strcat(C1,concatenar));       
    }else{
        printf("\nLa cadena menor concatenada es: %s", strcat(C2,concatenar));
    }
    return 0;
}