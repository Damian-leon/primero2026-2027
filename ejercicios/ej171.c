/* Pasos: 1) declarar las variables con sus valores, 2) leer valor, anio, combustible y uso, 3) validar los datos, 
4) calcular la edad y evaluar descuentos y recargo, 5) calcular el impuesto, 6) restar el descuento final y mostrar el resultado */
#include <stdio.h>
int main() {
    float TASA_BASE = 0.02;
    float DESC_ANTIGUEDAD = 0.05;
    float DESC_ELECTRICO = 0.50;
    float RECARGO_COMERCIAL = 1.5;
    float DESC_FINAL = 0.05;
    int EDAD_DESC = 10;
    int ANIO_ACTUAL = 2026;
    int ANIO_MIN = 1900;
    float valor = 0, impuesto = 0;
    int anio = 0, edad = 0;
    char combustible = ' ', uso = ' ';
    int datos_validos, es_antiguo, es_electrico, es_comercial;
    printf("Ingrese el valor del vehiculo: ");
    scanf("%f", &valor);
    printf("Ingrese el anio de fabricacion: ");
    scanf("%d", &anio);
    printf("Ingrese el tipo de combustible (G, D, E): ");
    scanf(" %c", &combustible);
    printf("Ingrese el uso Parcticular (P) o Comercial (C): ");
    scanf(" %c", &uso);
    datos_validos = (valor > 0 && anio >= ANIO_MIN && anio <= ANIO_ACTUAL
                     && (combustible == 'G' || combustible == 'D' || combustible == 'E')
                     && (uso == 'P' || uso == 'C'));
    if (datos_validos) {
        edad = ANIO_ACTUAL - anio;
        es_antiguo = (edad >= EDAD_DESC);
        es_electrico = (combustible == 'E');
        es_comercial = (uso == 'C');
        impuesto = valor * TASA_BASE;
        if (es_antiguo) {
            impuesto = impuesto * (1 - DESC_ANTIGUEDAD);
        }
        if (es_electrico) {
            impuesto = impuesto * (1 - DESC_ELECTRICO);
        }
        if (es_comercial) {
            impuesto = impuesto * RECARGO_COMERCIAL;
        }
        impuesto = impuesto * (1 - DESC_FINAL);
        printf("Edad del vehiculo: %d anios\n", edad);
        printf("El impuesto vehicular anual es: %.2f\n", impuesto);
    } else {
        printf("Error: datos invalidos. Revise valor, anio, combustible y uso.\n");
    }
    return 0;
}