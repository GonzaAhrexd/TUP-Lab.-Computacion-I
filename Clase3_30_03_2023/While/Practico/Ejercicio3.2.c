/*: Calcular el total de una factura que un cliente debe pagar en una librería. Ingresar por teclado la cantidad de
líneas de la factura. Mostrar por pantalla el total parcial y final  */

#include <stdio.h>
int main(){
    int i=1,cantidad;
    float precio, precioCantidad, total = 0.00;
    char seguir = 'y';   
    while(seguir=='y'||seguir=='Y'){
        printf("Ingrese el precio del producto numero %i: ", i);
        scanf(" %f", &precio);
        
        printf("Ingrese la cantidad del producto numero %i: ", i);
        scanf(" %i", &cantidad);
        
        precioCantidad = precio * cantidad;
        total = precioCantidad + total;

        printf("Desea ingresar otro articulo?: ");
        scanf(" %c", &seguir);
        i++;

    }
        printf("La cantidad total es %.2f", total);

    return 0;
}
