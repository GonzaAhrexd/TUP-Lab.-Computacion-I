#include <stdio.h>
int main(){
    
    int num1,num2,num3;
    
    do{
     
        printf("Ingrese 3 numeros que sean consecutivos: \n");
        scanf("%i",&num1);
        scanf("%i",&num2); 
        scanf("%i",&num3); 
   
        }
        while(!(num1==num2-1 && num2==num3-1 || num1==num2+1 && num2==num3+1) );
    
    printf("Gracias! :)"); 
    return 0; 
}
