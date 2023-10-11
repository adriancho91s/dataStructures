#include <stdio.h>

 struct registro{
        unsigned int id;
        char nom[30];
        char pApellido[20];
        char sApellido[20];
        float sueldo;
        unsigned char status;
    };
int main(){
    struct registro cliente;
    FILE *fp=fopen("nomina","wb");
    printf("Entre el id cliente   : ");scanf("%i",&cliente.id);fflush(stdin);
    printf("Entre el nombre       : ");scanf("%s",cliente.nom);fflush(stdin);
    printf("Entre primer apellido : ");scanf("%s",cliente.pApellido);fflush(stdin);
    printf("Entre segundo apellido: ");scanf("%s",cliente.sApellido);fflush(stdin);
    printf("Entre el sueldo       : ");scanf("%f",&cliente.sueldo);fflush(stdin);
    cliente.status=1;
    fwrite(&cliente,sizeof(cliente),1,fp);
    fclose(fp);
    return 0;
}
