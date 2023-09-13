#include <stdio.h>
#include <math.h>

int main()
{
    double k1, k2;
    
    printf("Введіть нахил першої прямої (k1): ");
    scanf("%lf", &k1);

    printf("Введіть нахил другої прямої (k2): ");
    scanf("%lf", &k2);

    // Обчислення тангенсу кута між прямими
    double tangent_A = (k1 - k2) / (1 - k1 * k2);
    // Обчислення кута в градусах
    double angle_A_rad = atan(tangent_A);
    double angle_A_deg = angle_A_rad * (180.0 / M_PI); // Переводимо радіани в градуси

    printf("Кут між прямими: %.2lf градусів\n", angle_A_deg);

    return 0;
}
