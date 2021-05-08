#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Array[0] in: %p\n", &numbers[0]);
    printf("Array start in: %p\n\n", *numbers);

    int *start = &numbers[0];
    for (int i = 0; i < 10; i++) {
        printf("%d in -> %p\n", *start, start);
        start +=1;
    }
    return EXIT_SUCCESS;
}
