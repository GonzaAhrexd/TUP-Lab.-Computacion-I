#include <stdio.h>
#include <string.h>
int cantidadOcurrencias(char *cadena, char letra){ /*Funcion que cuenta la cantidad de apariciones de un caracter en nuestra palabra*/
    int contadorOcurrencias = 0; 
    char *resultado; 
    resultado = strchr(cadena,letra); /*Busca la primera ocurrencia de 'letra' en 'cadena' utilizando la funcion integrada strchr de la biblioteca string.h*/
    while ((resultado != NULL)){ /*Mientras el resultado no sea NULL*/
        contadorOcurrencias++;
        resultado = strchr(resultado+1, letra); /*Se busca la siguiente posicion de la palabra*/
    }
    return contadorOcurrencias;
}
int main(){
    char cadena[20];
    char busqueda;
    printf("\nIngrese la palabra: ");
    scanf("%s",cadena);
    printf("\nIngrese la letra que desea buscar: ");
    scanf(" %c", &busqueda);
    int cantidad = cantidadOcurrencias(cadena,busqueda);

    printf("\nLa letra %c en la palabra %s aparece %i veces", busqueda, cadena, cantidad);
    return 0;
}
