#include <stdio.h>
#define MAX 5

void mostrar(int lista[]){
    int i;
    for(i=0;i<MAX;i++){
        printf("Digito %d: %d\n", i, lista[i]);
      
    }
}
int main(){

    int lista[MAX];
     int i;
    
    for (i = 0; i < MAX; i++)
    {
        printf("Ingrese un numero entero: \n");
        scanf("%i",&lista[i]);
    }
    

    mostrar(lista);
 

    return 0;
}