#include <stdio.h>
#include <conio.h>

int main(){
    int a,b,c;

    printf("Ingrese un caracter");
    scanf("%d", &a);
    
    printf("Ingrese otro caracter: ");
    scanf("%d", &b);
    
	c = a + b;
	
    printf("La suma es: %d", c);    
    
    return 0;

}
