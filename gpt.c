#include <stdio.h>
#include <string.h>

// Estructura de datos hipotética para interpretar el archivo
typedef struct {
    short int id;
    char zona[34];
    char pais[30];
    char tipoProducto[20];
    char canalVenta[20];
    char prioridad[20];
    char fechaPedido[11];
    int idPedido;
    char fechaEnvio[11];
    int unidades;
    float precioUnitario;
    float costeUnitario;
    float importeVentaTotal;
    float importeCosteTotal;
} Registro;

int main() {
    FILE* archivo_lectura = fopen("ventas01.dat", "rb");

    if (archivo_lectura == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    // Crear un buffer para leer 720 bytes
    char buffer[720];

    if (fread(buffer, sizeof(char), 720, archivo_lectura) != 720) {
        printf("No se pudo leer el archivo completo.\n");
        fclose(archivo_lectura);
        return 1;
    }

    // Interpretar los bytes como una secuencia de registros hipotéticos
    Registro* registros = (Registro*)buffer;

    int numRegistros = 720 / sizeof(Registro);

    for (int i = 0; i < numRegistros; i++) {
        printf("Registro %d:\n", i + 1);
        printf("ID: %i\n", registros[i].id);
        printf("Zona: %s\n", registros[i].zona);
        printf("País: %s\n", registros[i].pais);
        printf("Tipo de Producto: %s\n", registros[i].tipoProducto);
        printf("Canal de Venta: %s\n", registros[i].canalVenta);
        printf("Prioridad: %s\n", registros[i].prioridad);
        printf("Fecha de Pedido: %s\n", registros[i].fechaPedido);
        printf("ID de Pedido: %i\n", registros[i].idPedido);
        printf("Fecha de Envío: %s\n", registros[i].fechaEnvio);
        printf("Unidades: %d\n", registros[i].unidades);
        printf("Precio Unitario: %.2f\n", registros[i].precioUnitario);
        printf("Coste Unitario: %.2f\n", registros[i].costeUnitario);
        printf("Importe Venta Total: %.2f\n", registros[i].importeVentaTotal);
        printf("Importe Coste Total: %.2f\n", registros[i].importeCosteTotal);
        printf("\n");
    }

    fclose(archivo_lectura);
    return 0;
}
