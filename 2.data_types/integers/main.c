/* Cabeceras de C (libreria estandar) */
#include <stdio.h>      // funciones de entrada y salida
#include <stdlib.h>     // constantes y utilidades
#include <limits.h>     // operaciones para limites de tipos de datos
#include <float.h>      // operaciones para decimales

/*
 * Estos tamaños son para un procesador de 32 o 64 bits, en caso de que el procesador fuese de 16 bits los tamaños variaran
 * ________________________________________________________________________________________________________________________________
 * |    Data type     |                      sizes                            |   used bytes    |            Processor            |
 * |__________________|_______________________________________________________|_________________|_________________________________|
 * |  char            |  ->  [-128, 127]                                      |   1 byte        | 32 bits & 64 bits               |
 * |  signed char     |  ->  [-128, 127]                                      |   1 byte        | 32 bits & 64 bits               |
 * |  unsigned char   |  ->  [0, 255]                                         |   1 byte        | 32 bits & 64 bits               |
 * |  short           |  ->  [-32768 to 32767]                                |   2 bytes       | 32 bits & 64 bits               |
 * |  unsigned short  |  ->  [0 to 65535]                                     |   2 bytes       | 32 bits & 64 bits               |
 * |  int             |  ->  [-2147483648, 2147483647]                        |   4 bytes       | 32 bits & 64 bits               |
 * |  unsigned int    |  ->  [0, 65535] o [0, 4294967295]                     |   4 bytes       | 32 bits & 64 bits               |
 * |  long            |  ->  [-9223372036854775808, 9223372036854775807]      |   8 bytes       | 32 bits & 64 bits               |
 * |  unsigned long   |  ->  [0, 18446744073709551615]                        |   8 bytes       | 32 bits & 64 bits               |
 * |__________________|_______________________________________________________|_________________|_________________________________|
 */

/* funcion principal */
int main() {
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
    return EXIT_SUCCESS;        // al ser una funcion entera devuelve un numero EXIT_SUCCESS = 0
}
