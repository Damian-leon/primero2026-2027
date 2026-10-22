#include <stdio.h>

int main() {
    const char *nombre_mes ="ninguno";
    int doble_mes;
    int mes;
    int es_valido, es_enero, es_febrero, es_marzo, es_abril, es_mayo, es_junio, es_julio, es_agosto, es_septiembre, es_octubre, es_noviembre, es_diciembre;
    printf("ingrese el mes (1-12): ");
    scanf("%d", &mes);
    es_valido = (mes >= 1 && mes <= 12);
    if (es_valido) {
        if (mes == 1) {
            nombre_mes = "enero";
        } else if (mes == 2) {
            nombre_mes = "febrero";
        } else if (mes == 3) {
            nombre_mes = "marzo";
        } else if (mes == 4) {
            nombre_mes = "abril";
        } else if (mes == 5) {
            nombre_mes = "mayo";
        } else if (mes == 6) {
            nombre_mes = "junio";
        } else if (mes == 7) {
            nombre_mes = "julio";
        } else if (mes == 8) {
            nombre_mes = "agosto";
        } else if (mes == 9) {
            nombre_mes = "septiembre";
        } else if (mes == 10) {
            nombre_mes = "octubre";
        } else if (mes == 11) {
            nombre_mes = "noviembre";
        } else if (mes == 12) {
            nombre_mes = "diciembre";
        }
    printf("\nEl mes es: %s\n", nombre_mes);
    doble_mes = mes * 2;
    printf("El doble del mes es: %d\n", doble_mes);

    } else {
        printf("Error: el mes debe estar entre 1 y 12\n");
    }

    printf("\nOperacion realizada correctamente\n");
}