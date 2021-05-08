#include <stdio.h>
#include <stdlib.h>

/*
 * Matrix of characters
 */
int main(int argc, char const *argv[]) {
    char keys[5][10] = {
        {'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a', 'n'},
        {'a', 'p', 'p', 'l', 'e', ' ', 'v', 'e', 'r', 'y'},
        {'r', 'e', 'd', '.', ' ', 'M', 'y', ' ', 'C', 'V'},
        {'i', 's', ' ', 'f', 'i', 'l', 'l', 'e', 'd', '-'},
        {'b', 'y', ' ', 'a', ' ', 's', 'e', 'r', 'v', 'e'}
    };

    // looping matrix of characters
    printf("Array characters:\n");
    for (unsigned int row = 0; row < 5; row++) {
        for (unsigned int column = 0; column < 10; column++) {
            printf("%c", keys[row][column]);
        }
        printf("\n");
    }

    // Displaying character memory locations
    printf("\nMemory locations: \n");
    for (unsigned int row = 0; row < 5; row++) {
        printf("Row %d -> [", row);
        for (unsigned int column = 0; column < 10; column++) {
            if (column == 9) {
                printf("%p", &keys[row][column]);
            } else {
                printf("%p, ", &keys[row][column]);
            }
        }
        printf("]\n");
    }
    printf("\nThanks\n");
    return EXIT_SUCCESS;
}
