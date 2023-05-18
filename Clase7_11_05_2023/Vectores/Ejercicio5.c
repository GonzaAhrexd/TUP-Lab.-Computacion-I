/*
Dados dos arreglos ordenado de mayor a menor sin elementos repetidos de 10
elementos cadauno. Se pide:
• Generar un nuevo vector ordenado que contenga a ambos vectores. Mostrar el
resultado.
• Mostrar el vector de menor a mayor.
*/
#include <stdio.h>
int main()
{
    int vector1[10] = {500, 494, 356, 349, 333, 301, 245, 234, 156, 100};
    int vector2[10] = {700, 645, 564, 533, 520, 352, 246, 233, 156, 64};
    int vector3[20] = {};
    int j = 0, aux = 0;

    for (int i = 0; i < 20; i++) // Juntamos ambos vectores
    {
        if (i < 10)
            vector3[i] = vector1[i];
        else
        {
            vector3[i] = vector2[i - 10];
        }
    }

    for (int i = 0; i < 20; i++)
        for (int j = 1; j < 20; j++)
        {
            if (vector3[i]<vector3[j]){
                vector3[i] = vector3[j];
            }else{
                vector3[i] = vector3[i];
            }
        }

    for (int i = 0; i < 20; i++)
    {
        printf("\n%i", vector3[i]);
    }
    return 0;
}