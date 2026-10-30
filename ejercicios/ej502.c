#include <stdio.h>
#define tasa_cambio 0.27
int main (){
    double soles = 0, dolares = 0, dolares_redondeado = 0;
    int dolares_positivo;
    printf("Ingrese el monto de soles: ");
    scanf("%lf", &soles);
    dolares = soles * tasa_cambio;
    dolares_positivo = (dolares > 0);
    if (dolares_positivo) {
        dolares_redondeado = (int)(dolares * 100 + 0.5) / 100.0;
        printf("%.2f soles equivalen a %.2f dolares\n", soles, dolares_redondeado);
        printf("Valor exacto antes de redondear: %.6f dolares\n", dolares);
    
        printf("\n--- CONCLUSIONES ---\n");
        printf("Monto ingresado: %.2f soles\n", soles);
        printf("Tasa de cambio usada: %.2f\n", tasa_cambio);
        printf("Conversion realizada: %.2f dolares\n", dolares_redondeado);
    }
    else {
         printf("Error: el monto debe ser mayor que cero.\n");
         printf("No se realizo la conversion porque el monto no es positivo.\n");
    }
    return 0;
}