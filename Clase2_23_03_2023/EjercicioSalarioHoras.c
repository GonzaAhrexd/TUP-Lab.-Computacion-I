#include <stdio.h>
#include <conio.h>

int main()
{

    float horas, precio, salario;

    printf("Ingrese la cantidad de horas: \n");
    scanf("%f", &horas);

    printf("Ingrese el precio por hora: \n");
    scanf("%f", &precio);

    if (horas <= 40){   
        printf("\nSiempre aca");
        salario = horas * precio;
    } else
    {
        printf("\nPrueba");
        salario = 40 * precio * 1.5 * precio * (horas-40);
    }

    printf("El salario es de : %f", salario);


    return 0;
}
