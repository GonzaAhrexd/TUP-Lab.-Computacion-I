#include <stdio.h>
int main(){

    int num1,num2,opcion;
    printf("Ingrese un numero entero: "); 
    scanf(" %i", &num1);
    printf("Ingrese otro numero entero: ");
    scanf(" %i", &num2);

    printf("\n1- Suma");
    printf("\n2- Resta");
    printf("\n3- Multplicacion");
    printf("\n4- Division");
    printf("\n5- Salir\n");
    printf("Ingrese la operacion a realizar: ");
    scanf(" %i", &opcion);

    switch(opcion){
        case 1: { /*Al ingresar 1, realizara la suma*/
            printf("La suma es: %i", num1+num2); break;
        }
        case 2: { /*Al ingresar 2, realizara la resta*/
            printf("La resta es: %i", num1-num2); break;
        }
        case 3:{  /*Al ingresar 3, realizara la multiplicicacion */
            printf("La multiplicacion es: %i", num1*num2); break;
        }
        case 4:{ /*Al ingresar 4, realizara la division evaluando si num2 es distinto a 0*/
            if (num2 != 0){
                printf("La division es: %.2f", (float)num1 / (float)num2);
            }
            else{
                printf("No se puede dividir por 0");
            }
        break;
        }
        case 5:{ 
            return 0; break;
        }
        default:
            printf("El valor ingresado no es correcto");
    }
  
  

    return 0;
}
