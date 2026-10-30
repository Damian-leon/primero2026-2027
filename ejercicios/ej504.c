/* Pasos: 1) definir constantes, 2) leer radio y angulo, 3) validar que sean mayores que cero,
   4) calcular y mostrar el area del sector, 5) dividir el area entre DIVISOR,
   6) mostrar error si no son validos */
#include <stdio.h>
#define PI 3.14159
#define FACTOR 360
#define DIVISOR 2

int main () {
    float area_sector = 0;
    float area_dividida = 0;
    float radio = 0;
    float angulo = 0;
    int datos_validos;
    printf("Ingrese el radio del sector circular: ");
    scanf("%f", &radio);
    printf("Ingrese el angulo en grados: ");
    scanf("%f", &angulo);
    datos_validos = (radio > 0 && angulo > 0);
    if (datos_validos) {
    area_sector = ((PI * radio * radio * angulo) / FACTOR);
    printf("El area del sector es: %.4f\n", area_sector);
    area_dividida = area_sector / DIVISOR;
    printf("El area dividida entre %d es: %.4f\n", DIVISOR, area_dividida);
    }
    else {
        printf("Error: el radio y el angulo deben ser mayores que cero.\n");
    }
    printf("Fin del calculo.\n");
    return 0;
}