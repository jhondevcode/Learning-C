/* Cabeceras de C (libreria estandar) */
#include <stdio.h>      // funciones de entrada y salida

extern int count;
 
void write_extern(void) {
   printf("count is %d\n", count);
}