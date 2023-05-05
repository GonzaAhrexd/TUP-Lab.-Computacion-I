#include <stdio.h>
int esPrimo(int num){
    int i;
    for(i=2;i<num/2;i++){
        if(num%i==0){
            return 0;
        }   
     
    }
      return 1;
}

int main(){
 
    int lista[9] = {0,4,78,5,32,9,77,1,23};
     int i,x, contador;
    for(i=0;i<9;i++){
        printf("Digito %d: %d\n", i, lista[i]);
        x+=lista[i];
        if(esPrimo(lista[i])==1){
            contador++;
        }
    }
    printf("Hay %i numeros primos", contador);
    
    return 0;
}