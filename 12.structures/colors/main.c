/*
 * ===========================================================================
 * Name        : Learning-C\12.structures\colors
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Undefinned
 * Created on  : 2021-05-19 14:59:10.727496
 * ===========================================================================
 */
#include <stdio.h>
#include <stdlib.h>

struct Color {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};

int main(int argc, char const *argv[]) {
    struct Color blue = {0, 0, 255};
    struct Color green = {0, 255, 0};
    struct Color red = {255, 0, 0};

    printf("Blue code  : (%d, %d, %d)\n", blue.red, blue.green, blue.blue);
    printf("Green code : (%d, %d, %d)\n", green.red, green.green, green.blue);
    printf("Red code   : (%d, %d, %d)\n", red.red, red.green, red.blue);
    return EXIT_SUCCESS;
}
