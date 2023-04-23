#include <stdio.h>
int main(){
    int limite, kgPescado = 1, kgPescadosTotal=0;
    
    do{
        printf("Ingrese el limite de pescados establecidos por el gobierno: ");
        scanf("%i", &limite);
    }while(limite<=0);
    
    do{
        printf("\nIngrese el peso pescado: ");
        scanf("%i", &kgPescado);
        kgPescadosTotal+=kgPescado;
        printf("Total acumulado: %ikg ",kgPescadosTotal);
        
    }while(kgPescadosTotal<limite && kgPescado != 0);
    
    printf("\nSe ha llegado al limite permitido para pescar. ");    
    printf("\nSe ha excedido: %ikg", kgPescadosTotal-limite);

    return 0;
}