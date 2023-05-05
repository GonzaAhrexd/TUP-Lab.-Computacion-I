#include <stdio.h>
 int horaCompletaASegundo(int hora, int minuto, int segundo){
    return hora * 3600 + minuto*60 + segundo;
 }

void segundosAHora(int segundos){
        
            int minutos, aux, horas;
            minutos = segundos / 60;
            segundos = segundos % 60;
            aux = minutos;
            horas = minutos / 60;
            minutos = aux % 60;

        printf("Son %i  horas, %i minutos, %i segundos ", horas , minutos , segundos );
}

int main(){
    int opcion;
    int horas, minutos, segundos, aux;
    do
    {
        printf("\n1- Pasar de formato hh:mm:ss a segundos");
        printf("\n2- Pasar de segundos a minutos, horas, segundos");
        printf("\nOpcion: ");
        scanf("%i", &opcion);
    }while(opcion!=1 && opcion!=2);

        switch (opcion)
        {
        case 1:
            printf("Ingrese las horas: ");
            scanf("%i", &horas);
            
            printf("Ingrese los minutos: ");
            scanf("%i", &minutos);
            
            printf("Ingrese los segundos: ");
            scanf("%i", &segundos);

            printf("La hora ingresada es igual a %i segundos", horaCompletaASegundo(horas,minutos,segundos));
            break;
        case 2:
            printf("Ingrese los segundos: ");
            scanf("%i", &segundos);
      
      
            segundosAHora(segundos);
            break;
        default:
            break;
        }

}