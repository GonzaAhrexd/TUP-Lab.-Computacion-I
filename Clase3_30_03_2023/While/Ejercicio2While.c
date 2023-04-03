#include <stdio.h>
int main(){
    float lado = 0;
    int intentos = 1;
    while (intentos<=5 && lado<=0){
        printf("Ingrese un valor mayor a 0 (Intento %i /5): ", intentos);
  
        scanf("%f", &lado);
      
        intentos++;
    }
   
    if(intentos>5 && lado<=0){
        printf("Se han acabado los intentos");
    }else{ 
    printf("El perimetro del cuadrado es: %.2f", lado * 4);
    }
    return 0;
}
