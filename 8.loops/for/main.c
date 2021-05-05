#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int number = 0, addition = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {
        for (int i = 0; i <= number; i++) {
            addition += i;
        }
        printf("%d\n", addition);
    }
    return EXIT_SUCCESS;
}
