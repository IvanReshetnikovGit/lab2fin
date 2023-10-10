#include "massiveCalc.h"
#include "aCalculation.h"

int main()
{
    double x =0.48*12;
    double y = 0.47*12;
    double z = 1.32*12;

    aCalculation firsta;
    firsta.calculation(x,y,z);
    cout<<"b = "<<firsta.getB()<<endl;
    cout<<"a = "<<firsta.getA()<<endl;
    cout<<endl;

    vector<aCalculation> massive = massiveCalc(y,z);
    
    return 0;
}
