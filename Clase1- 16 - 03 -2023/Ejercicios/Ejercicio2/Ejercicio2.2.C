#include <stdio.h>
#include <conio.h>

int main(){

    const float Descuento = 0.15; //Asignamos una constante con el valor del descuento en decimal
    float PrecioLista, PrecioTotal; //Declaramos dos flotantes PrecioLista y PrecioTotal
    int CantidadProducto; //Declaramos el entero CantidadProducto

    printf("Ingrese el precio de lista del articulo: "); //Mostramos "Ingrese el precio de lista del articulo:"
    scanf("%f",&PrecioLista); //Guardamos lo ingresado por consola en  la variable PrecioLista
    printf("Ingrese la cantidad a llevar del articulo: ");
    scanf("%i",&CantidadProducto); //Guardamos lo ingresado por consola en  la variable CantidadProducto

    PrecioTotal = PrecioLista * CantidadProducto;  //Al PrecioLista lo multiplicamos por CantidadProducto
    printf("El total a pagar, con el descuento aplicado, es del: %.2f", PrecioTotal - PrecioTotal*Descuento); //Mostramos la operación  de restar el PrecioTotal - PrecioTotal * Descuento (Para obtener el descuento)



    return 0;
}