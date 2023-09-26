#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    int res = (n == 0) ? 1 : (n * fact(n - 1));
    return res;
}

int main()
{
    int n;
    double a, res;
    printf("Введіть число n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a += 1.1;
        res += a / fact(i);
    }

    printf("Сумма виразу = %.4lf", res);

    return 0;
}

/*## Програмування
# Лабораторна робота № 4
# Тема
Цикли
# Виконавець
Студент групи KNms1-B23 Боршуляк М.О.

# Банк питань P BANK 03-04
# Завдання 7
Текст завдання
7. Дано натуральне число
n
і дійсні числа
a a an
, ,..., 1 2
. Обчислити:
!
...
1! 2!
1 2
n
a a an    .
# Код знаходиться в репозиторії:
https://github.com/BorshuliakM/C_Labs/tree/Task_11_4

# Ім'я файлу (файлів)
Task_7_4.c

# Результат виконання програми
Сумма виразу = 2.9901
*/