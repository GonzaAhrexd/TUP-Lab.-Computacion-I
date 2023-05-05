#include <stdio.h>
/*Funciones*/
int suma(int a, int b){
    int total;
    total = a+b;
    return total;
}
int resta(int a, int b){
    int total;
    total = a-b;
    return total;
}

void imprimeValor(int z){
    printf("La suma es %d", z);
}


/*Principal*/
int main(){
    int x,y,z, opcion;
    printf("ingrese un numero: ");
    scanf("%i", &x);
    printf("ingrese otro numero: ");
    scanf("%i", &y);
    do{
    printf("\nEliga la operacion a realizar: ");
    printf("\n1- Suma");
    printf("\n2- Resta");
    printf("\n Opcion: ");
    scanf("%i", &opcion);    
  
    switch (opcion)
    {
    case 1:
        z = suma(x,y);
        imprimeValor(z);
        /* code */
        break;
    case 2:
         z = resta(x,y);
        imprimeValor(z);
        /* code */
        break;
    default:
        printf("Opcion incorrecta");
        break;
    }
  }while(opcion!=1 && opcion!=2);
   


    return 0;
}



