/*
 * ===========================================================================
 * Name        : Learning-C\12.structures\typedef
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Undefinned
 * Created on  : 2021-05-19 15:14:43.717576
 * ===========================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
} Color;

typedef struct {
    char name[64];
    unsigned int dni;
    unsigned short age;
} Person;

char* color_name(Color rgb);

int main(int argc, char const *argv[]) {
    Color blue = {0, 0, 255};
    char name[16] = color_name(blue);
    printf("Color code: ");
    scanf("%s", &name);
    printf("%s\n", name);
    return EXIT_SUCCESS;
}

char* color_name(Color rgb) {
    if (rgb.r == 0 && rgb.g == 0 && rgb.b == 255) {
        return "blue";
    } else if (rgb.r == 0 && rgb.g == 255 && rgb.b == 0) {
        return "green";
    } else if (rgb.r == 255 && rgb.g == 0 && rgb.b == 0) {
        return "red";
    } else {
        return "undefined";
    }
}
