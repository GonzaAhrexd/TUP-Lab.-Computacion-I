#include <stdio.h>
int main()
{

    int anual = 1, eleccion = 0;
    float n, val, aux, deprec;
    printf("Ingrese el valor de objeto: ");
    scanf("%f", &val);
    printf("\nIngrese el numero de A\xA4os en los que el objeto se depreciara: ");
    scanf(" %f", &n);

    /*Entramos a un bucle while para elegir una opción*/
    while (!(eleccion > 0 && eleccion <= 4))
    {
        printf("\n1- Metodo de Linea Recta");
        printf("\n2- Metodo de Balance Doblemente Declinante");
        printf("\n3- Metodo de Suma de los Digitos de los A\xA4os");
        printf("\n4- Salir");

        printf("\nEliga una opcion: ");
        scanf("%i", &eleccion);
    }

    /*Entramos a un switch case para las distintas opciones*/
    switch (eleccion)
    {
    case 1:
    {
        /*En el caso 1, solo debemos dividir el valor por la cantidad de años a depreciarse*/
        deprec = val / n;
        printf("El objeto se desprecia %f anual", deprec);
        /* Vamos mostrando la depreciación año por año */
        while (anual <= n)
        {
            val = val - deprec;
            printf("\nA\xA4o %i: %.2f", anual, val);
            anual++;
        }
        break;
    }
    case 2:
    {
        /*Calculamos la depreciación anual por el Metodo de Balance Doblemente Declinante*/
        deprec = 2 / n;
        printf("El objeto se deprecia %.0f %% anual", deprec * 100);

        /* Vamos mostrando la depreciación año por año */
        while (anual <= n)
        {

            val = val - (deprec * val);

            printf("\nA\xA4o %i: %.2f", anual, val);
            anual++;
        }
        break;
    }
    case 3:
    {
        aux = anual; /* Se almacena el valor de "anual" en una variable auxiliar */
        deprec = 0;  /* Se inicializa la variable "deprec" a 0 para acumular la suma de los dígitos de los años */

        while (anual <= n)
        {                            /* Se calcula la suma de los dígitos de los años desde "anual" hasta "n" */
            deprec = deprec + anual; /* Se acumula la suma en la variable "deprec" */
            anual++;                 /* Se incrementa el valor de "anual" en cada iteración del bucle */
        }

        aux = deprec; /* Se actualiza el valor de "aux" con la suma de los dígitos de los años */ 
        anual--;      /* Se decrementa el valor de "anual" para utilizarlo en el segundo bucle */

        while (anual != 0){
            /* Se calcula la depreciación anual para cada año */
            deprec = anual / aux;       /* Se calcula el factor de depreciación dividiendo "anual" entre la suma de los dígitos de los años */
            val = val - (val * deprec); /* Se calcula la depreciación en pesos */
            /* Se muestra el resultado de la depreciación anual en porcentaje y en valor absoluto en pesos, además de  que se  muestra cada año, mediante una resta y pasando el valor a positivo */

            printf("\nA\xA4o %.0f, depreciacion %.2f %%: %.2f", (((float)anual - n) * -1) + 1, deprec * 100, val);
         
            anual--; /*Se decrementa el valor anual*/
        }

        break;
    }
    case 4:
    {
        printf("Se ha salido del programa");
        break;
    }
    }

    return 0;
}