#include <stdio.h>
#define PI 3.1415

int main(){
    float Radio,perimetroCircunferencia;

    printf("Ingrese el radio de una circunferencia: " );
    scanf("%f", &Radio);

    perimetroCircunferencia = 2 * PI * Radio;
    
    printf("El perimetro de la circunferencia es: %f ", perimetroCircunferencia);


    return 0;
}
