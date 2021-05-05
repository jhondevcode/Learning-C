#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    float time = 0.0f;
    printf("Enter hour: ");
    scanf("%f", &time);
    if (time >= 0.0f && time < 12) {
        printf("Good morning\n");
    } else if (time >= 12 && time < 19) {
        printf("Good afternoom\n");
    } else {
        printf("Good evening\n");
    }
    return EXIT_SUCCESS;
}
