#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // Оголошення рядка для зберігання тексту
    printf("Введіть рядок: ");
    fgets(str, sizeof(str), stdin);

    int charCount[256] = {0}; // Масив для підрахунку кількості кожного символу

    // Підрахунок кількості кожного символу у рядку
    for (int i = 0; i < strlen(str); i++) {
        charCount[(int)str[i]]++;
    }

    printf("Символи, які входять у рядок: ");
    for (int i = 0; i < 256; i++) {
        if (charCount[i] > 0) {
            printf("%c, ", (char)i);
        }
    }

    printf("\n");

    return 0;
}
