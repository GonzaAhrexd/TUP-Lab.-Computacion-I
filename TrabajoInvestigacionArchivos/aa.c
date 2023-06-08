#include <stdio.h>
int main(){

     FILE * datos; 
    datos = fopen (“nombres.dat”,”r”);
    datos = fopen (“nombres.dat”, “w”);
    datos = fopen (“nombres.dat”, “a”);
    datos = fopen (“nombres.dat”, “ra”);

    return 0;
}