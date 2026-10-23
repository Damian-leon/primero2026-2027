#include <stdio.h>
int main() {
   float total = 0;
   float parte = 0;
   float porcentaje = 0;
   float cubo = 0;
    printf("Ingrese la cantidad total: ");
    scanf("%f", &total);
    printf("Ingrese la parte: ");
    scanf("%f", &parte);
    int total_valido = (total > 0);
    if (total_valido) {
        porcentaje = (parte / total) * 100;
        printf("total valido. Calculando porcentaje...\n");
        printf("El porcentaje es: %.2f%%\n", porcentaje);
        cubo = porcentaje * porcentaje * porcentaje;
        printf("El porcentaje elevado al cubo es: %.2f\n", cubo);

    } else {
        printf("Error: La cantidad total debe ser mayor que cero. No se calcula el porcentaje.\n");
    }
    printf("Fin del calculo.\n");
    
return 0;
}    