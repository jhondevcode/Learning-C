/* Cabeceras de C (libreria estandar) */
#include <stdio.h>      // funciones de entrada y salida
#include <stdlib.h>     // constantes y utilidades
#include <limits.h>     // operaciones para limites de tipos de datos
#include <float.h>      // operaciones para decimales

/* funcion principal */
int main() {
    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX      :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN      :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX     :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN     :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX      :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN      :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :   %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return EXIT_SUCCESS;
}
