#include<stdio.h>

int main () {
    FILE* escribir = fopen("prueba.txt", "wb");
    int prueba = 7642;
    fwrite(&prueba, 4, 1, escribir);

    fclose(escribir);

    return 0;

}