#include <stdio.h>
int main(){

    int aIterar = 0;
    int i=0;

    printf("Ingrese el limite inferior del bucle: ");
    scanf("%i", &i);
    
    printf("Ingrese el limite superior del bucle: ");
    scanf("%i", &aIterar);



    for(i;i<aIterar;i++){
        printf("\nHola mundo");
    }

    return 0;
}