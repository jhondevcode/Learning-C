#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int number = 0;
    int suma_pares = 0;
    int suma_impares = 0;
    unsigned int impares = 0;
    for (int i = 0; i < 10; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &number);
        if (number % 2 == 0) {
            suma_pares += number;
        } else {
            suma_impares += number;
            impares++;
        }
    }
    printf("La suma de los pares es: %d\n", suma_pares);
    printf("El promedio de los impares es: %f\n", (float)(suma_impares / impares));
    return EXIT_SUCCESS;
}
