#include <stdio.h>

int main() {
    int i, j;
    double result = 0.0;

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 20; j++) {
            result += (i + j) / (double)(i * i + j);
        }
    }

    printf("Результат суми: %lf\n", result);

    return 0;
}
