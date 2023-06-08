#include <stdio.h>
#define FILAS 3
#define COLUMNAS 3
void mostrarMatriz(int matriz[FILAS][COLUMNAS]); /*Definimos la función mostrarMatriz*/
int sumaDiagonalPrincipal(int matriz[FILAS][COLUMNAS]);
int divisiblePor3(int num);
void mostrarArreglo(int vector[]);
void ordenarMenorAMayor(int vector[]);

int main(){
    int arreglo[11] = {23,12,52,24,64,32,64,12,65,35,43}; /*Definimos el arreglo de 11 elementos*/
    int matriz[FILAS][COLUMNAS]; /*Definimos la matriz tomando las filas y columnas del define*/
    int i,j,k=2,contadorDivisible; /*Definimos los iteradores*/
    int arregloDivisores3[9];

    for (i = 0; i < FILAS; i++){ /*Bucle para recorrer las filas*/
        for ( j = 0; j < COLUMNAS; j++){ /*Bucle para recorrer las columnas*/
            matriz[i][j]=arreglo[k]; /*Asignamos a la matriz en la posicion [i][j] el valor del arreglo en [k]*/
            k++; /*Incrementamos en 1 el valor del iterador k*/
        }
        
    }
    mostrarMatriz(matriz); /*Llamamos a la función para mostrar la matriz*/
    if(sumaDiagonalPrincipal(matriz) == 1){ /*Llamamos a la función sumaDiagonalImpar para evaluar si la suma de la diagonal principal es par o impar*/
        printf("La sumatoria de la diagonal principal es impar\n");
    }else{
        printf("La sumatoria de la diagonal principal es par\n");
    }

    for (i = 0; i < 9; i++){ /*Inicializamos el arreglo con valores en 0 para evitarnos errores*/
        arregloDivisores3[i] = 0;
    }
    contadorDivisible=0; /*Iniciamos un contador en 0*/
    k=0; /*Volvemos a iniciar k en 0*/
    for (i = 0; i < FILAS; i++){ /*Recorremos las filas y las columnas de la matriz*/
        for (j = 0; j < COLUMNAS; j++){
            if(divisiblePor3(matriz[i][j])==1){ /*Si llamamos a la funcion y nos devuelve 1, entonces: */
                arregloDivisores3[k]=matriz[i][j]; /*Le pasamos al arreglo en la posicion k, el valor de la matriz en la posicion i j*/
                contadorDivisible++; /* Aumentamos el contador en 1*/
                k++; /* Sumamos la variable k en 1*/
            }
        }    
    }
    if(contadorDivisible>0){ /*Si nuestro contador es más de 0, entonces*/
        printf("Existen %i elementos divisibles por 3 y son: ", contadorDivisible); /*Decimos cuantos elementos existen y cuales son divisibles*/
        mostrarArreglo(arregloDivisores3); /*Mostramos el arreglo*/
    }else{ /*Sino, decimos que no hay elementos divisibles por 3*/
        printf("No hay elementos divisibles por 3");
    }
    
    printf("\nEl arreglo ordenado de menor a mayor queda como: ");
    ordenarMenorAMayor(arregloDivisores3); /*Mostramos el arreglo ordenado de menor a mayor*/
    return 0;
}

void mostrarMatriz(int matriz[FILAS][COLUMNAS]) {
    int i,j; /*Definimos los iteradores*/
    for ( i = 0; i < FILAS; i++) { /*Bucle para recorrer las filas*/
        for ( j = 0; j < COLUMNAS; j++) { /*Bucle para recorrer las columnas*/
            printf("%d ", matriz[i][j]); /*Mostramos la matriz en la posicion [i][j]*/
        }
        printf("\n"); /*Hacemos un salto de linea para separar las filas*/
    }
}
int sumaDiagonalPrincipal(int matriz[FILAS][COLUMNAS]){
     int i,j, sumatoria = 0; /*Definimos los iteradores*/
   
     for ( i = 0; i < FILAS; i++) { /*Bucle para recorrer las filas*/
        for ( j = 0; j < COLUMNAS; j++) { /*Bucle para recorrer las columnas*/
            if(i==j){ /*Si las filas son iguales a las columnas*/
                sumatoria+=matriz[i][j];  /*Sumar los valores a la variable sumatoria*/
            }
    }     
}
    if(sumatoria%2!=0){ /*Si el resto de la división entre la sumatoria y 2 es 0, entonces devolver 1, sino, devolver 0*/
        return 1;
    }else{
        return 0;
    }
}
int divisiblePor3(int num){
    if(num%3==0){ /*Si el resto de la division por 3 da 0, devolver 1, sino, devolver 0*/
        return 1;
    }else{
        return 0;
    }
}
void mostrarArreglo(int arreglo[9]){
    for (int i = 0; i < 9; i++) { /*Recorremos el arreglo para mostrarlo*/
        if(arreglo[i]!=0)  /* Solo se muestra siempre que el valor sea distinto a 0*/
        printf("%d  ", arreglo[i]);
    }
}
void ordenarMenorAMayor(int arreglo[]){ /*Ordenamos de menor a mayor utilizando el método de burbuja*/
    int i,j, aux;
    for (i = 0; i < 6; i++) { /*Recorremos el arreglo con un for anidado*/
      for (j = 0; j < 6; j++) {
        if (arreglo[i] < arreglo[j]) { /* Si el arreglo en la posicion i es mayor al arreglo en la posicion j, entonces: */
          aux = arreglo[i]; /*Guardamos el valor del arreglo en la posicion i, temporalmente en una variable auxiliar*/
          arreglo[i] = arreglo[j]; /*Le asignamos al arreglo de la posicion i el valor de la posicion j*/
          arreglo[j] = aux; /*Asignamos a la posicion j, el valor de la posicion i*/
        }
      }
    }
    mostrarArreglo(arreglo); /*Mostramos el arreglo*/
}
