#include <stdio.h>
#include <math.h>

int main()
{
    int x=1, 
        y=3, 
        z=6;
    float arithmeticMeanAbs, 
          arithmeticMeanCube;

    arithmeticMeanAbs=(abs(x)+abs(y)+abs(z))/3.0;
    arithmeticMeanCube=(pow(x,3)+pow(y,3)+pow(z,3))/3.0;

    printf("%f\n", arithmeticMeanAbs);
    printf("%f\n",arithmeticMeanCube);
    return 0;
}