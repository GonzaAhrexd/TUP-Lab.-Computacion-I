#include <stdio.h>


int main(){
    int lista[9] = {0,4,78,5,32,9,77,1,23};
     int i,x;
    for(i=0;i<9;i++){
        printf("Digito %d: %d\n", i, lista[i]);
        x+=lista[i];
    }
    printf("El promedio es %i", x/9);

    return 0;
}