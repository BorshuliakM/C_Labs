#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x;
    double sum = 0.0;

    printf("Введіть значення x: ");
    scanf("%lf", &x);
    
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        double term = 1.0;
        for (int j = 1; j <= 2 * i + 1; j++) {
            term *= x / j;
        }
        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term;
        }
    }

    printf("Результат суми: %lf\n", sum);

    return 0;
}

