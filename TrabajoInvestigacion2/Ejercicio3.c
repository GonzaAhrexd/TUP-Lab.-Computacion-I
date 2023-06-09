#include <stdio.h>
#include <string.h>
struct alumnos{ /*Creamos la estructura alumnos con DNI, apellido, nombre y nota*/
    int DNI;
    char apellido[20];
    char nombre[20];
    float nota;
};
 int main(){
    
    FILE *archivo; 
     /*Instanciamos la estructura alumnos como al, notaAlta y notaBaja*/
    struct alumnos al;
    struct alumnos notaAlta;
    struct alumnos notaBaja;
    /*Inicializamos varios contadores en 0*/
    int cantidadAlumnos  = 0, notaMayor6 = 0, notaMenor6 = 0, sumaNotas=0,  notasMenoresA6 = 0;
    if((archivo = fopen("alumno.dat","rb"))==NULL){ /*Abrimos el archivo alumno.dat como lectura binaria y verificamo si no hay errores*/
        printf("No se pudo abrir el archivo");
    }else{
        notaAlta.nota = 0; /*Iniciamos el valor nota de notaAlta en 0*/
        notaBaja.nota = 11; /*Iniciamos el valor nota de notaAlta en 11 (El valor maximo)*/
        printf("\t LISTA DE ALUMNOS \n"); 
        printf("DNI \t  Apellido \t Nombre \t Nota");
        while(fread(&al,sizeof(al),1,archivo) == 1){  /*Mientras que se lea el  archivo*/
          /*Mostramos la tabla con todos los datos*/
            printf("\n%i ", al.DNI);  
            printf("   %s ", al.apellido);
            printf("      %s ", al.nombre);
            printf("         %.2f ", al.nota);
            cantidadAlumnos++; /*Aumentamos la cantidad de alumnos en 1*/
            sumaNotas+=al.nota; /*Sumamos las notas*/
            if(notaAlta.nota<al.nota){ /*Si la nota actual es mas alta que la nota guardada como la  mas alta, entonces remplazamos  sus valores*/
                notaAlta.DNI = al.DNI;
                strcpy(notaAlta.apellido,al.apellido);
                strcpy(notaAlta.nombre,al.nombre);
                notaAlta.nota = al.nota;
            }
            if(notaBaja.nota>al.nota){ /*Si la nota actual es mas baja que la nota guardada como la  mas baja, entonces remplazamos  sus valores*/
                notaBaja.DNI = al.DNI;
                strcpy(notaBaja.apellido,al.apellido);
                strcpy(notaBaja.nombre,al.nombre);
                notaBaja.nota = al.nota;
            }
            if(al.nota>=6){ /*Si la nota actual es mayor a 6, aumentamos el contador en 1*/
                notaMayor6++;
            }else{ /*Sino, sumamos la nota actual y el contador de notas menores*/
                notasMenoresA6+=al.nota;
                notaMenor6++;
            }

        }
    /* Limpiamos y cerramos el archivo */
        fflush(archivo);
        fclose(archivo);
        /*Mostramos todo lo que se pide en la consigna*/
        printf("\nLa cantidad de alumnos es %i ", cantidadAlumnos); /*Mostramos la cantidad de alumnos*/
        printf("\nEl alumno con la nota mas alta fue %s %s ", notaAlta.nombre, notaAlta.apellido); /*Mostramos a quien pertenece la nota mas  alta, llamando a la estructura en donde la guardamos*/
        printf("\nEl alumno con la nota mas baja fue %s %s ", notaBaja.nombre, notaBaja.apellido); /*Mostramos a quien pertenece la nota mas  baja, llamando a la estructura en donde la guardamos*/
        printf("\nEl promedio general es: %i", (float)sumaNotas / (float)cantidadAlumnos); /*Sacamos el promedio general dividiendo la suma de las notas por la cantidad de alumnos*/
        printf("\nLa cantidad de alumnos con nota mayor o igual a 6 es %i ", notaMayor6);    /*Mostramos la cantidad de alumnos con nota mayor a 6 */  
        printf("\nLa cantidad de alumnos con nota menor a 6 es %i ", notaMenor6);  /*Mostramos la cantidad de alumnos con nota menor a 6*/
        printf("\nEl porcentaje de alumnos con nota mayor a 6 es %.2f %%", ((float)notaMayor6/(float)cantidadAlumnos)  *100); /*Mostramo el porcentaje que ocupa los alumnos con nota mayor a 6 con  respecto al total*/
        printf("\nEl promedio de alumnos  con nota menor a 6 es de %.2f ", (float)notasMenoresA6 / (float)notaMenor6); /*Mostramos el promedio de los que sacaron notas menores a 6*/
    }
    return 0;
}