#include <stdio.h>

long long calculate_series(int n, int args[]) {
    long long result = 0;
    long long product = 1;

    if (n < 5 || n >= 10) {
        printf("Помилка: n має бути в межах від 5 до 9 включно.\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result += args[i] * product;
        } else {
            result -= args[i] * product;
        }
        product *= args[i];
    }

    return result;
}

int main() {
    int n = 5;  
    int a[] = {1, 2, 3, 4, 5};  
    long long result = calculate_series(n, a);

    if (result != -1) {
        printf("Результат: %lld\n", result);
    }

    return 0;
}
