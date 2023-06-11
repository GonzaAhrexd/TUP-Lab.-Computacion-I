/* Diseñar un programa que permita generar un archivo de texto que permita cargar cinco
nombres separados por punto. Mostrar el contenido del archivo un nombre abajo del otro.*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *archivo;
    char nombres[255]; /*Creamos una cadena de caracteres*/
    char nombresArreglo[5][15] = {{""}, {""}, {""}, {""}, {""}}; /*Creamos un arreglo para almacenar los nombres de la cadena*/
    int nombreActual = 0, j = 0; /*Inicializamos en 0 dos variables que nos ayudara a iterar*/
    archivo = fopen("archivo.txt", "w+"); /*Abrimos o creamos en caso  de que no exista, el archivo archivo.txt*/
    if (archivo == NULL){ /*Sentencia if por si existen errores*/
        printf("\n No se pudo crear o abrir el archivo.");
    }
    else{
        printf("\n Ingrese cinco nombres separados por un punto: "); /*Se solicita al usuario ingresar 5 nombres separados por un punto*/
        scanf("%s", nombres); /*Se guarda los nombres en la cadena nombres*/
        int finalSize = strlen(nombres); /*Se obtiene la cantidad de caracteres de la cadena*/
        nombres[finalSize] = '\0'; /*Se le agrega el caracter nulo al final para evitar errores*/
        for (int i = 0; i < finalSize && nombreActual<5; i++){ /*Se itera toda la cadena mientras no se encuentren mas de 5 puntos*/
            if (nombres[i] == '.') /*Si se encuentra un . entonces */
            {
                nombresArreglo[nombreActual][j] = '\0'; /*Se guarda dentro del arreglo de cadenas, el caracter nulo en esa posicion para evitar errores*/
                nombreActual++; /*Se incrementa el contador del nombre actual en 1*/
                j = 0; /*Se vuelve a inciiar j en 0*/
                continue; /*Se procede con la siguiente iteración*/
            }
            else{ /*Si no se encuentra el .*/
                nombresArreglo[nombreActual][j] = nombres[i]; /*Se guarda el caracter actual en la posicion del nombre actual dentro del arreglo de cadenas*/
                j++; /*Se incrementa j en 1*/
            }
        }
        for (int i = 0; i < 5; i++) /*Se recorre el arreglo de cadenas para agregar los valores al archivo*/
        {
            fprintf(archivo, "%s \n", nombresArreglo[i]); /*Se agrega los strings de cada posicion del arreglo dentro del archivo, seguido de un salto de linea*/
        }
    }
    fflush(archivo); /*Limpiamos el espacio en memoria*/
    fclose(archivo); /*Cerramos el archivo */
    return 0;
}