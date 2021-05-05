#include <stdio.h>
#include <stdlib.h>

/*
 *  C does not support the creation of dynamic arrangements at runtime, to
 * achieve this there are other methods which are given through pointers.
 * type name[size] = {values...}
 */
int main(int argc, char const *argv[]) {
    int numbers[5] = {12, 18, 6, 7, 3};
    for (short i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }
    return EXIT_SUCCESS;
}
