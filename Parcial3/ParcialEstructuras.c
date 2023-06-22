#include <stdio.h>
#include <string.h>
#define SIZE 3
struct Alumnos{ /*Definimos la estructura Alumnos*/
    int DNI;
    char Apellido[32];
    char Nombre[32];
    float nota;
};

void cargarArreglo(struct Alumnos listaAlumno[]){
    int i = 0;
    while (i < SIZE){ /*Utilizamos la sentencia while para rellenar todo nuestro arreglo de la estructura Alumnos*/
        printf("\nIngrese el DNI del alumno:  ");
        scanf("%i", &listaAlumno[i].DNI);
        printf("\nIngrese el apellido del alumno: ");
        scanf("%s", listaAlumno[i].Apellido);
        printf("\nIngrese el nombre del alumno: ");
        scanf("%s", listaAlumno[i].Nombre);
        printf("\nIngrese la nota del alumno: ");
        scanf("%f", &listaAlumno[i].nota);
        i++; /*Incrementamos el iterador en 1*/
    }
}

void listarApellidosConE(char cadenaApellidos[]){
    int sizeString = strlen(cadenaApellidos); /*Obtenemos la dimension de la cadena para poder iterar sobre ella*/
    int i = 0, j = 0, contadorApellidos = 0; /*inicializamos dos iteradores, uno para toda la cadena, y el otro para donde encuentre un . seguido de una E, ademas, inicializamos un contador para verificar si hay apellidos con E*/
    while(i<sizeString){ 
            if ((cadenaApellidos[i] == '.') && ((cadenaApellidos[i+1] == 'e' ) || (cadenaApellidos[i+1] == 'E'))){ /*Si la cadena en la posicion i es igual a un ., y la cadena en la posicion i+1 es una e o una E, entoncess*/
                j = i+1; /*Le pasamos el valor de i+1 a j*/
                
                while (cadenaApellidos[j] != '.') /*Iteramos mientras lo que tengamos en la posicion j sea distinto a un .*/
                {
                    printf("%c", cadenaApellidos[j]); /*Mostramos el valor en esa posicion*/
                    j++; /*Incrementamos j*/
                } /*El while terminara al encontrar otro punto, entonces*/
                i = j;  /*Le pasamos a i la posicion en la que quedo j, asi evitamos iteraciones de mas*/
                contadorApellidos++; /*Sumamos el contador de apellidos*/
                printf("\n"); /*Hacemos un salto de linea*/
            }
            i++; /*Incrementamos el iterador i en uno*/
    }
    if(contadorApellidos==0){ /*Si no existen apellidos con E, se mostrara el siguiente mensaje: */
        printf("\nNo se encontraron apellido que empiecen con E");
    }
    }

int main()
{
    struct Alumnos listaAlumno[SIZE]; /*Definimos el arreglo de la estructura Alumnos*/
    char cadenaApellidos[256] = "."; /*Creamos la cadena cadenaApellidos e inicializamos con un .*/
    cargarArreglo(listaAlumno); /*Llamamos a al procedimiento de cargarArreglo*/

    for (int i = 0; i < SIZE; i++){
        strcat(cadenaApellidos, listaAlumno[i].Apellido); /*Concatenamos los apellidos a la cadena*/
        strcat(cadenaApellidos, "."); /*Concatenamos un punto*/
    }
    printf("\nApellidos que empiezan con la letra E: \n");    
    listarApellidosConE(cadenaApellidos); /*Llamamos al procedimiento listarApellidosConE*/
    
    printf("\nEl tamanio total de la cadena es de %lli caracteres ", strlen(cadenaApellidos)); /*Mostramos el tamaño de la cadena*/
    return 0;
}