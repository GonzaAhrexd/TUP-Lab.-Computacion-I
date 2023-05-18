/*
• Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
(comprendidas entre 0 y 10). Por pantalla, se debe mostrar todas las notas, la nota media,
la nota más alta que ha sacado y la menor.
*/

#include <stdio.h>

float menor(float notas[]){
    float NotaMenor = 11;
    for (int i = 0; i < 5; i++){
        if(NotaMenor>notas[i]){
            NotaMenor = notas[i];
        }
    }
    return NotaMenor;
}

float mayor(float notas[]){
    float NotaMayor = -1;
    for (int i = 0; i < 5; i++){
        if(NotaMayor<notas[i]){
            NotaMayor = notas[i];
        }
    }
    return NotaMayor;
}


float medio(float notas[]){
    float sumaValores = 0;
    for (int i = 0; i < 5; i++){
        sumaValores+=notas[i];
    }
    return sumaValores/5;
}

int main(){
    float Notas[5] = {};
    for(int i=0;i<5;i++){
        printf("Ingrese la nota %i: ", (i+1));
        scanf("%f", &Notas[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nNota %i: %.2f", (i+1), Notas[i]);
    }
    
    printf("\nLa Nota menor es: %.2f", menor(Notas));
    printf("\nLa Nota mayor es: %.2f", mayor(Notas));
    printf("\nLa Nota media es: %.2f",medio(Notas));
    
    return 0;
}