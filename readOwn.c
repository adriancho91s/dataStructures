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
    FILE *fp=fopen("nomina","rb");
    if(fp==NULL){
        printf("Error al abrir el archivo\n");
        return 1;
    }
    while(fread(&cliente,sizeof(cliente),1,fp)==1){
        printf("ID: %u\n", cliente.id);
        printf("Nombre: %s\n", cliente.nom);
        printf("Primer apellido: %s\n", cliente.pApellido);
        printf("Segundo apellido: %s\n", cliente.sApellido);
        printf("Sueldo: %.2f\n", cliente.sueldo);
        printf("Status: %u\n", cliente.status);
        printf("\n");
    }
    fclose(fp);
    return 0;
}