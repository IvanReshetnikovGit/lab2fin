#pragma once
#include <cmath>
#include<iostream>
class aCalculation
{
private:
    double b;
    double a;

    void bCalc(double x,double y,double z);

public:
    double getA();
    double getB();
    void calculation(double x, double y, double z);

    aCalculation()
    {
        a=0;
        b=0;
    }
    

};

