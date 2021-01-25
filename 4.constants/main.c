/* Cabeceras de C (libreria estandar) */
#include <stdio.h>      // funciones de entrada y salida
#include <stdlib.h>     // constantes y utilidades

/* Funcion principal */
int main(int argc, char const *argv[]) {
    const int a = 50;
	const int b = 5;
	int r;
	r = a + b;
	printf("%d + %d = %d\n", a, b, r);
	r = a - b;
	printf("%d - %d = %d\n", a, b, r);
	r = a * b;
	printf("%d * %d = %d\n", a, b, r);
	r = (int) (a / b);
	printf("%d / %d = %d\n", a, b, r);
    return EXIT_SUCCESS;
}
