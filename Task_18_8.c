#include <stdio.h>
#include <string.h>

// Структура для представлення ціни товару
struct PRICE {
    char product_name[50];
    char store_name[50];
    float price;
};

int main() {
    // Оголошуємо масив структур PRICE
    struct PRICE prices[4];

    // Ввід даних про товари
    for (int i = 0; i < 4; i++) {
        printf("Введіть назву товару: ");
        scanf("%s", prices[i].product_name);

        printf("Введіть назву магазину: ");
        scanf("%s", prices[i].store_name);

        printf("Введіть вартість товару (грн.): ");
        scanf("%f", &prices[i].price);
    }

    // Сортування масиву по назвах магазинів (в алфавітному порядку)
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (strcmp(prices[i].store_name, prices[j].store_name) > 0) {
                struct PRICE temp = prices[i];
                prices[i] = prices[j];
                prices[j] = temp;
            }
        }
    }

    // Виведення інформації про товари в конкретному магазині
    char search_store[50];
    printf("Введіть назву магазину для пошуку: ");
    scanf("%s", search_store);

    int found = 0;
    printf("Товари, що продаються в магазині %s:\n", search_store);
    for (int i = 0; i < 4; i++) {
        if (strcmp(prices[i].store_name, search_store) == 0) {
            printf("Назва товару: %s\n", prices[i].product_name);
            printf("Вартість товару: %.2f грн.\n", prices[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("Магазин з назвою %s не знайдено.\n", search_store);
    }

    return 0;
}
