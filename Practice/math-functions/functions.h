// Funciones usadas en el ejercicio
//
//
// y^2 + 5                  si 0 < y <= 15
// y^3 - y^2 + 12           si 15 < y <= 30
// 4 * y^3 / Y^2 + 8        si 30 < y <= 60

#include <math.h>

double function01(double y) {
    return pow(y, 2) + 5;
}

double function02(double y) {
    return pow(y, 3) - pow(y, 2) + 12;
}

double function03(double y) {
    return 4 * pow(y, 3) / pow(y, 2) + 8;
}
