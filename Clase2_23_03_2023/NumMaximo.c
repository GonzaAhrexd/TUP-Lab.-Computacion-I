#include <stdio.h>
int main(){
    int A,B,C;
    printf("\nIngrese el primer valor: ");
    scanf("%i", &A);
    
    printf("\nIngrese el segundo valor: ");
    scanf("%i", &B);
    
    printf("\nIngrese el tercer valor: ");
    scanf("%i", &C);
    if(A>B && A>C){
        printf("%i", A, " es el mayor");
    }else{
        if(B>A && B>C){
            printf("%i", B, " es el mayor");
        }else{
            printf("%i",C, " es el mayor");
        }
    }



    return 0;
}
