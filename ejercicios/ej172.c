#include <stdio.h>
int main () {
    float PESO_COMIDA = 0.5;
    float PESO_SERVICIO = 0.3;
    float PESO_AMBIENTE = 0.2;
    float MAX_PUNTUACION = 5.0;
    // Se inicializan las variables
    float calificacion;
    float descuento5;
    float cali_final;
    int comida = 0;
    int servicio = 0;
    int ambiente = 0;
    int precio_promedio = 0;
    char * categoria = "na";
    // Se piden y se leen las tres puntuaciones
    printf("Ingrese el puntaje de la comida (0 - 5): ");
    scanf("%d", &comida);
    printf("Ingrese el puntaje del servicio (0 - 5): ");
    scanf("%d", &servicio);
    printf("Ingrese el puntaje del ambiente (0 - 5): ");
    scanf("%d", &ambiente);
    printf("Ingrese el precio promedio: ");
    scanf("%d", &precio_promedio);
    // Se validan que las puntuaciones estén entre 0 y MAX_PUNTUACION y que el precio no sea negativo
    int datos_validos = (comida >= 0 && comida <= MAX_PUNTUACION && servicio >= 0 && servicio <= MAX_PUNTUACION && ambiente >= 0 && ambiente <= MAX_PUNTUACION && precio_promedio >= 0);
    if (datos_validos){
        // Se calcula la calificación como promedio ponderado
        calificacion = (comida * PESO_COMIDA + servicio * PESO_SERVICIO + ambiente * PESO_AMBIENTE);
        printf("\nLa calificacion es de: %.1f \n", calificacion);
        /* Descuento del 5% y calificacion final */
        descuento5 = calificacion * 0.05;
        cali_final = calificacion - descuento5;
    // Se clasifica la calificación en una categoría
    if (calificacion >= 4.5){
        categoria = "Excelente";
    } else if (calificacion >= 3.5 && calificacion < 4.5){
        categoria = "Buena";
    } else if (calificacion >= 2.5 && calificacion < 3.5){
        categoria = "Suficiente";
    } else {
        categoria = "Deficiente";
    }
        printf("La categoria del restaurante es %s. \n", categoria);
        printf("La calificacion final con 5%% de descuento  es de %.3f \n", cali_final);
    } else {
        printf("Error: los datos ingresados son invalidos\n");
    }
    return 0;
}