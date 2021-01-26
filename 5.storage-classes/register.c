/* Cabeceras de C (libreria estandar) */
#include <stdio.h>      // funciones de entrada y salida
#include <stdlib.h>     // constantes y utilidades

/* funcion principal */
int main(int argc, char const *argv[]) {
    /* La clase de almacenamiento de registros se utiliza para definir variables locales que deben almacenarse
     * en un registro en lugar de en la RAM. Esto significa que la variable tiene un tamaño máximo igual al tamaño
     * del registro (generalmente una palabra) y no se le puede aplicar el operador unario '&' (ya que no tiene una
     * ubicación de memoria).
     */
     register int a = 15; // Depende del hardware, es decir si el hardware soporta dicha operacion.
    // No se puede puede usar '&' ya que no esta en la memoria sino en un registro de CPU.
     /*
      * El registro solo debe usarse para variables que requieren acceso rápido, como contadores. También debe
      * tenerse en cuenta que definir 'registro' no significa que la variable se almacenará en un registro.
      * Significa que PODRÍA almacenarse en un registro dependiendo del hardware y las restricciones de implementación.
      */
    printf("a value is: %d\n", a);
    return EXIT_SUCCESS;
}
