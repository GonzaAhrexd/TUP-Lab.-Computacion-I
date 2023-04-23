#include <stdio.h>
int main(){
    int numero = 1;

    do{
        printf("%d\n", numero);
        numero++;
    }
    while(numero<=10);

    printf("Condicion de salida: %d\n", numero);
    

    return 0;
}