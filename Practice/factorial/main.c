#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int number = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &number);
    if (number >= 0) {
        if (number == 0) {
            printf("El factorial de %d es %d.\n", number, 1);
        } else {
            if (number <= 25) {
                unsigned long long factorial = 1;
                for (uint i = 0; i < number; i++) {
                    factorial *= i + 1;
                }
                printf("El factorial de %d es %lld\n", number, factorial);
            } else {
                printf("Solo puedo almacenar numeros de 8 bytes\nEl numero que quieres calcular sobrepasa esa capacidad.\n");
            }
        }
    } else {
        printf("No existe factorial de numeros negativos\n");
    }
    return EXIT_SUCCESS;
}
