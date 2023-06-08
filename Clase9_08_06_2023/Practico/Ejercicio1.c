#include <stdio.h>
#include <string.h>
int main(){
        char cadena[20];
        int i;
        printf("Cargue dos nombres separados por un punto: \n");
        scanf("%s", cadena); /*Ingresamos la cadena*/
        int cantidadChar = strlen(cadena); /*Obtenemos la longitud del string*/
        for (i = cantidadChar; i < 20; i++){ /*Recorremos las 20 posiciones del string iniciando en el mismo valor que la longitud disponible*/
            cadena[i] = 'a';  /*Agregamos a a todos los espacios que no utilizamos*/
        }
        cadena[21] = '\0'; /*Agregamos el carácter nulo para no tener errores o caracteres indeseados*/
        printf("%s", cadena); /*Mostramos la cadena*/
    return 0;
}