#include <stdio.h>
#include <ctype.h>
int main(){
    char cadena[5] = {'h','o','l','a','\0'};
    char hola[] = "Hola mundo";
    int i, vocalesNombre = 0, vocalesApellido = 0;
    char caracterABuscar;
    printf("La cadena es: \n");
    i=0;
    
    while(i<5){
        printf("caracter: %d: %c\n", i, cadena[i]);
        i++;
    }
    
    printf("%s \n", hola);
   
    char nombre[10], apellido[10];

    printf("Introduce tu nombre: ");
    scanf("%s", nombre);

    printf("Introduce tu apellido: ");
    scanf("%s", apellido);

    printf("Usted es %s %s \n", nombre, apellido);
    
    for (i = 0; i < 10; i++){
        if(tolower(nombre[i])=='a' || tolower(nombre[i])=='e' ||tolower(nombre[i])=='i'  || tolower(nombre[i])=='o' || tolower(nombre[i])=='u'){
            vocalesNombre++;
        }
        if(tolower(apellido[i])=='a' || tolower(apellido[i])=='e' ||tolower(apellido[i])=='i'  || tolower(apellido[i])=='o' || tolower(apellido[i])=='u'){
            vocalesApellido++;
        }
    }
    printf("Su nombre tiene : %i vocales \n", vocalesNombre);
    printf("Su apellido tiene : %i vocales \n", vocalesApellido);
    


    printf("Ingrese un caracter: \n");
    scanf(" %c", &caracterABuscar);
    int vecesEncontradoNombre = 0;
    int vecesEncontradoApellido = 0;

    for (i = 0; i < 10; i++){       
        if(nombre[i]==caracterABuscar){
            vecesEncontradoNombre++;
        }
        if(apellido[i]==caracterABuscar){
            vecesEncontradoApellido++;
        }       
    }

    printf("El caracter ingresado aparece en su nombre %i veces", vecesEncontradoNombre);   
    printf("\nEl caracter ingresado aparece en su apellido %i veces", vecesEncontradoApellido);

    int apareceSecuenciaNombre = 0,  apareceSecuenciaApellido = 0;
    for (i = 0; i < 9; i++){
        if(tolower(nombre[i])=='a' && tolower(nombre[i+1])=='r'){
            apareceSecuenciaNombre++;
        }
        if(tolower(apellido[i])=='a' && tolower(apellido[i+1])=='r'){
            apareceSecuenciaApellido++;
        }
    }
    printf("\nLa secuencia 'ar' aparece en su nombre %i veces", apareceSecuenciaNombre);   
    printf("\n La secuencia 'ar' aparece en su apellido %i veces", apareceSecuenciaApellido);


    return 0;
}