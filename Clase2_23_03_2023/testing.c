#include <conio.h>
#include <stdio.h>
int main(){


    int a;
    scanf("%d", &a);
    if(a % 2 == 0){
        a++;   
        printf("Ahora es impar: %d ", a);
     }    

    getch();
    return 0;
}
