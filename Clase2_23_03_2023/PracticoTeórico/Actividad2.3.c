
#include <stdio.h>
int main(){

    char primero, segundo;

    scanf(" %c", &primero);
    scanf(" %c", &segundo);

    if(primero!=segundo && primero!='a' || segundo!='a')
        printf("Gonzalo");
    else
        printf("Ebel");
    


    return 0;
}
