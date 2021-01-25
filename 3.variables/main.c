/* Cabeceras de C (libreria estandar) */
#include <stdio.h>      // funciones de entrada y salida
#include <stdlib.h>     // constantes y utilidades

extern int a;
extern int b;
extern int c;
extern float f;

/* funcion principal */
int main(int argc, char const *argv[]) {
    /* variable definition */
    int a, b, c;
    float f;
    /* Initializing variables */
    a = 10;
    b = 20;
    c = a + b;
    printf("Value of c: %d\n", c);
    f = 70.0 / 3.0;
    printf("Value of f: %f\n", f);
    return EXIT_SUCCESS;
}
