#include <stdio.h>

int main() {
    int m, n;
    printf("Введіть кількість рядків (m) та стовпців (n) у матриці: ");
    scanf("%d %d", &m, &n);

    if (m < 1 || n < 1) {
        printf("Розмір матриці повинен бути більшим за 0.\n");
        return 1;
    }

    double matrix[m][n]; // Оголошення прямокутної матриці

    // Ввід значень матриці
    printf("Введіть значення матриці:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Пошук номера стовпця з мінімальним елементом
    int minColumn = 0;
    double minValue = matrix[0][0]; // Припускаємо, що мінімальний елемент - перший

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < m; i++) {
            if (matrix[i][j] < minValue) {
                minValue = matrix[i][j];
                minColumn = j;
            }
        }
    }

    // Виведення номера стовпця з мінімальним елементом
    printf("Номер стовпця з мінімальним елементом: %d\n", minColumn + 1);

    return 0;
}
