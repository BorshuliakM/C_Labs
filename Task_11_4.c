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

