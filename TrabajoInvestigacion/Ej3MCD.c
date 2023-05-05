#include <stdio.h>
int MCD(int x, int y){

    if(y==0){
        return x;
    }else{
        return MCD(y,x%y);
    }
}
int main(){
    int comun, x, y;

    printf("Ingrese el primer numero: ");
    scanf("%i", &x);
    printf("\nIngrese el segundo numero: ");
    scanf("%i", &y);
    comun = MCD(x,y);
    
    printf("\nEl MCM de los valores ingresados es: %i", comun);

    return 0;
}