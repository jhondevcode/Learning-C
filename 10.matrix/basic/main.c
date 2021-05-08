#include <stdio.h>
#include <stdlib.h>

/*
 * Creating a basic matrix in C.
 *
 * type name[rows][columns] = {{}, {}, {}, {}};
 * example:
 *
 *                            column
 * int mtx01[3][10] = {         |
 * row ->    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 *           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 *           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 * }
 */
int main(int argc, char const *argv[]) {
    unsigned int odd[3][3] = {{1, 3, 5}, {7, 9, 11}, {13, 15, 17}};

    // Traversing the matrix with a for loop:
    printf("Matrix elements: \n");
    for (unsigned int row = 0; row < 3; row++) {
        printf("Row %u -> [", row);
        for (unsigned int column = 0; column < 3; column++) {
            if (column == 2) {
                printf("%u", odd[row][column]);
            } else {
                printf("%u, ", odd[row][column]);
            }
        }
        printf("]\n");
    }

    // Showing the memory positions of the elements:
    printf("\nMemory locations of matrix elements: \n");
    for (unsigned int row = 0; row < 3; row++) {
        printf("Row %u ->[", row);
        for (unsigned int column = 0; column < 3; column++) {
            if (column == 2) {
                printf("%p", &odd[row][column]);
            } else {
                printf("%p, ", &odd[row][column]);
            }
        }
        printf("]\n");
    }
    return EXIT_SUCCESS;
}
