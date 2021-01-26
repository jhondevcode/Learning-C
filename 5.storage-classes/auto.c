/* Cabeceras de C (libreria estandar) */
#include <stdio.h>      // funciones de entrada y salida
#include <stdlib.h>     // constantes y utilidades

/* funcion principal */
int main(int argc, char const *argv[]) {
    /* La clase de almacenamiento automático es la clase de almacenamiento predeterminada para todas las variables locales.
     * 'auto' solo se puede usar dentro de funciones, es decir, variables locales.
     */
    int a = 10;
    auto int b = 20;
    auto int c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    return EXIT_SUCCESS;
}
