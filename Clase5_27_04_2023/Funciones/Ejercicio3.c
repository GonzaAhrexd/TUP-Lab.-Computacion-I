#include <stdio.h>
#include <math.h>

int MCD(int a,int b){
    int backup; /*Se crea una variable auxiliar*/
    int resto = a % b; /*Se obtiene el resto de A dividido B*/
    
    if(a==b){ /* Si los numeros ingresados son iguales, se devuelve cualquiera de los dos numeros*/
        return a;
    }
    else if(resto == 0){ /*Si el resto es igual a 0, se devuelve la division entera de ambos numeros, ya que este seria el mcd*/
        return a/b;
    }
    else{
        while(resto!=0){ /*Si el resto es distinto a 0, se divide a por el resto hasta encontrar una division exacta*/
            backup = resto;
            resto = a % resto;  
        }
        return backup;
    }
} 


float sumaFracciones(float a,float b){
    return a+b;
}

float restaFracciones(float a,float b){
    return a-b;
}

float multiplicacionFracciones(float a,float b){
    return a * b;
}

float divisionFracciones(float a,float b){
    return a / b;
}

void convertirAFraccion(float num){
    float numerador, denominador;
    float mcd;
    numerador = num*100;
    denominador = 100;

    mcd = MCD(numerador, denominador);

    numerador = numerador / mcd;
    denominador = denominador / mcd;
    if(fmod(num, 1.0) == 0){
        printf("%.0f", num);
    }
    else if(((int)numerador%(int)denominador) == 0){
        printf("%0.f", numerador/denominador);
    }else{
    printf("%.0f / %.0f" , numerador, denominador);
    }

}

int main(){

    float numeradorA, denominadorA , numeradorB, denominadorB, fraccionA, fraccionB;
    int opcion;

    do
    {
    printf("Ingrese el numerador de la primer fraccion: ");
    scanf("%f", &numeradorA);

    printf("Ingrese el denominador de la primer fraccion:  ");
    scanf("%f", &denominadorA);
    if(denominadorA==0){
        printf("\nEl numero debe ser distinto a 0");
    }
    } while (denominadorA==0);
    
    
    do
    {
    printf("Ingrese el numerador de la segunda fraccion: ");
    scanf("%f", &numeradorB);

    printf("Ingrese el denominador de la segunda fraccion:  ");
    scanf("%f", &denominadorB);
        if(denominadorB==0){
        printf("\nEl numero debe ser distinto a 0");
    }
    } while (denominadorB==0);
    
    printf("\n1- Suma");
    printf("\n2- Resta");
    printf("\n3- Multiplicacion");
    printf("\n4- Division");
    printf("\nOpcion: ");
    scanf("%i", &opcion);

    fraccionA = numeradorA/denominadorA;
    fraccionB = numeradorB/denominadorB;
    switch (opcion)
    {
    case 1:
        printf("La suma de las fracciones ingresadas es :");
        convertirAFraccion(sumaFracciones(fraccionA,fraccionB));
        break;
    case 2:
        printf("La suma de las fracciones ingresadas es :");
        convertirAFraccion(restaFracciones(fraccionA,fraccionB));
        break;
    case 3:
         printf("La suma de las fracciones ingresadas es :");
        convertirAFraccion(multiplicacionFracciones(fraccionA,fraccionB));
        break;
    case 4:
         printf("La suma de las fracciones ingresadas es :");
        convertirAFraccion(divisionFracciones(fraccionA,fraccionB));
        break;
    
    default:
        break;
    }

    return 0;
}