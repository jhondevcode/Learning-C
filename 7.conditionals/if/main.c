#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int age;
    printf("Enter you age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are not a boy\n");
    }
    return EXIT_SUCCESS;
}
