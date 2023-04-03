#include <stdio.h>
#include <conio.h>
int main(){
    char c; //Define el caracter c
    printf("Ingrese un caracter: "); //Muestra un mensaje por pantalla, solicitando al usuario que ingrese un caracter 
    c = getchar(); //Guarda desde la consola lo ingresado
    putchar(c); //Muestra lo guardado en la variable c utilizando putchar
    printf("\nEl caracter ingresado es: %c", c); //Muestra lo guardado en la variable c usando printf
   
    return 0;
}
