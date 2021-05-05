#include <stdio.h>
#include <stdlib.h>

/*
 * Using Do - While loop.
 *
 * first: execution
 * second: evaluation
 */
int main(int argc, char const *argv[]) {
    int counter = 0;
    do {
        printf("%d\n", counter);
        counter++;
    } while (counter <= 10);
    return EXIT_SUCCESS;
}
