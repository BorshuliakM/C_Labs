#include <stdio.h>
#include <string.h>
#include <math.h>
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