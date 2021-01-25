/* Cabeceras de C (libreria estandar) */
#include <stdio.h>      // funciones de entrada y salida
#include <stdlib.h>     // constantes y utilidades

#define HEIGHT 50
#define WIDTH 80

/* Funcion principal */
int main(int argc, char const *argv[]) {
	int area = WIDTH * HEIGHT;
	printf("Value of area %d", area);
    return EXIT_SUCCESS;
}