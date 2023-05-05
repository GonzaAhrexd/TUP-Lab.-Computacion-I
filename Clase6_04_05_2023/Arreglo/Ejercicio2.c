#include <stdio.h>
#define MAX 10
int buscarOrden(int listaNum[], int num){
    int i;
    for(i=0;i<MAX;i++){
        if(listaNum[i]==num){
            return 1;
        }
        else if(listaNum[i]>num){
            return 0;
        }
    }
    return 0;
}
int main(){

    int listaNum[MAX] = {5,6,8,10,25,30,45};
    int num;


    printf("Ingrese el elemento que desea buscar: ");
    scanf("%i", &num);

    if(buscarOrden(listaNum,num)==1){
        printf("Se ha encontrado el elemento");
    }else{
        printf("No se ha encontrado el elemento");
    }


    return 0;
}