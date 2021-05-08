#include <stdio.h>
#include <stdlib.h>

/*
 * This C program is used to calculate the size of an array of numbers
 */
int main(int argc, char const *argv[]) {
    int integers[] = {5, 6, 8, 3, 9, 1, 6, 4, 8, 12, 65, 28};
    unsigned int numbers_size = sizeof(integers) / sizeof(integers[0]);
    printf("The array \"integers\" has a size of %zu\n", numbers_size);
    for (unsigned int i = 0; i < numbers_size; i++) {
        printf("%d -> %d\n", i, integers[i]);
    }

    double decimals[] = {8.566, 3.786, 61.655, 3.1416};
    unsigned int decimals_size = sizeof(decimals) / sizeof(decimals[0]);
    printf("The array \"decimals\" has a size of %zu\n", decimals_size);
    for (unsigned int j = 0; j < decimals_size; j++) {
        printf("%d -> %lf\n", j, decimals[j]);
    }
    return EXIT_SUCCESS;
}
