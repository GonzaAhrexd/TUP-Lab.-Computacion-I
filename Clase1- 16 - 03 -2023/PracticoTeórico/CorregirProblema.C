#include <stdio.h> //Librería stdio.h
#include <conio.h> //Librería conio.h

//Las librerías deben ir entre <>

int main()
{
    int a, b, c;
    printf("Ingrese los valores para realizar la operación resta"); //Pedimos al usuario que ingrese los valores para la resta
    printf("\nIngrese el primer valor: "); //Pedimos que ingrese el primer valor, y utilizamos \n para un salto de línea
    scanf("%i", &a); //Ingresamos la variable a y utilizamos  %i para enteros
    printf("\nIngrese el segundo valor:  "); //Pedimos que ingrese el segundo valor , y utilizamos \n para un salto de línea
    scanf("%i", &b); //Ingresamos la variable b y utilizamos  %i para enteros
    c = a - b;  //Realizamos la operación de a - b
    printf("El resultado de la resta es %i", c); //Mostramos el resultado y utilizamos %i para mostrar  enteros
    return 0;
}
