#include <stdio.h>
#include <stdlib.h>

/*
 * matrix of integers.
 * char, short, int, long
 */
int main(int argc, char const *argv[]) {
    unsigned char  int01[6][2] = {{7, 6}, {9, 8}, {18, 17}, {21, 20}, {255, 254}, {128, 127}};
    unsigned short int02[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    unsigned int   int03[5][2] = {{21, 12}, {45, 54}, {82, 28}, {36, 63}, {75, 57}};
    unsigned long  int04[3][6] = {{6523, 8465, 6565, 454, 789, 13645},
                                  {6135, 6259, 1536619, 6814616, 87135, 1646},
                                  {86434, 5616, 51668, 915956, 816461, 1784164}};
    return EXIT_SUCCESS;
}
