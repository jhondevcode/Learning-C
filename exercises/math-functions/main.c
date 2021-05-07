#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// gcc -pthread -pipe -Wall -g -fstack-clash-protection -Ofast -lm main.c -o main.out

int main(int argc, char const *argv[]) {
    unsigned int n = 0;
    printf("Numero de valores de y: ");
    scanf("%d", &n);
    if (n > 0) {
        long values[n];
        for (uint counter = 0; counter < n; counter++) {
            printf("Ingresa el valor %d: ", counter + 1);
            scanf("%ld", &values[counter]);
        }
        for (uint evaluation = 0; evaluation < n; evaluation++) {
            long val = values[evaluation];
            if (val > 0 && val <= 15) {
                printf("Resultado para %ld = %f\n", val, function01((double)val));
            } else if (val > 15 && val <= 30) {
                printf("Resultado para %ld = %f\n", val, function02((double)val));
            } else if (val > 30 && val <= 60) {
                printf("Resultado para %ld = %f\n", val, function03((double)val));
            } else {
                printf("Resultado para %ld = %d\n", val, 0);
            }
        }
    } else {
        puts("No se puede realizar la operacion");
    }
    return EXIT_SUCCESS;
}
