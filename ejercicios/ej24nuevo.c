#include <stdio.h>
#define MAX 100
#define MIN 10

int main() {
    float bono = 0.0;
    int y = 0;
    printf("Ingrese un valor entero: ");
    scanf("%d", &y);
    int en_rango = (y >= MIN && y <= MAX);
    if (en_rango) {
        printf("El valor ingresado %d esta dentro del rango permitido.\n", y);
    } else {
        printf("El valor ingresado %d esta fuera del rango permitido.\n", y);
    }
    if (y >= 0) {
        bono = y * 1.5;
        printf("El bono de %d es: %.2f\n", y, bono);
    } else {
        printf("Error: No se puede calcular el bono porque el valor es negativo.\n");
    }
    return 0;
}