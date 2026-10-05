#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF8");
    double x, y, z;
    printf("Введите x: ");
    if (scanf("%lf", &x) != 1) return 1;
    printf("Введите y: ");
    if (scanf("%lf", &y) != 1) return 1;
    printf("Введите z: ");
    if (scanf("%lf", &z) != 1) return 1;

    double koren_x = cbrt(fabs(x));
    double chast_1 = pow(y, koren_x);

    double modul = fabs(x - y);
    double koren_znam = sqrt(x + y);
    double sinus_kvadrat = sin(z) * sin(z);

    double chislitel = modul * (1.0 + (sinus_kvadrat / koren_znam));
    double znamenatel = exp(modul) + (x / 2.0);

    double kosinus_kub = cos(y) * cos(y) * cos(y);

    double b = chast_1 + kosinus_kub * (chislitel / znamenatel);
    printf("\nРезультат:\n");
    printf("b = %.4f\n", b);
    return 0;
}
