#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float A, B, C, Raiz, BhaskaraPos, BhaskaraNeg; //Definimos A,B,C, Raiz, BhaskaraPos y BhaskaraNeg como de tipo float

    //Ingresamos los 3 valores
    printf("Ingrese el valor de A: ");
    scanf("%f", &A);
    printf("Ingrese el valor de B: ");
    scanf("%f", &B);
    printf("Ingrese el valor de C: ");
    scanf("%f", &C);

    Raiz = sqrt(pow(B, 2) - 4 * A * C); //Sacamos la raíz de la formula
    BhaskaraPos = (-B + Raiz) / (2 * A); //Sacamos una de las raices de la ecuacion cuadratica, con la suma
    BhaskaraNeg = (-B - Raiz) / (2 * A); //Sacamos la otra raiz con la  resta

    if (Raiz > 0) //Si la raiz, es mayor a 0, mostrarlas, sino, decir que no hay soluciones reales
    {
        printf("Las raices son: %f y %f", BhaskaraPos, BhaskaraNeg);
    }
    else
    {
         printf("No hay soluciones reales");
    }
    return 0;
}
