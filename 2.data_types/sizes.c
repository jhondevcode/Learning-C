#include <stdio.h>
#include <stdlib.h>

int main() {
    printf ("El Tipo <char> tiene un tamaño de %zd bytes\n", sizeof (char));
    printf ("El Tipo <unsigned char> tiene un tamaño de %zd bytes\n", sizeof (unsigned char));
    printf ("El Tipo <short int> tiene un tamaño de %zd bytes\n", sizeof (short int));
    printf ("El Tipo <int> tiene un tamaño de %zd bytes\n", sizeof (int));
    printf ("El Tipo <float> tiene un tamaño de %zd bytes\n", sizeof (float));
    printf ("El Tipo <long> tiene un tamaño de %zd bytes\n", sizeof (long));
    printf ("El Tipo <long long> tiene un tamaño de %zd bytes\n", sizeof (long long));
    printf ("El Tipo <double> tiene un tamaño de %zd bytes\n", sizeof (double));
    printf ("El Tipo <long double> tiene un tamaño de %zd bytes\n", sizeof (long double));
    return EXIT_SUCCESS;
}
