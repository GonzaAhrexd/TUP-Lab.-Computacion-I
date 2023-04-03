#include <stdio.h>
int main(){
    char caracter;

    scanf(" %c", &caracter);
    caracter= tolower(caracter);
    if(caracter == 'a')
        printf("El caracter ingresado es una vocal, y es la A");
    else if(caracter == 'e')
        printf("El caracter ingresado es una vocal, y es la E");
    else if(caracter == 'i')
        printf("El caracter ingresado es una vocal, y es la I");
    else if(caracter == 'o')
        printf("El caracter ingresado es una vocal, y es la O");
    else if(caracter == 'u')
        printf("El caracter ingresado es una vocal, y es la U");
    else
        printf("El caracter es una consonante");

    return 0;
}
