#include <stdio.h>
#include <string.h>

struct amigo
{
    int id;
    char nombre[20];
    char dir[20];
    char mail[20];
};


int main(){
    
    struct amigo record = {0};
    record.id = 40;
    strcpy(record.nombre, "Gonzalo");
    strcpy(record.dir, "En su casa");
    
    printf("\nEl nombre del amigo es: %s ", record.nombre);
    printf("\nLa direccion del amigo es: %s ", record.dir);
    printf("\nIngrese el correo electronico del amigo:  ");
    scanf("%s", record.mail);
    printf("\nEl correo del amigo es %s ", record.mail);
    return 0;
}