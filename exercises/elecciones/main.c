#include <stdio.h>
#include <stdlib.h>

/*
 * 1: candidato 1
 * 2: candidato 2
 * 3: candidato 3
 * 4: candidato 4
 * 5: candidato 5
 *
 * 0: voto en blanco
 */
int main(int argc, char const *argv[]) {
    unsigned int votos[6] = {0, 0, 0, 0, 0, 0};
    int candidato = 0;
    while (candidato >= 0) {
        printf("Ingrese el numero de su candidato favorito: ");
        scanf("%d", &candidato);
        switch (candidato) {
            case -1: printf("Iniciando conteo...\n"); break;
            case 0: votos[0]++; break;
            case 1: votos[1]++; break;
            case 2: votos[2]++; break;
            case 3: votos[3]++; break;
            case 4: votos[4]++; break;
            case 5: votos[5]++; break;
            default: printf("El candidato %d no esta registrado\n", candidato); break;
        }
    }
    unsigned int total = 0;
    for (uint i = 0; i < 6; i++) {
        total += votos[i];
    }
    float porcentajes[6] = {
        ((float) votos[0] / total) * 100,
        ((float) votos[1] / total) * 100,
        ((float) votos[2] / total) * 100,
        ((float) votos[3] / total) * 100,
        ((float) votos[4] / total) * 100,
        ((float) votos[5] / total) * 100
    };

    printf("Total de votantes: %d\n", total);

    printf("\n\nCandidato 1: %d votos -- Porcentaje: %.2f", votos[1], porcentajes[1]);
    printf("\nCandidato 2: %d votos -- Porcentaje: %.2f", votos[2], porcentajes[2]);
    printf("\nCandidato 3: %d votos -- Porcentaje: %.2f", votos[3], porcentajes[3]);
    printf("\nCandidato 4: %d votos -- Porcentaje: %.2f", votos[4], porcentajes[4]);
    printf("\nCandidato 5: %d votos -- Porcentaje: %.2f", votos[5], porcentajes[5]);
    printf("\nNulos: %d votos -- Porcentaje: %.2f", votos[0], porcentajes[0]);
    printf("\n\nGracias.\n");
    return EXIT_SUCCESS;
}
