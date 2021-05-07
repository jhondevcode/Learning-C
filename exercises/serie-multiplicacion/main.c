#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    unsigned int number = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &number);
    printf("%d\n", number);
    if (number > 0) {
        float resultado = 1;
        for (uint divisor = 2; divisor <= number; divisor++) {
            resultado *= (1 / (float)(divisor - 1)) / (1 / (float)divisor);
        }
        printf("Resultado: %f\n", resultado);
    } else {
        puts("No se puede realizar la operacion.");
    }
    return EXIT_SUCCESS;
}
