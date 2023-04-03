#include <stdio.h>
#include <conio.h>
int main()
{
    int A,B,C; // Definimos el entero A, B y C
    
    printf("\nIngrese un entero ");         // Mostramos por pantalla, "Ingrese un entero"
    scanf(" %i", &A);                         // Guardamos lo ingresado por consola en la variable A
    printf("El entero ingresado es: %i", A); // Mostramos el entero ingresado


    printf("\nIngrese otro entero: ");         // Mostramos por pantalla, "Ingrese otro entero"
    scanf(" %i", &B);                         // Guardamos lo ingresado por consola en la variable B
    printf("\nEl entero ingresado es: %i", B); // Mostramos el entero ingresado

    C = A; //Guardamos el valor de A en la variable auxiliar C
    A = B; //Asignamos a A, el valor de B
    B = C; //Asignamos a B, el valor de la auxiliar C

    printf("\nAhora A vale: %d", A); // Mostramos la variable A
    printf("\nAhora B vale: %d", B); //Mostramos la variable B 
    return 0;
}
