/*
 * ===========================================================================
 * Name        : Learning-C\11.enumeration\numbers
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Undefinned
 * Created on  : 2021-05-19 14:32:16.891668
 * ===========================================================================
 */
#include <stdio.h>
#include <stdlib.h>

enum {
    RED,
    ORANGE,
    GREEN,
    BLUE,
    WHITE,
    BLACK,
    PURPLE,
    MAGENTA,
    YELLOW,
    PINK
};

int main(int argc, char const *argv[]) {
    int code = -1;
    printf("Enter a number: ");
    scanf("%d", &code);
    fflush(stdin);
    switch (code) {
        case RED: puts("Red"); break;
        case ORANGE: puts("Orange"); break;
        case GREEN: puts("Green"); break;
        case BLUE: puts("Blue"); break;
        case WHITE: puts("White"); break;
        case BLACK: puts("Black"); break;
        case PURPLE: puts("Purple"); break;
        case MAGENTA: puts("Magenta"); break;
        case YELLOW: puts("Yellow"); break;
        case PINK: puts("Pink"); break;
        default: puts("I don't have a name for the number you entered"); break;
    }
    return EXIT_SUCCESS;
}
