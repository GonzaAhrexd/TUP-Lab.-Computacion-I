#include <stdio.h>
#include <conio.h>
#include <Math.h> //Importamos la librería de Math.h
int main(){
    int numero; //Declaramos la variable de tipo entero numero
    printf("Ingrese un numero entero: "); //Mostarmos en pantalla el mensaje "Ingrese un numero entero: "
    scanf("%i",&numero); //Escaneamos el numero ingresado y lo guardamos en la variable numero

    float QuintaParte = numero  / 5; //Declaramos  una variable de tipo flotante QuintaParte y guardamos ahí la división del numero por 5
    int CuadradoNumero = pow(numero,2); //Declaramos la variable CuadradoNumero, y guardamos ahí el cuadrado del numero ingresado

    printf("La quinta parte del numero ingresado es: %.2f" , QuintaParte); //Mostramos la variable QuintaParte luego del mensaje "La quinta parte del numero ingreasdo es: "
    printf("\nLa mitad de la quinta parte del numero ingresado es: %.2f" , QuintaParte / 2); //Mostramos la variable QuintaParte dividido por 2, luego del mensaje La mitad de la quinta parte del numero ingresado es:
    printf("\nEl cuadrado del numero ingresado es: %i" , CuadradoNumero); //Mostramos la variable CuadradoNumero, luego del mensaje "El cuadrado del numero ingreasdo es: "
    

    return 0;  
}