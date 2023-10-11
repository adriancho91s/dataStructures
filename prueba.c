#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* archivo_lectura = fopen("prueba.txt", "rb");

    if (archivo_lectura == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    int c;
    for (int i = 0; i < 5; i = i + 1) {
        c = fgetc(archivo_lectura);
        printf("%i", c);
    }

    fclose(archivo_lectura);
    return 0;
}