#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x, F;

    printf("Введіть значення a = ");
    scanf("%f", &a);
    printf("Введіть значення b = ");
    scanf("%f", &b);
    printf("Введіть значення c = ");
    scanf("%f", &c);
    printf("Введіть значення x = ");
    scanf("%f", &x);

    if (c < 0 && b != 0)
    {
        F = a * pow(x, 2) + pow(b, 2) * x;
        printf("F = %f", F);
    }
    else if (c > 0 && b == 0)
    {
            F = (x + a) / (x + c);
            printf("F = %f", F);
    }
    else
        F = x / c;
        printf("F = %f", F);
    return 0;
}
