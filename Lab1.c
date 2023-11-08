#include <stdio.h>
#include <string.h>
#include <math.h>
// Lab1 task1 var9
float Lab1_MathMeanAbs(int x, int y, int z)
{
    float arithmeticMeanAbs = (abs(x) + abs(y) + abs(z)) / 3.0;
    return arithmeticMeanAbs;
}
float Lab1_MathMeanCube(int x, int y, int z)
{
    float arithmeticMeanCube = (pow(x, 3) + pow(y, 3) + pow(z, 3)) / 3.0;
    return arithmeticMeanCube;
}