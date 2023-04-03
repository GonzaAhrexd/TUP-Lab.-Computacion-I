#include <stdio.h>
int main(){

    int  anual=1, eleccion=0;
    float n,val,aux, deprec;
    printf("Ingrese el valor de objeto: ");
    scanf("%f", &val);
    printf("\nIngrese el numero de anios en los que el objeto se depreciara: ");
    scanf(" %f", &n);

    

    while(!(eleccion>0 && eleccion<=4)){
        printf("\n1- Metodo de Linea Recta");
        printf("\n2- Metodo de Balance Doblemente Declinante");
        printf("\n3- Metodo de Suma de los Digitos de los Anios");

        printf("\nEliga una opcion: ");
        scanf("%i", &eleccion);

     

    }
   switch(eleccion)
        {
        case 1:{
          
                deprec = val / n;
                printf("El objeto se desprecia %f anual", deprec);
                while(anual<=n){
                val  = val - deprec;
                printf("\nAnio %i: %.2f", anual, val);
                anual++;
            }
            break;
        }
        case 2:{
            deprec = 2 / n;
            printf("El objeto se deprecia %.0f porciento anual", deprec*100);
            while(anual<=n){
                
                val  = val - (deprec*val);

                printf("\nAnio %i: %.2f", anual, val);
                anual++;
            }
            break;
        }
        default:
            break;
        }
      


    return 0;
}