#include <stdio.h>
int main()
{
    int matriz[5][2] =
        {{0, 0},
         {1, 2},
         {2, 4},
         {3, 6},
         {4, 8}};

    int elementosPar[10];
    int x = 0, size=0;
    for (int i = 0; i < 5; i++) //Guarda los elementos par en un nuevo arreglo
    {
        for (int j = 0; j < 2; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                elementosPar[x++] = matriz[i][j];
                size++;
            }
            else
            {
                elementosPar[x++] = -1;
            }
        }
    }
 for (int i = 0; i < 10; i++) //Ordena de mayor a menor el arreglo
    {
        for (int j = 1; j < 10; j++)
        {
            if(elementosPar[i]>elementosPar[j]){
                int temp = elementosPar[i];
                elementosPar[i] = elementosPar[j];
                elementosPar[j] = temp;
            }          
        }
        
    }
    for (int i = 0; i < 10; i++) //Remplaza los elementos repetidos con -1
    {
        for (int j = i+1; j < 10; j++)
        {
            if(elementosPar[i] == elementosPar[j]){
                elementosPar[j] = -1;
                size--;
            }
        }
        
    }   
        for (int i = 0; i < 10; i++){ //Muestra los elementos sin los -1
        if(elementosPar[i]!=-1){
            printf("%i ", elementosPar[i]);
        }
    }

    return 0;
}