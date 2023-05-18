#include <stdio.h>
int main()
{
    float matriz[2][2];
    float matrizInversa[2][2];
    printf("Ingrese los valores de la matriz de 2x2: \n");
    for (int i = 0; i < 2; i++)
    { /*Tomamos los valores de la matriz*/
        for (int j = 0; j < 2; j++)
        {
            printf("\nIngrese la matriz en la posicion [%i][%i]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    /*Hallamos la determinante*/
    int determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    /* Hallamos la matriz traspuesta */
    float matrizTraspuesta[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizTraspuesta[i][j] = matriz[j][i];
        }
    }
    /* Hallamos la adjunta de la transpuesta negando los indices, de esa forma 0 = 1 y 1 = 0*/
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizTraspuesta[i][j] = matriz[!j][!i];
        }
    }
    /*Cambiamos los signos*/
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i + j % 2 == 1)
            {
                matrizTraspuesta[i][j] = matrizTraspuesta[i][j] * (-1);
            }
        }
    }

    /* Multiplicamos determinante * adjunta de transpuesta = inversa*/
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizInversa[i][j] = matrizTraspuesta[i][j] / determinante;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%.2f ", matrizInversa[i][j]);
        }
        printf("\n");
    }


    return 0;
}