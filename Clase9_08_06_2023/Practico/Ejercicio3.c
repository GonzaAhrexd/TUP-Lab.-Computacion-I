#include <stdio.h>
#include <string.h>

void ingresarCadena(char cadena[], int numero){ /*Procedimiento para ingresar la cadena*/
    printf("Ingrese la cadena %i: \n", numero);
    scanf("%s", cadena);
}
void longitud(char cadena[], int numero){ /*Procedimiento para mostrar la longitud de la cadena*/
    printf("\nLa longitud de la cadena %i es: %lli", numero, strlen(cadena));
}

int main(){
    char cadena1[30];
    char cadena2[30];
    char cadena3[30];

/*Llamamos a la función para ingresar los valores de las 3 cadenas*/
    ingresarCadena(cadena1, 1); 
    ingresarCadena(cadena2, 2);
    ingresarCadena(cadena3, 3);

/*Mostramos la longitud de las 3 cadenas*/
    longitud(cadena1,1);
    longitud(cadena2,2);
    longitud(cadena3,3);    

/*Guardamos las 3 cadenas en un arreglo de cadenas*/
    char cadenaOrdenada[3][30] = {{""},{""},{""}}; 
    strcpy(cadenaOrdenada[0], cadena1);
    strcpy(cadenaOrdenada[1], cadena2);
    strcpy(cadenaOrdenada[2], cadena3);


    int menor = 0;
    char aux[30];
    for (int i = 0; i < 3; i++) { /*Ordenamos el arreglo utilizando el metodo de burbuja*/
      for (int j = 0; j < 3; j++) {
        if(strlen(cadenaOrdenada[i])<strlen(cadenaOrdenada[j])){
            strcpy(aux, cadenaOrdenada[i]); 
            strcpy(cadenaOrdenada[i], cadenaOrdenada[j]);
            strcpy(cadenaOrdenada[j], aux);
            }
        }
    }

    for (int i = 0; i < 3; i++){ /*Mostramos la cadena ordenada*/
        printf("\n%s", cadenaOrdenada[i]);
    }
    
    return 0;
}