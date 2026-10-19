#include <stdio.h>
#define APROBADO 7.0  
int main() {
    char nombre_estudiante [50];
    float nota1 = 0.0;
    float nota2 = 0.0;
    float nota3 = 0.0;
    float promedio = 0.0;
    printf("Ingrese el nombre del estudiante: ");
    scanf(" %49[^\n]", nombre_estudiante);
    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);
    promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio >= APROBADO) {
        printf("El estudiante %s ha APROBADO con un promedio de %.2f.\n", nombre_estudiante, promedio);
    } else {
        printf("El estudiante %s ha REPROBADO con un promedio de %.2f.\n", nombre_estudiante, promedio);
    }
    return 0;
}