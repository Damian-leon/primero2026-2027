#include <stdio.h>

int main() {
    int x = 0;
    int es_positivo, es_par, es_par_positivo;
    float mitad = 0;

    printf("Bienvenido al gimnasio PowerFit!\n");
    printf("Ingrese un numero entero: ");
    scanf("%d", &x);

    es_positivo = (x > 0);
    es_par = (x % 2 == 0);
    es_par_positivo = (es_positivo && es_par);

    if (es_par_positivo) {
        printf("El numero %d es par y positivo.\n", x);
    } else {
        printf("El numero %d NO es par y positivo.\n", x);
    }

    mitad = x / 2.0;
    printf("La mitad de %d es: %.2f\n", x, mitad);
    printf("Fin del calculo.\n");
    return 0;
}