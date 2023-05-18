/*0, 1, 1, 2, 3, 5, 8, 13, 21 , 34, 55*/
#include <stdio.h>
void secuenciaFibonacci(int anterior, int ultimo, int cantidad){
    
    int actual;
    printf("\n %i", anterior);    
    if(cantidad>1){
        cantidad--;
        actual = anterior + ultimo;
        anterior = ultimo;
        secuenciaFibonacci(anterior,actual,cantidad);
    }
}

int main(){
    secuenciaFibonacci(0,1,10);
    return 0;
}