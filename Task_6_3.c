#include <stdio.h>
#include <math.h>


int main()
{
    float x, y;

    printf("Введіть значення x = ");
    scanf("%f", &x);
    printf("Введіть значення y = ");
    scanf("%f", &y);
    
    if(x>1 && y>1) printf("Точка [%.1f,%.1f] не належить замальованому об'єкту на площині", x, y);
    else printf("Точка [%.1f,%.1f] належить замальованому об'єкту на площині", x, y);

    return 0;
}
