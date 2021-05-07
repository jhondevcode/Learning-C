#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    unsigned int number = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &number);
    if (number > 0) {
        double suma_serie = 0;
        for (uint i = 1; i <= number; i++) {
            suma_serie += 1 / (float)i;
        }
        // printf("La suma de la serie es: %.2f\n", suma_serie);
        printf("La suma de la serie es: %f\n", suma_serie);
    } else {
        puts("No se puede realizar la operacion");
    }
    return EXIT_SUCCESS;
}
