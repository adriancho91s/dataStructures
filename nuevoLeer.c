#include <stdio.h>

int main() {
    FILE* archivo_lectura = fopen("ventas01.dat", "rb");
    FILE* archivo_escritura = fopen("MaestroOrganizado.txt", "w");

    if (archivo_lectura == NULL || archivo_escritura == NULL) {
        printf("Error al abrir los archivos.\n");
        return 1;
    }

    short int id = 0;
    char zona[30];
    char pais[30];

    fread(&id, 2, 1, archivo_lectura);
    fread(zona, 30, 1, archivo_lectura);
    fread(pais, 30, 1, archivo_lectura);

    printf("%i", id);
    printf("%s", zona);
    printf("%s", pais);

    fclose(archivo_lectura);
    fclose(archivo_escritura);
    return 0;
}