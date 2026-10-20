#include <stdio.h>
int main() {
    int m = 0;
    float n = 0.00;
    char num2 = ' ';
    printf("Ingrese un numero: ");
    scanf("%d", &m);
    printf("Ingrese un numero decimal: ");
    scanf("%f", &n);
    printf("Ingrese un caracter: ");
    scanf(" %c", &num2);
    if (m > 0 && n > 0 && num2 != ' ') {
        printf("\n");
        printf("Todos los valores ingresados son validos.\n");

    } else {
        printf("Al menos un valor no es valido.\n");
    }
    printf("\nTipos de datos:\n");
    printf("%d es de tipo Entero (int)\n", m);
    printf("%.2f es de tipo Real (float)\n", n);
    printf("%c es de tipo Caracter (char)\n", num2);


    return 0;
}