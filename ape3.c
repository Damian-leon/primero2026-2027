#include <stdio.h>
int main() {
    int convertir_mb_gb = 1024;
    int cantidad_doc = 0;
    float tamano_doc = 0;
    int cantidad_img = 0;
    float tamano_img = 0;
    int cantidad_vid = 0;
    float tamano_vid = 0;
    int cantidad_prog = 0;
    float tamano_prog = 0;
    int disco_gb = 0;
    float documentos = 0;
    float imagenes = 0;
    float videos = 0;
    float programas = 0;
    float total_mb = 0;
    float total_gb = 0;
    float porcentaje = 0;

    printf("Ingrese la cantidad de documentos: ");
    scanf("%d", &cantidad_doc);
    printf("Ingrese el tamaño de los documentos (en MB): ");
    scanf("%f", &tamano_doc);
    printf("Ingrese la cantidad de imágenes: ");
    scanf("%d", &cantidad_img);
    printf("Ingrese el tamaño de las imágenes (en MB): ");
    scanf("%f", &tamano_img);
    printf("Ingrese la cantidad de videos: ");
    scanf("%d", &cantidad_vid);
    printf("Ingrese el tamaño de los videos (en MB): ");
    scanf("%f", &tamano_vid);
    printf("Ingrese la cantidad de programas: ");
    scanf("%d", &cantidad_prog);
    printf("Ingrese el tamaño de los programas (en MB): ");
    scanf("%f", &tamano_prog);
    printf("Ingrese el tamaño del disco (en GB): ");
    scanf("%d", &disco_gb);

    documentos = cantidad_doc * tamano_doc;
    imagenes = cantidad_img * tamano_img;
    videos = cantidad_vid * tamano_vid;
    programas = cantidad_prog * tamano_prog;
    total_mb = documentos + imagenes + videos + programas;
    total_gb = total_mb / 1024;
    porcentaje = (total_gb / disco_gb) * 100;

    printf("El porcentaje de espacio ocupado en el disco es: %.2f%%\n", porcentaje);
    return 0;
}