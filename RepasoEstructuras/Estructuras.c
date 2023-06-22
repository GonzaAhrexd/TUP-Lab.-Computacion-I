#include <stdio.h>
#include <string.h>

struct Artista
{
    int DNI;
    char nombre[32];
    char apellido[32];
};

struct Exito
{
    int DNI;
    char titulo[32];
    char genero[32];
    int cantidadVendida;
};

struct EstructuraFinal
{
    int DNI;
    char nombre[32];
    char apellido[32];
    char titulo[32];
    char genero[32];
    int cantidadVendida;
};

void ordenarArtistas(struct Artista artista[], int size)
{

    int aux = 0;
    char AuxStr[32];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (artista[i].DNI < artista[j].DNI)
            {
                /*Cambiar DNI de lugar*/
                aux = artista[i].DNI;
                artista[i].DNI = artista[j].DNI;
                artista[j].DNI = aux;
                strcpy(AuxStr, artista[i].nombre);
                strcpy(artista[i].nombre, artista[j].nombre);
                strcpy(artista[i].nombre, AuxStr);

                strcpy(AuxStr, artista[i].apellido);
                strcpy(artista[i].apellido, artista[j].apellido);
                strcpy(artista[i].apellido, AuxStr);
            }
        }
    }
}

void ordenarExitos(struct Exito exito[], int size)
{

    int aux;
    char AuxStr[32];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (exito[i].DNI < exito[j].DNI)
            {
                /*Cambiar DNI de lugar*/
                aux = exito[i].DNI;
                exito[i].DNI = exito[j].DNI;
                exito[j].DNI = aux;
                strcpy(AuxStr, exito[i].titulo);
                strcpy(exito[i].titulo, exito[j].titulo);
                strcpy(exito[i].titulo, AuxStr);

                strcpy(AuxStr, exito[i].genero);
                strcpy(exito[i].genero, exito[j].genero);
                strcpy(exito[i].genero, AuxStr);

                aux = exito[i].cantidadVendida;
                exito[i].cantidadVendida = exito[j].cantidadVendida;
                exito[j].cantidadVendida = aux;
            }
        }
    }
}

void ordenarVendidos(struct EstructuraFinal final[], int size)
{

    int aux;
    char AuxStr[32];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (final[i].cantidadVendida < final[j].cantidadVendida)
            {
                /*Cambiar DNI de lugar*/
                aux = final[i].DNI;
                final[i].DNI = final[j].DNI;
                final[j].DNI = aux;

                strcpy(AuxStr, final[i].nombre);
                strcpy(final[i].nombre, final[j].nombre);
                strcpy(final[i].nombre, AuxStr);

                strcpy(AuxStr, final[i].apellido);
                strcpy(final[i].apellido, final[j].apellido);
                strcpy(final[i].apellido, AuxStr);

                strcpy(AuxStr, final[i].titulo);
                strcpy(final[i].titulo, final[j].titulo);
                strcpy(final[i].titulo, AuxStr);

                strcpy(AuxStr, final[i].genero);
                strcpy(final[i].genero, final[j].genero);
                strcpy(final[i].genero, AuxStr);

                aux = final[i].cantidadVendida;
                final[i].cantidadVendida = final[j].cantidadVendida;
                final[j].cantidadVendida = aux;
            }
        }
    }
}

int main()
{
    int size, generoNum;
    printf("Cuantos artistas y exitos desea cargar?");
    scanf("%i", &size);
    struct Artista listaArtista[size];
    struct Exito listaExito[size];
    struct EstructuraFinal listaFinal[size];
    for (int i = 0; i < size; i++)
    {
        printf("Ingrese el DNI del artista: ");
        scanf("%i", &listaArtista[i].DNI);
        printf("Ingrese el nombre del artista: ");
        scanf("%s", listaArtista[i].nombre);
        printf("Ingrese el apellido del artista: ");
        scanf("%s", listaArtista[i].apellido);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Ingrese el DNI del exito: ");
        scanf("%i", &listaExito[i].DNI);
        printf("Ingrese el nombre del titulo del exito: ");
        scanf("%s", listaExito[i].titulo);
        do
        {
            printf("1- Folklore\n2- Rock\n3- Popular\n");
            printf("Ingrese el genero: ");
            scanf("%i", &generoNum);
            switch (generoNum)
            {
            case 1:
                strcpy(listaExito[i].genero, "Folklore");
                break;
            case 2:
                strcpy(listaExito[i].genero, "Rock");
                break;
            case 3:
                strcpy(listaExito[i].genero, "Popular");
                break;
            default:
                break;
            }
        } while (generoNum > 3 || generoNum < 1);
        printf("Ingrese la cantidad vendida: ");
        scanf("%i", &listaExito[i].cantidadVendida);
    }

    ordenarArtistas(listaArtista, size);
    printf("\nArtistas \n");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", listaArtista[i].DNI);
        printf("%s ", listaArtista[i].nombre);
        printf("%s ", listaArtista[i].apellido);
    }
    ordenarExitos(listaExito, size);
    printf("\nExitos ");
    for (int i = 0; i < size; i++)
    {
        printf("\n%i ", listaExito[i].DNI);
        printf("\n%s ", listaExito[i].titulo);
        printf("\n%s ", listaExito[i].genero);
        printf("\n%i ", listaExito[i].cantidadVendida);
    }

    int contador = 0;
    for (int i = 0; i < size; i++)
    {
        if (listaExito[i].DNI == listaArtista[i].DNI)
        {
            listaFinal[contador].DNI = listaExito[i].DNI;
            strcpy(listaFinal[contador].nombre, listaArtista[i].nombre);
            strcpy(listaFinal[contador].apellido, listaArtista[i].apellido);
            strcpy(listaFinal[contador].titulo, listaExito[i].titulo);
            strcpy(listaFinal[contador].genero, listaExito[i].genero);
            strcpy(listaFinal[contador].cantidadVendida, listaExito[i].cantidadVendida);
            contador++;
        }
    }
    ordenarVendidos(listaFinal, size);

    printf("\nEl mas vendido es el  disco de %s %s con titulo %s del genero %s, vendido un total de %i copias", listaFinal[0].nombre, listaFinal[0].apellido, listaFinal[0].titulo, listaFinal[0].genero, listaFinal[0].cantidadVendida);
    printf("\nMostrar cantidad vendida por genero: ");
    generoNum = 0;
    do
    {
        printf("1- Folklore\n2- Rock\n3- Popular\n");
        printf("Ingrese el genero: ");
        scanf("%i", &generoNum);
        switch (generoNum)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                if (listaFinal[i].genero == "Folklore")
                {
                    printf("\n %s %s %s %s ", listaFinal[i].nombre, listaFinal[i].apellido, listaFinal[i].titulo, listaFinal[i].cantidadVendida);
                }
            }

            break;
        case 2:
            for (int i = 0; i < size; i++)
            {
                if (listaFinal[i].genero == "Rock")
                {
                    printf("\n %s %s %s %s ", listaFinal[i].nombre, listaFinal[i].apellido, listaFinal[i].titulo, listaFinal[i].cantidadVendida);
                }
            }
            break;
        case 3:
            for (int i = 0; i < size; i++)
            {
                if (listaFinal[i].genero == "Popular")
                {
                    printf("\n %s %s %s %s ", listaFinal[i].nombre, listaFinal[i].apellido, listaFinal[i].titulo, listaFinal[i].cantidadVendida);
                }
            }
            break;
        default:
            break;
        }
    } while (generoNum > 3 || generoNum < 1);

    return 0;
}