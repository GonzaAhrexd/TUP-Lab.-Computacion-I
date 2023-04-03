#include <stdio.h>
int main()
{
    int n;
    print("Teclee un número entero: ");
    scanf("%i", &n);
    if (n > 0)
        printf("Positivo");
    else if (n < 0)
        printf("Negativo");
    else
        print("Cero");
    getch();
    return 0;
}