#include <stdio.h>

void mostrarNumeros(int num){   
    if(num==1){
        printf("\n%i", num);
    }
    else{
        mostrarNumeros(num-1);
        printf("\n%i", num);
    }
}

int main(){
    
    int num;
    printf("Ingrese el numero al que desea mostrar desde el 1 : ");
    scanf("%i", &num);
    mostrarNumeros(num);

    return 0;
}