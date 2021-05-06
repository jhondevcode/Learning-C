#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int option = 0;
    printf("=====> Temperature comverter <=====\n");
    printf("1) Celsius to Fahrenheit\n");
    printf("2) Fahrenheit to Celsius\n");
    printf(">>> ");     // the propt
    scanf("%d", &option);
    switch (option) {
        case 1:
            printf("Celsius: ");
            double celsius = 0.0f;
            scanf("%lf", &celsius);
            printf("%.2lf\n", (celsius * 9 / 5) + 32);
            break;
        case 2:
            printf("Fahrenheit: ");
            double fahrenheit = 0.0f;
            scanf("%lf", &fahrenheit);
            printf("%.2lf\n", (5 * (fahrenheit - 32)) / 9.0);
            break;
        default:
        printf("Option %d is not available", option);
            break;
    }
    return EXIT_SUCCESS;
}
