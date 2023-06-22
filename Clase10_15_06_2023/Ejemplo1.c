#include <stdio.h>
#include <string.h>

/*Las estructuras son como los objetos*/
struct perro{ /*Creamos la estructura*/
    char nombre[30];
    int edad;
    float peso;
    char raza[30];
}perro1={ /*Creamos una instancia de perro*/
    "Chikorita",
    10,
    5.34,
    "Pokemon"
};


int main(){
    struct perro perro2;
    strcpy(perro2.nombre,"Arduino"); 
    printf("\n El nombre de mi mascota es: %s ", perro2.nombre);
    return 0;
}