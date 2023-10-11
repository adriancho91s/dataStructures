#include <stdio.h>

int main() {
    FILE* archivo_lectura = fopen("ventas01.dat", "rb");
    FILE* archivo_escritura = fopen("MaestroOrganizado.txt", "w");

    if (archivo_lectura == NULL || archivo_escritura == NULL) {
        printf("Error al abrir los archivos.\n");
        return 1;
    }

    short int id = 0;
    char zona[34];
    char pais[30];
    char snaks[10];
    char status[8];
    char prioridad[10];

    fread(&id, 2, 1, archivo_lectura);
    fread(zona, 34, 1, archivo_lectura);
    fread(pais, 30, 1, archivo_lectura);
    fread(snaks, 10, 1, archivo_lectura);
    
    fseek(archivo_lectura, 24, SEEK_CUR);
    fread(status, 8, 1, archivo_lectura);
    fread(prioridad, 10, 1, archivo_lectura);


    printf("ID: %i\n", id);
    printf("Zone: %s\n", zona);
    printf("Country: %s\n", pais);
    printf("Snaks: %s\n", snaks);
    printf("Status: %s\n", status);
    printf("Priority: %s\n", prioridad);
    

    fclose(archivo_lectura);
    fclose(archivo_escritura);
    return 0;
}


// #include <stdio.h>

// int main() {
//     FILE* archivo_lectura = fopen("ventas01.dat", "rb");
//     FILE* archivo_escritura = fopen("MaestroOrganizado.txt", "w");

//     if (archivo_lectura == NULL || archivo_escritura == NULL) {
//         printf("Error al abrir los archivos.\n");
//         return 1;
//     }

//     char letter = 'a';
//     short int id = 0;
//     // char ape1[20] = "s";
//     // char ape2[20] = "m";
//     // double debito = 0;
//     // double credito = 0;
//     // double saldo = 0;
//     // short int dia = 0;
//     // short int mes = 0;
//     // int year = 0;

//     // for (int i = 0; i < 5; i = i + 1) {
//         fread(letter, 1, 1, archivo_lectura);
//         fread(&id, 4, 1, archivo_lectura);
//         printf("%c", letter);
//         printf("%i", id);
//         // fprintf(archivo_escritura, "%i", id);

//         // if (i == 4)
//         //     fseek(archivo_lectura, 1, SEEK_CUR);

//         // fread(nombre, 20, 1, archivo_lectura);
//         // fprintf(archivo_escritura, "\t%s", nombre);

//         // fread(ape1, 20, 1, archivo_lectura);
//         // fprintf(archivo_escritura, "\t%s", ape1);

//         // fread(ape2, 20, 1, archivo_lectura);
//         // fprintf(archivo_escritura, "\t%s", ape2);

//         // fread(&debito, 8, 1, archivo_lectura);
//         // fprintf(archivo_escritura, "\t%.0f", debito);

//         // fread(&credito, 8, 1, archivo_lectura);
//         // fprintf(archivo_escritura, "\t%.0f", credito);

//         // fread(&saldo, 8, 1, archivo_lectura);
//         // fprintf(archivo_escritura, "\t%.0f", saldo);

//         // fread(&dia, 2, 1, archivo_lectura);
//         // fprintf(archivo_escritura, "\t%i", dia);
//         // if (i == 1)
//         //     fseek(archivo_lectura, 1, SEEK_CUR);

//         // fread(&mes, 2, 1, archivo_lectura);
//         // fprintf(archivo_escritura, "\t%i", mes);

//         // fread(&year, 4, 1, archivo_lectura);
//         // fprintf(archivo_escritura, "\t%i", year);

//         // fprintf(archivo_escritura, "\n\n");
//     // }

//     fclose(archivo_lectura);
//     fclose(archivo_escritura);

//     return 0;
// }