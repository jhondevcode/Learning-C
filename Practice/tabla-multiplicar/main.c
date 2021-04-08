#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    unsigned int number;
    printf("Ingrese un numero: ");
    scanf("%d", &number);
    for (uint i = 0; i <= 12; i++) {
        printf("%d x %d = %d\n", number, i, i*number);
    }
    return EXIT_SUCCESS;
}
