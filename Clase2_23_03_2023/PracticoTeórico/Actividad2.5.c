#include <stdio.h> 
int main()

{
    int num1, num2, Opcion; //Definimos las variables a utilizar como tipo entero
    //Pedimos al usuario que ingrese ambos numeros y lo guardamos en num1 y num2
    printf("Ingrese un numero entero: "); 
    scanf(" %i", &num1);
    printf("Ingrese otro numero entero: ");
    scanf(" %i", &num2);

    //Mostramos las distintas opciones, y le pedimos al usuario que ingrese la opción a realizar
    printf("\n1- Suma");
    printf("\n2- Resta");
    printf("\n3- Multplicacion");
    printf("\n4- Division");
    printf("\n5- Salir\n");
    printf("Ingrese la operacion a realizar: ");
    scanf(" %i", &Opcion);

    if (Opcion == 1){ //Si ingresa un 1, sumará
        printf("La suma es: %i", num1 + num2);
    }
    else if (Opcion == 2){ //Si ingresa 2, restará
        printf("La resta es: %i", num1 - num2);
    }
    else if (Opcion == 3){ //Si ingresa 3, multiplicará
        printf("La multiplicacion es: %i", num1 * num2);
    }
    else if (Opcion == 4){ //Si ingresa 4, dividirá si...
        if (num2 != 0){ //Si el divisor  es distinto de 0
            printf("La division es: %.2f", (float)num1 / (float)num2); //Para la división, convertirá los enteros a float y los dividirá,  y recortará los decimales a 2
        }
        else{ //Sino, dará un mensaje de que no es  posible dividir por 0
            printf("No se puede dividir por 0");
        }
    }
    else if(Opcion==5){ //Si se elije 5, terminará el programa
        return 0;
    }
    else{ //Otra opción, dará un mensaje de opción o valida
        printf("Opcion no valida");
    }

    return 0;
}
