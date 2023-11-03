#include <stdio.h>

int main() {
    int n;
    printf("Введіть значення n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n повинно бути натуральним числом.\n");
        return 1;
    }

    // Оголошення та ініціалізація масиву для зберігання послідовності
    int sequence[n];
    sequence[0] = 1; // a1
    sequence[1] = 1; // a2
    sequence[2] = 2; // a3
    sequence[3] = 3; // a4
    // Обчислення та заповнення решти масиву
    for (int i = 4; i < n; i++) {
        sequence[i] = sequence[i - 1] * sequence[i - 2];
    }

    // Виведення послідовності
    printf("Послідовність a1, a2, a3, ..., an:\n");
    for (int i = 0; i < n; i++) {
        printf("a%d: %d\n", i + 1, sequence[i]);
    }

    return 0;
}


