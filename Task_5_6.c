#include <stdio.h>

int main() {
    int numbers[100]; // Оголошення масиву для зберігання 100 цілих чисел

    // Заповнення масиву з довільними значеннями (можна ввести їх з клавіатури)
    for (int i = 0; i < 100; i++) {
        numbers[i] = i - 50; // Приклад: заповнення від -50 до 49
    }

    printf("Від'ємні числа:\n");
    for (int i = 0; i < 100; i++) {
        if (numbers[i] < 0) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\nІнші числа:\n");
    for (int i = 0; i < 100; i++) {
        if (numbers[i] >= 0) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");

    return 0;
}