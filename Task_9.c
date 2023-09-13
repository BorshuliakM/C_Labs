#include <stdio.h>
#include <math.h>

int main()
{
    int x=1, y=3, z=6;
    float arithmeticMeanAbs, arithmeticMeanCube;

    arithmeticMeanAbs=(abs(x)+abs(y)+abs(z))/3.0;
    arithmeticMeanCube=(pow(x,3)+pow(y,3)+pow(z,3))/3.0;

    printf("\nСума середнього арифметичного модулів %f", arithmeticMeanAbs);
    printf("\nСума середнього арифметичного кубів %f", arithmeticMeanCube);
    return 0;
}
