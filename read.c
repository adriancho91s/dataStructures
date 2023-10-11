#include <stdio.h>

int main(){
   
    FILE* archivo = fopen("nomina","rb");
    int dato = 0;
    float sueldo = 0;
    char nom [30];
    char fape [20];
    char sape [20];
    unsigned char sta = 'a';
   
    fread(&dato,4,1,archivo);
    printf ("%d",dato);
   
    fread(&nom,30,1,archivo);
    printf ("\t%s",nom);
   
    fread(&fape,20,1,archivo);
    printf ("\t%s",fape);
   
    fread(&sape,20,1,archivo);
    printf ("\t%s",sape);
   
    fread(&sueldo,4,1,archivo);
    printf ("\t%f",sueldo);
   
    fread(&sta,1,1,archivo);
    printf ("\t%d",sta);
   
    fclose(archivo);
    return 0;
}
