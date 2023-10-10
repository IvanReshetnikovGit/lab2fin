   #include "massiveCalc.h"

    vector<aCalculation> massiveCalc(double y,double z)
    {
    int p=0;
    vector<aCalculation> massive;
    aCalculation massiveDod;
        for (double i = -1; i < 1; i+=0.2)
        {
            massiveDod.calculation(i,y,z);
            massive.push_back(massiveDod);
            cout<<"Element № "<<p+1<<" b = "<<massive[p].getB()<<endl; 
            cout<<"a = "<<massive[p].getA()<<endl;
            p++;
        }
        
        return massive;
    }