#include <stdio.h>
int main () {
    double inverso = 0;
    const char *dia_nombre ="ninguno";
    int dia_numero;
    int es_uno, es_dos, es_tres, es_cuatro, es_cinco, es_seis, es_siete;

    printf("Ingrese un numero del 1 al 7: ");
    scanf("%d", &dia_numero);

    es_uno = (dia_numero == 1);
    es_dos = (dia_numero == 2);
    es_tres = (dia_numero == 3);
    es_cuatro = (dia_numero == 4);
    es_cinco = (dia_numero == 5);
    es_seis = (dia_numero == 6);
    es_siete = (dia_numero == 7);

    if (es_uno) {
        dia_nombre = "Lunes";
    } else if (es_dos) {
        dia_nombre = "Martes";
    } else if (es_tres) {
        dia_nombre = "Miercoles";
    } else if (es_cuatro) {
        dia_nombre = "Jueves";
    } else if (es_cinco) {
        dia_nombre = "Viernes";
    } else if (es_seis) {
        dia_nombre = "Sabado";
    } else if (es_siete) {
        dia_nombre = "Domingo";
    }
   else {
        dia_nombre = "invalido";
        printf("El numero ingresado no es valido.\n");
    }

    printf("El dia de la semana es: %s\n", dia_nombre);
    
    if (dia_numero != 0) {
        inverso = 1.0 / dia_numero;
        printf("El inverso multiplicativo del numero %d ingresado es: %.4f\n", dia_numero, inverso);
    } else {
        printf("No se puede calcular el inverso de cero.\n");
    }
        printf("valores de las variables:\n");
        printf("dia_numero: %d\n", dia_numero);
        printf("es_uno: %d\n", es_uno);
        printf("es_dos: %d\n", es_dos);
        printf("es_tres: %d\n", es_tres);
        printf("es_cuatro: %d\n", es_cuatro);
        printf("es_cinco: %d\n", es_cinco);
        printf("es_seis: %d\n", es_seis);
        printf("es_siete: %d\n", es_siete);
        printf("es_valido: %d\n", (dia_numero >= 1 && dia_numero <= 7));
        printf("dia_nombre: %s\n", dia_nombre);
        printf("inverso: %.4f\n", inverso);
      

    return 0;
}