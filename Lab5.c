#include <stdio.h>
#include <string.h>
#include <math.h>
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