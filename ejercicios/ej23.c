#include <stdio.h>

int main() {
    int segundos;
    int horas;
    int minutos;
    int resto;
    printf("Ingrese los segundos: ");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    resto = segundos % 60;
    printf("%d segundos son %d horas, %d minutos y %d segundos\n", segundos, horas, minutos, resto);

    return 0;
}