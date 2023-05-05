#include <stdio.h>
#define size 10

int esPrimo(int num[]){
    int i, contador;
    for(i=2;i<size/2;i++){
        if(num[i]%i==0){
            contador++;
        }   
     
    }
      return contador;
}

void mostrarElementos(int lista[]){
    int i;
    for(i=0;i<size;i++){
        printf("Digito %d: %d\n", i, lista[i]);
      
    }
}


void mostrarElementosInverso(int lista[]){
    int i;
    for(i=size;i>=0;i--){
        printf("Digito %d: %d\n", i, lista[i]);
      
    }
}

int main(){

    int listaElementos[size];
    int cantidadElementos;
    int i = 0;

    for(i;i<size;i++){
        printf("Ingrese el primer elemento: ");
        scanf("%i", &listaElementos[i]);

    }

    
    cantidadElementos = esPrimo(listaElementos);    
    printf("Hay %i numeros primos \n", cantidadElementos);
    mostrarElementos(listaElementos);
    mostrarElementosInverso(listaElementos);




    return 0;
}