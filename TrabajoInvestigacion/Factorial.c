/* Calcular el factorial de un número*/
#include <stdio.h>

int factorial(int num){
    if(num==1){
        return num;
    }
    else{ 
    return num * factorial(num-1);
    }
}

int main(){
    int num;
    printf("Ingrese el numero  que quiere conocer su factorial: ");
    scanf("%i", &num);

    int fac = factorial(num);
    printf("El factorial es %i", fac);
    return 0;
}