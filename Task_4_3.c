#include <stdio.h>
#include <math.h>


int main()
{
    float a, b, c, f1, expr1, expr2;

    printf("Введіть значення a = ");
    scanf("%f", &a);
    printf("Введіть значення b = ");
    scanf("%f", &b);
    printf("Введіть значення c = ");
    scanf("%f", &c);

    expr1=a+b+c;
    expr2=a*b*c;

    f1 = fmax(expr1, expr2);

    printf("F = %.1f", f1);

    return 0;
}
