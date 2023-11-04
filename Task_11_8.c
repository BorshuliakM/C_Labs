#include <stdio.h>
#include <string.h>

// Структура NOTE
struct NOTE {
    char name[50];
    char phoneNumber[15];
    int birthDate[3]; // Масив для дати народження (день, місяць, рік)
};

int main() {
    struct NOTE addressBook[8]; // Оголошення масиву для адресної книги
    int numEntries;

    // Ввід даних для адресної книги
    printf("Введіть інформацію для адресної книги:\n");
    for (int i = 0; i < 8; i++) {
        printf("Контакт %d:\n", i + 1);
        printf("Прізвище та ім'я: ");
        scanf(" %[^\n]s", addressBook[i].name);
        printf("Номер телефону: ");
        scanf(" %[^\n]s", addressBook[i].phoneNumber);
        printf("Дата народження (день місяць рік): ");
        for (int j = 0; j < 3; j++) {
            scanf("%d", &addressBook[i].birthDate[j]);
        }
    }

    // Сортування записів за датами народження (вставка)
    for (int i = 1; i < 8; i++) {
        struct NOTE temp = addressBook[i];
        int j = i - 1;
        while (j >= 0 && (addressBook[j].birthDate[2] > temp.birthDate[2] ||
            (addressBook[j].birthDate[2] == temp.birthDate[2] &&
             (addressBook[j].birthDate[1] > temp.birthDate[1] ||
              (addressBook[j].birthDate[1] == temp.birthDate[1] &&
               addressBook[j].birthDate[0] > temp.birthDate[0]))))) {
            addressBook[j + 1] = addressBook[j];
            j--;
        }
        addressBook[j + 1] = temp;
    }

    // Ввід номера телефону для пошуку
    char searchPhoneNumber[15];
    printf("Введіть номер телефону для пошуку: ");
    scanf(" %[^\n]s", searchPhoneNumber);

    // Пошук та виведення інформації про контакти з введеним номером телефону
    int found = 0; // Прапорець, який вказує, чи були знайдені контакти
    printf("Результат пошуку за номером телефону:\n");
    for (int i = 0; i < 8; i++) {
        if (strcmp(addressBook[i].phoneNumber, searchPhoneNumber) == 0) {
            printf("Прізвище та ім'я: %s\n", addressBook[i].name);
            printf("Номер телефону: %s\n", addressBook[i].phoneNumber);
            printf("Дата народження: %d.%d.%d\n",
                   addressBook[i].birthDate[0],
                   addressBook[i].birthDate[1],
                   addressBook[i].birthDate[2]);
            found = 1; // Знайдено контакт з введеним номером телефону
        }
    }

    if (!found) {
        printf("Контакти з введеним номером телефону не знайдені.\n");
    }

    return 0;
}
