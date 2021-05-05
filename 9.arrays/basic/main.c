#include <stdio.h>
#include <stdlib.h>

/*
 * type name[size] = {values...}
 */
int main(int argc, char const *argv[]) {
    int numbers[5] = {12, 18, 6, 7, 3};
    for (short i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }
    return EXIT_SUCCESS;
}
