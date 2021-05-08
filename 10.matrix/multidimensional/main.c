#include <stdio.h>
#include <stdlib.h>

/*
 * an array of 3 dimensions
 */
int main(int argc, char const *argv[]) {
    int three[2][2][2] = { // third dimension
        { // second dimension
            {1, 2}, // first dimension
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
    for (unsigned int x = 0; x < 2; x++) {
        for (unsigned int y = 0; y < 2; y++) {
            for (unsigned int z = 0; z < 2; z++) {
                printf("%d\n", three[x][y][z]);
            }
        }
    }
    return EXIT_SUCCESS;
}
