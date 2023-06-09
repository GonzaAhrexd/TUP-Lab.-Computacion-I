/*
Ingresar 3 oraciones por teclado, cada oración debe estar separada por 1 punto y cada palabra por un asterisco
Se pide cuántas palabras tiene cada oración, cuál es la oración con mayor cantidad de palabras.
Mostrar las oraciones una abajo de la otra.
Ingresar un cáracter por teclado e indicar la oración en la que más veces aparece

*/
#include <stdio.h>
int main(){

    char parrafo[255];
    int palabraPorOracion[3] = {0,0,0};
    printf("Ingrese 3 oraciones por teclado, separando cada palabra con un asterisco y cada oracion con un punto: \n");
    scanf("%s", &parrafo);

    printf("%s", parrafo);
    int j=0;
    for (int i = 0; i < 255; i++)
    {   
        if(j>2){
            break;
        }
        if(parrafo[i] == '.'){
            j++;
            continue;
        }
        if(parrafo[i]=='*'){
            palabraPorOracion[j]++;
        }

    }

    printf("\nLa primer oracion tiene %i palabras.\n La segunda tiene %i palabras.\nLa tercera tiene %i palabras", palabraPorOracion[0], palabraPorOracion[1], palabraPorOracion[2]);
    int oracionMayor = 0;
    for (int i = 0; i < 3; i++)
    {
        if(palabraPorOracion[oracionMayor] < palabraPorOracion[i])
        oracionMayor = i;
    }

    printf("\nLa oracion mayor es la numero %i", oracionMayor+1);
    j = 0;
    for (int i = 0; i < 255; i++){
        printf("%c",parrafo[i]);
        if(parrafo[i] == '.'){
            printf("\n");
            j++;
        }
        if(j>2){
            break;
        }
    }
    
    char caracterABuscar;
    scanf(" %c", &caracterABuscar);
    int vecesEncontrado[3] = {0,0,0};
    j = 0;
    for (int i = 0; i < 255; i++){       
        if(parrafo[i] == caracterABuscar){
            vecesEncontrado[j]++;
        }
        if(parrafo[i] == '.'){
            j++;
        }
        if(j>2){
            break;
        }
    }

     int masVeces = 0;
    for (int i = 0; i < 3; i++)
    {
        if(vecesEncontrado[masVeces] < vecesEncontrado[i])
        masVeces = i;
    }

    printf("La palabra en la que mas se repite es la numero %i, y aparece %i veces", masVeces+1, vecesEncontrado[masVeces]);

    return 0;
}