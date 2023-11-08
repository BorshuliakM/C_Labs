#include <stdio.h>
#include <string.h>
#include <math.h>

// Lab7 Task1 var6
void Lab7_Strings()
{
    char text[1000]; // Оголошення рядка для зберігання тексту
    printf("Введіть текст: ");
    fgets(text, sizeof(text), stdin);
    int firstCommaIndex = -1; // Порядковий номер першої коми
    int lastCommaIndex = -1;  // Порядковий номер останньої коми
    // Пошук першої та останньої коми у тексті
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ',')
        {
            if (firstCommaIndex == -1)
            {
                firstCommaIndex = i + 1;
            }
            lastCommaIndex = i + 1;
        }
    }
    // Виведення порядкових номерів ком у тексті
    if (firstCommaIndex != -1)
    {
        printf("Порядковий номер першої коми: %d\n", firstCommaIndex);
    }
    else
    {
        printf("Перша кома в тексті не знайдена.\n");
    }
    if (lastCommaIndex != -1)
    {
        printf("Порядковий номер останньої коми: %d\n", lastCommaIndex);
    }
    else
    {
        printf("Остання кома в тексті не знайдена.\n");
    }
}