#include <stdio.h>

int main() {
    int n;
    printf("Введіть кількість чисел у послідовності: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Кількість чисел повинна бути натуральним числом.\n");
        return 1;
    }

    double sequence[n]; // Оголошення масиву для зберігання послідовності

    // Ввід чисел у послідовність
    printf("Введіть числа:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &sequence[i]);
    }

    // Пошук унікальних чисел і вивід їх
    printf("Унікальні числа з послідовності:\n");
    for (int i = 0; i < n; i++) {
        int isUnique = 1; // Прапорець, що вказує, чи є поточне число унікальним

        // Перевірка, чи число вже було виведено
        for (int j = 0; j < i; j++) {
            if (sequence[i] == sequence[j]) {
                isUnique = 0;
                break;
            }
        }

        // Якщо число унікальне, виводимо його
        if (isUnique) {
            printf("%lf\n", sequence[i]);
        }
    }

    return 0;
}
