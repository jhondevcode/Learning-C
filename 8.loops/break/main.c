#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char answer[8];
    for (;;) {
        printf("Do you want to enter some more(y/n): ");
        scanf("%s", &answer);
        strlwr(answer);
        if (strcmp(answer, "n") == 0) {
            break;
        }
    }
    return EXIT_SUCCESS;
}
