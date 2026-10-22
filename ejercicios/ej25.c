#include <stdio.h>
int main() {
    float compra;
    float descuento;
    float monto_descuento;
    float total;
    int es_positivo;
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);
    printf("Ingrese el porcentaje de descuento: ");
    scanf("%f", &descuento);
    monto_descuento = compra * descuento / 100;
    total = compra - monto_descuento;
    es_positivo = (total >= 0);

    printf("\n");
    printf("\nDESGLOSE DE LA COMPRA\n");
    printf("Monto de la compra: %.2f\n", compra);
    printf("Descuento aplicado: %.2f%%\n", descuento);
    printf("Monto del descuento: %.2f\n", monto_descuento);
    printf("Total a pagar: %.2f\n", total);
    printf("Es total es positivo: %s\n", es_positivo ? "Sí" : "No");

    return 0;
}
