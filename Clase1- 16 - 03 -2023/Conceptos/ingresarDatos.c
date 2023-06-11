#include <stdio.h>
#include <conio.h>
int main(){
    int c;
    printf("Ingrese un caracter: ");
    c = getchar();
    printf("\nEl valor ingresado es: ");
    putchar(c);

    printf("Ingrese otro caracter \n");
    scanf("%c", &c);
    printf("El valor ingresado por teclado es: ");
    putchar(c);
    return 0;
}
