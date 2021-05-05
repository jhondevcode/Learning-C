#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {
        int counter = 0;
        int addition = 0;
        while (counter <= number) {
            addition += counter;
            counter++;
        }
        printf("%d\n", addition);
    }
    return EXIT_SUCCESS;
}
