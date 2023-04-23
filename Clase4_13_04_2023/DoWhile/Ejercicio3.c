#include <stdio.h>
int main(){
    int num, contador = 0, suma=0;
    char seguir;
    do{
        printf("Ingrese un numero entero: ");
        scanf("%i",&num);
        printf("Desea introducir otro numero (s/n)?");
        scanf(" %c",&seguir);
        contador++;
        suma+=num;
    }while(seguir=='s'||seguir=='S');
    printf("Ha introducido %i numero(s)", contador);
    printf("\nLa suma de todos ellos es: %i", suma);


    return 0;
}