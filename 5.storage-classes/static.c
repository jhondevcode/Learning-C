/* Cabeceras de C (libreria estandar) */
#include <stdio.h>      // funciones de entrada y salida
#include <stdlib.h>     // constantes y utilidades

/* Las variables declaradas con static se mantendran durante todo el ciclo de vida del programa
 * mientras que las variables locales son destruidas una vez termine una funcion.
 */
 /**
  * La clase de almacenamiento estático le indica al compilador que mantenga una variable
  * local en existencia durante el tiempo de vida del programa en lugar de crearla y destruirla
  * cada vez que entra y sale del alcance. Por lo tanto, hacer que las variables locales sean
  * estáticas les permite mantener sus valores entre llamadas a funciones.
  * 
  * El modificador estático también se puede aplicar a variables globales. Cuando se hace esto,
  * hace que el alcance de esa variable se restrinja al archivo en el que se declara.
  * 
  * En la programación C, cuando se usa static en una variable global, hace que solo una copia 
  * de ese miembro sea compartida por todos los objetos de su clase.
  */

static int count = 5; /* variable statica global */

/* declaracion de una funcion */
void func();

/* funcion principal */
int main(int argc, char const *argv[]) {
    while (count--) {
        func();
    }
    return EXIT_SUCCESS;
}

/* definicion de la funcion 'func' */
void func() {
    static int i = 5; // el valor que posea se mantendra aunque la funcion sea llamada varias veces.
    i++;
    printf("i es %d y count es %d\n", i, count);
}
