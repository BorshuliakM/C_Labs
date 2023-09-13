#include <stdio.h>
#include <math.h>

int main()
{
    double z1, z2;
    double x, y;

    printf("Введіть значення х = ");
    scanf("%lf", &x);
    printf("Введіть значення у = ");
    scanf("%lf", &y);

    z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2)-1;
    z2 = sin(y + x) * sin(y - x);

    printf("Z1 = %f\nZ2 = %f", z1, z2);

    return 0;
}
