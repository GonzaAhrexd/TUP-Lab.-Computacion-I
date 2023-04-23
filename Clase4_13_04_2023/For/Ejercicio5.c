#include <stdio.h>
int main(){

    int tabla,limite;
    printf("Ingrese la tabla que quiere conocer: ");
    scanf("%i", &tabla);

    
    printf("Ingrese el limite de la tabla: ");
    scanf("%i", &limite);

    for (int i = 0; i <= limite; i++){
        printf("\n %i * %i = %i", tabla, i, tabla * i);
    }
    return 0;
}
