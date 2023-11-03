#include <stdio.h>


int main()
{
     int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    // Перевірка на коректність n
    if (n <= 0) {
        printf("n повинно бути натуральним числом.\n");
        return 1;
    }

    double x;
    printf("Введіть число x: ");
    scanf("%lf", &x);

    double a[n];
    printf("Введіть %d дійсних чисел a1, a2, ..., an:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    // Підрахунок кількості разів, коли x зустрічається серед чисел a1, a2, ..., an
    int count = 0;
    for (int i = 0; i < n; i++) {
        double sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += a[j];
        }
        if (sum == x) {
            count++;
        }
    }

    printf("Число x зустрічається серед чисел a1, a2, ..., an %d разів.\n", count);

    return 0;
}


