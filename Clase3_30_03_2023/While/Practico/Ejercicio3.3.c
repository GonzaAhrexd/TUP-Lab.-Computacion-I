#include <stdio.h>
int main(){

    int numInf=1, numSup=0;

    while(numInf>numSup){
        printf("Ingrese el numero inferior: ");
        scanf("%i", &numInf);
        printf("Ingrese el numero superior: ");
        scanf("%i",&numSup);
    }
    
    printf("Los numeros entre dichos valores son: ");
    while(numInf<=numSup){
        printf("%i", numInf);
        if(numInf!=numSup)
            printf(" , ");
        numInf++;
    }




    return 0;
}