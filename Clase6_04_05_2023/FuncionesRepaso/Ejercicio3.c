/*
Determinar la distancia entre dos puntos P y Q (leidos por teclado), con una función cuyo prototipo sea: 
 float distancia.euclidea (punto P, punto Q); 
 y que imprima el resultado con una función cuyo prototipo sea
 void imprime.distancia (float distancia) 
 */

#include <stdio.h>
float distanciaPuntos(float P, float Q){
    if(P>Q){
        return P-Q;
    }
    else{
        return Q-P;
    }
}

void imprimirDistancia(float distancia){
    printf("La distancia es de %.2f", distancia);
}


int main(){
    float P,Q;
    printf("Ingrese la distancia P: ");
    scanf("%f", &P);
    printf("Ingrese la distancia Q: ");
    scanf("%f", &Q);

    imprimirDistancia(distanciaPuntos(P,Q));
}