#include "aCalculation.h"
#include "Factorial.h"
void aCalculation::calculation(double x, double y, double z)
{
    double a1;
    bCalc(x,y,z);
    a1 = 2 * cos(pow(fabs(pow(x, 2) - b / 6), 1.0 / 3)) / (1 + x * b + pow(sin(pow(y, 3)), 2));
    a =a1 + pow(log(pow(fabs((x + 1) / z), 1.2)), 3);
}
void aCalculation::bCalc(double x,double y,double z)
{
    b = 1 - x/Factorial(1) + pow(y, 2) / Factorial(3) + pow(z, 3) / Factorial(5) + pow(sin(x - z), 2) / (pow(fabs(y), 1.23) + z);
}
double aCalculation::getA()
{
    return a;    
}
double aCalculation::getB()
{
    return b;
}