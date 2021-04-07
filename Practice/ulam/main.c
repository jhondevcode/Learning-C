#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int number = 0;
    printf("Ingresa un numero decimal: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("%d ", number);
        while (number != 1) {
            if (number % 2 == 0) {
                number = number / 2;
            } else {
                number = (number * 3) + 1;
            }
            printf("%d ", number);
        }
        printf("\n");
    } else {
        printf("No estan permitidos los numeros negativos.\n");
    }
    return EXIT_SUCCESS;
}
