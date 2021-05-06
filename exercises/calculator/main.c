#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    double number01 = 0.0f;
    double number02 = 0.0f;
    char operator = 0;
    printf(">>> ");
    scanf("%lf %c %lf", &number01, &operator, &number02);
    switch (operator) {
        case '+':
            printf("%lf\n", number01 + number02);
            break;
        case '-':
            printf("%lf\n", number01 - number02);
            break;
        case 'x':
        case '*':
            printf("%lf\n", number01 * number02);
            break;
        case '/':
            printf("%lf\n", number01 / number02);
            break;
        default:
            printf("'%c' is not a valid operator", operator);
            break;

    }
    return EXIT_SUCCESS;
}
