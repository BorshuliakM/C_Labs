#include <stdio.h>

int main()
{
    double P;
    printf("Введіть довжину в метрах: ");
    scanf("%lf", &P);

    // Переведення в староруську неметричну систему
    double versti = P / (500 * 3 * 16 * 0.04445); // Перевести в версти
    double sazheni = versti * 500; // Перевести в сажені
    double arshini = sazheni * 3; // Перевести в аршини
    double vershki = arshini * 16; // Перевести в вершки

    // Виведення результатів
    printf("Довжина в староруській неметричній системі:\n");
    printf("Версти: %.2lf\n", versti);
    printf("Сажені: %.2lf\n", sazheni);
    printf("Аршини: %.2lf\n", arshini);
    printf("Вершки: %.2lf\n", vershki);
    return 0;
}
