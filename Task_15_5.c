#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Введіть значення x: ");
    scanf("%lf", &x);

    double result;
    double *ptr_result = &result; // Покажчик на результат

    *ptr_result = sqrt(sin(x) + cos(x)); // Обчислення кореня квадратного від виразу

    printf("Результат: %lf\n", *ptr_result);

    return 0;
}


