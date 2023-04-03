/*  Mostrar por pantalla los números pares (de mayor a menor) comprendidos entre 50 y 20. Indicar la cantidad de números hallados */
#include <stdio.h>
int main()
{
    int numSup = 50, numInf = 20, contador=0;
    printf("Los numeros pares entre dichos valores son: ");
    while (numSup >= numInf)
    {   
        if(numSup%2==0){
        printf("%i", numSup);
        if(numSup!=20)
            printf(" , ");
        contador++;
        }
        numSup--;
    }
    printf("\n Son una cantidad de %i numeros", contador);

    return 0;
}