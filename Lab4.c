#include <stdio.h>
#include <string.h>
#include <math.h>
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