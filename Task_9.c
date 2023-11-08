#include <stdio.h>
#include <string.h>
#include <math.h>

// Lab1 task1 var9
float Lab1_MathMeanAbs(int x, int y, int z)
{
    float arithmeticMeanAbs = (abs(x) + abs(y) + abs(z)) / 3.0;
    return arithmeticMeanAbs;
}
float Lab1_MathMeanCube(int x, int y, int z)
{
    float arithmeticMeanCube = (pow(x, 3) + pow(y, 3) + pow(z, 3)) / 3.0;
    return arithmeticMeanCube;
}
// Lab2 task4 var4
void Lab2_CarDistance()
{
    double V1, V2, S, T;
    // Введення швидкості першого автомобіля (км/год)
    printf("Введіть швидкість першого автомобіля (км/год): ");
    scanf("%lf", &V1);
    // Введення швидкості другого автомобіля (км/год)
    printf("Введіть швидкість другого автомобіля (км/год): ");
    scanf("%lf", &V2);
    // Введення початкової відстані між автомобілями (км)
    printf("Введіть початкову відстань між автомобілями (км): ");
    scanf("%lf", &S);
    // Введення часу (годин)
    printf("Введіть час (години): ");
    scanf("%lf", &T);
    // Обчислення нової відстані між автомобілями
    double new_distance = S + (V1 + V2) * T;
    printf("Відстань між автомобілями через %.2lf годин: %.2lf км\n", T, new_distance);
}
// Lab 3 Task1 var21
void Lab3_AverageCarSpeed()
{
    int S;
    float T, V_average;
    printf("Введіть пройдений шлях в кілометрах = ");
    scanf("%d", &S);
    printf("Введіть час витрачений на поїздку в годинах = ");
    scanf("%f", &T);
    V_average = S / T;
    if (V_average <= 60)
    {
        printf("Середня швидкість поїздки = %.1f км/год\nПорушення швидкісного режиму не виявлено", V_average);
    }
    else
        printf("Середня швидкість поїздки = %.1f км/год\nВи порушили швидкісний режим", V_average);
}
// Lab4 Task6 var4
void Lab4_ExpressionResult()
{
    double res = 1.0;
    for (double i = 0.1; i <= 10.0; i += 0.1)
    {
        double temp = 100 + 10 * cos(i);
        res *= temp;
    }
    printf("Добуток виразу = %.2lf", res);
}
// Lab5 Task1 var13
void Lab5_Pointers()
{
    int a, b;
    printf("Введіть значення a: ");
    scanf("%d", &a);
    printf("Введіть значення b: ");
    scanf("%d", &b);
    int *ptr_a = &a;       // Покажчик на змінну a
    int *ptr_b = &b;       // Покажчик на змінну b
    *ptr_a = 2 * (*ptr_a); // Збільшення a вдвічі через покажчик
    *ptr_b = (*ptr_b) / 2; // Зменшення b вдвічі через покажчик
    printf("Змінена змінна a: %d\n", a);
    printf("Змінена змінна b: %d\n", b);
}
// Lab6 Task1 var8
void Lab6_Arrays()
{
    int n;
    printf("Введіть значення n: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("n повинно бути натуральним числом.\n");
    }
    else
    {
        // Оголошення та ініціалізація масиву для зберігання послідовності
        int sequence[n];
        sequence[0] = 1; // a1
        sequence[1] = 1; // a2
        sequence[2] = 2; // a3
        sequence[3] = 3; // a4
        // Обчислення та заповнення решти масиву
        for (int i = 4; i < n; i++)
        {
            sequence[i] = sequence[i - 1] * sequence[i - 2];
        }
        // Виведення послідовності
        printf("Послідовність a1, a2, a3, ..., an:\n");
        for (int i = 0; i < n; i++)
        {
            printf("a%d: %d\n", i + 1, sequence[i]);
        }
    }
}
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
// Lab8 Task1 var18
void Lab8_Structs()
{
    struct PRICE
    {
        char product_name[50];
        char store_name[50];
        float price;
    };
    struct PRICE prices[4];
    // Ввід даних про товари
    for (int i = 0; i < 4; i++)
    {
        printf("Введіть назву товару: ");
        scanf("%s", prices[i].product_name);

        printf("Введіть назву магазину: ");
        scanf("%s", prices[i].store_name);

        printf("Введіть вартість товару (грн.): ");
        scanf("%f", &prices[i].price);
    }
    // Сортування масиву по назвах магазинів (в алфавітному порядку)
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (strcmp(prices[i].store_name, prices[j].store_name) > 0)
            {
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
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(prices[i].store_name, search_store) == 0)
        {
            printf("Назва товару: %s\n", prices[i].product_name);
            printf("Вартість товару: %.2f грн.\n", prices[i].price);
            found = 1;
        }
    }
    if (!found)
    {
        printf("Магазин з назвою %s не знайдено.\n", search_store);
    }
}

int main()
{
    int num;
    printf("Оберіть бажане звадання, введіть число 1-8 = ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        int x, y, z;
        printf("Input x = ");
        scanf("%d", &x);
        printf("Input y = ");
        scanf("%d", &y);
        printf("input z = ");
        scanf("%d", &z);
        float k = Lab1_MathMeanAbs(x, y, z);
        float l = Lab1_MathMeanCube(x, y, z);
        printf("Mean abs = %.2f\nMean cube = %.2f", k, l);
        break;
    case 2:
        Lab2_CarDistance();
        break;
    case 3:
        Lab3_AverageCarSpeed();
        break;
    case 4:
        Lab4_ExpressionResult();
        break;
    case 5:
        Lab5_Pointers();
        break;
    case 6:
        Lab6_Arrays();
        break;
    case 7:
        Lab7_Strings();
        break;
    case 8:
        Lab8_Structs();
        break;
    default:
        printf("Incorrect number");
        break;
    }
    return 0;
}
