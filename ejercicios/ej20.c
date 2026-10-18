#include <stdio.h>
int main() {

    int n = 60;
    float dato2 = 0.1;
    
    int z = (int)dato2;
    int suma_enteros = (n + z);
    
    printf("los valores son n = %d, z = %d, dato2 = %.1f\n", n, z, dato2);
    printf("el resultado es %d\n", suma_enteros != n);

    return 0;
}