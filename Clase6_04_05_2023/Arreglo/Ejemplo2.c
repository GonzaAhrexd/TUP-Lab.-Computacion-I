#include <stdio.h>
#include <math.h>
int main(){
    int lista[9] = {0,4,78,5,32,9,77,1,23};
     int i,x;
    for(i=0;i<9;i++){
        lista[i]=pow(lista[i],2);
        printf("Digito %d: %d\n", i, lista[i]);
        x+=lista[i];
    }

    return 0;
}