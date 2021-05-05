#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    float temperatures[5] = {};
    printf("=====>Average temperature calculator<=====\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter temperature %d: ", i + 1);
        scanf("%f", &temperatures[i]);
        fflush(stdin);
    }
    float partial = 0.0f;
    for (int i = 0; i < 5; i++) {
        partial += temperatures[i];
    }
    float average_temperature = partial / 5.0;
    printf("The average temperature is: %.2f\n", average_temperature);
    return EXIT_SUCCESS;
}
