#include <stdio.h>
#include <stdlib.h>

/*
 * This example shows the creation of an array of integers and its subsequent
 * completion by the user.
 *
 * Once you have all the numbers, you will proceed to obtain the average of
 * all the entered numbers.
 */
int main(int argc, char const *argv[]) {
    int array[10] = {};
    printf("=====> Enter 10 numbers <=====\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int total_amount = 0;
    for (int j = 0; j < 10; j++) {
        total_amount += array[j];
    }
    float average = total_amount / 10.0;
    printf("Average: %.2f\n", average);
    return EXIT_SUCCESS;
}
