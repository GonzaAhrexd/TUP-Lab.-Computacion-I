#include <stdio.h>
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

int main(){
    int num1,num2, mcd;
    do
    {
        printf("ingrese un numero: "); /*Se ingresa el primer numero*/
        scanf("%i", &num1);
        printf("ingrese otro numero: (distinto a 0) "); /*Se ingresa el segundo numero*/
        scanf("%i", &num2);
        if(num2==0){ /*Si el segundo numero es 0, se avisa que debe ser distinto a este */
            printf("\nEl dividendo debe ser distinto a 0");
        }
    } while (num2==0);
    
    mcd = MCD(num1,num2); /*Se llama a la funcion y se le pasa los dos valores*/
    printf("%i", mcd); /*Se muestra la funcion*/
    
    return 0;
}