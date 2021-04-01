#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    // salto de linea
    printf("salto\nde\nlinea\n");
    // tabulacion
    printf("1\tOne\n5\tFive\n4\tFour\n9\tNine\n");
    // alert beep
    printf("\a\n");
    // backslash
    printf("\\\n");
    // Apostrophe or single quotation mark
    printf("\'\n");
    // Double quotation mark
    printf("\"\n");
    // Question mark (used to avoid trigraphs)
    printf("\?\n");
    // Carriage Return
    printf("Carriage Return\r\n");
    // Vertical Tab
    printf("\v\n");

    printf("End of program\n");
    return EXIT_SUCCESS;
}
