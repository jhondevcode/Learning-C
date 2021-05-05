#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    short day_number = 1;
    printf("Ingrese el dia de la semana: ");
    scanf("%d", &day_number);
    switch (day_number) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miercoles\n");
            break;
        case 4:
            printf("Juevez\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Valor desconocido\n");
            break;
    }
    return EXIT_SUCCESS;
}
