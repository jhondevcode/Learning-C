/* Cabeceras de C (libreria estandar) */
#include <stdio.h>      // funciones de entrada y salida
#include <stdlib.h>     // constantes y utilidades

/**
 * La clase de almacenamiento externo se usa para dar una referencia de una variable global
 * que es visible para TODOS los archivos de programa. Cuando usa 'extern', la variable no
 * se puede inicializar, sin embargo, apunta el nombre de la variable a una ubicación de 
 * almacenamiento que se ha definido previamente.
 *
 * Cuando tiene varios archivos y define una variable o función global, que también se usará
 * en otros archivos, extern se usará en otro archivo para proporcionar la referencia de la
 * variable o función definida. Solo para entender, extern se usa para declarar una variable
 * o función global en otro archivo.
 *
 * El modificador extern se usa más comúnmente cuando hay dos o más archivos que comparten
 * las mismas variables o funciones globales, como se explica a continuación.
 */

int count;
extern void write_extern();

/* funcion principal */
int main(int argc, char const *argv[]) {
    count = 5;
    write_extern();
    return EXIT_SUCCESS;
}
