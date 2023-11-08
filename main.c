#include <stdio.h>
#include <string.h>
#include <math.h>
#include "MyFuncs.h"

int main()
{
    int num;
    printf("Оберіть бажане звадання, введіть число 1-8 = ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        int x, y, z;
        printf("Input x = ");
        scanf("%d", &x);
        printf("Input y = ");
        scanf("%d", &y);
        printf("input z = ");
        scanf("%d", &z);
        float k = Lab1_MathMeanAbs(x, y, z);
        float l = Lab1_MathMeanCube(x, y, z);
        printf("Mean abs = %.2f\nMean cube = %.2f", k, l);
        break;
    case 2:
        Lab2_CarDistance();
        break;
    case 3:
        Lab3_AverageCarSpeed();
        break;
    case 4:
        Lab4_ExpressionResult();
        break;
    case 5:
        Lab5_Pointers();
        break;
    case 6:
        Lab6_Arrays();
        break;
    case 7:
        Lab7_Strings();
        break;
    case 8:
        Lab8_Structs();
        break;
    default:
        printf("Incorrect number");
        break;
    }
    return 0;
}
//gcc Task_10.c Lab1.c Lab2.c Lab3.c Lab4.c Lab5.c Lab6.c Lab7.c Lab8.c -o Task_10, gcc * .c -o Task_10