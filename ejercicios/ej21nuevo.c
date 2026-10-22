#include <stdio.h>
#include <math.h>

int main() {
   int a= 0;
   printf("Ingrese un valor entero:");
   scanf("%d", &a);

   int es_positivo = (a > 0);
   int es_negativo = (a < 0);
   int es_cero = (a == 0);
   const char *tipo_operacion;

   if (es_positivo) {
    tipo_operacion = "entrada de pan";
    printf("\nEl valor ingresado es positivo.\n");

    } else if (es_negativo) {
    tipo_operacion = "salida de pan";
    printf("\nEl valor ingresado es negativo.\n");

   } else {
    tipo_operacion = "sin movimiento";
    printf("\nEl valor ingresado es cero.\n");
   }
   float coseno = cos(a);
printf("El coseno de %d es: %.4f\n", a, coseno);
printf("tipo de operacion realizada: %s\n", tipo_operacion);


return 0;
}