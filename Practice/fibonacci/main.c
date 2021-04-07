#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    unsigned long long first = 0, second = 1, next = 0;
    printf("\t %lld \t %lldd", first, second);
    for (uint i = 3; i <= 50; i++) {
        next = first + second;
        first = second;
        second = next;
        printf("\t %lld", next);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
