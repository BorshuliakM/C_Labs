#include <stdio.h>

// Рекурсивна функція для обчислення числа поєднань
int Combin1(int N, int K) {
    if (K == 0 || K == N) {
        return 1;
    } else {
        return Combin1(N - 1, K) + Combin1(N - 1, K - 1);
    }
}

int main() {
    int N, K;
    printf("Введіть значення N та K: ");
    scanf("%d %d", &N, &K);

    if (K < 0 || K > N) {
        printf("K повинно бути у межах від 0 до N.\n");
        return 1;
    }

    int result = Combin1(N, K);
    printf("C(%d, %d) = %d\n", N, K, result);

    return 0;
}