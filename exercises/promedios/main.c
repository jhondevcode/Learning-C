#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int notas[5];
    puts("Ingrese las notas del estudiante");
    for (uint i = 0; i < 5; i++) {
        printf("Ingrese la nota %d: ", (i + 1));
        scanf("%d", &notas[i]);
    }
    unsigned int parcial = 0;
    for (uint j = 0; j < 5; j++) {
        parcial += notas[j];
    }
    double promedio = parcial / 5;
    printf("El promedio del estudiante es: %f\n", promedio);
    return EXIT_SUCCESS;
}
