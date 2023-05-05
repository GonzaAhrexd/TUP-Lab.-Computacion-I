/*2. Calcular las raíces reales de una ecuación cuadrática.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int Bhaskara(float A, float B, float C){
    float raizPositiva, raizNegativa, Raiz;
    Raiz = sqrt(pow(B, 2) - 4 * A * C); /*Sacamos la raíz de la formula*/
    raizPositiva = (-B + Raiz) / (2 * A); /*Sacamos una de las raices de la ecuacion cuadratica, con la suma*/
    raizNegativa = (-B - Raiz) / (2 * A); /*Sacamos la otra raiz con la  resta*/

    if (Raiz > 0) /*Si la raiz, es mayor a 0, mostrarlas, sino, decir que no hay soluciones reales*/
    {
        printf("Las raices son: %.2f y %.2f", raizPositiva, raizNegativa);
        return 1;
    }
    else
    {
      
         return 0;
    }
}
int main(){
    float A,B,C;    
    printf("Ingrese el valor de A: ");
    scanf("%f", &A);
    printf("Ingrese el valor de B: ");
    scanf("%f", &B);
    printf("Ingrese el valor de C: ");
    scanf("%f", &C);


    if(Bhaskara(A,B,C)==0){
        printf("No tiene raices reales");
    }


    getch();
    return 0;
}