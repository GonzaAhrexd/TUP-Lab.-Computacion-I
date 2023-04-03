#include <stdio.h>
int main()
{

    int A, B, C;

    printf("\nIngrese el  valor de A: ");
    scanf("%i", &A);

    printf("\nIngrese el valor de B: ");
    scanf("%i", &B);

    printf("\nIngrese el  valor de C: ");
    scanf("%i", &C);

    if(A==B && A==C){
        printf("Los tres numeros son iguales");
    }
    else if(A==B){
        printf("A y B son iguales");
    }
    else if(A==C){
        printf("A y C son iguales");
    }
    else if(B==C){
        printf("B y C son iguales");
    }
    else{
        printf("Los tres numeros son distintos");
    }
    return 0;
}
