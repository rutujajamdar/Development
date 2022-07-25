#include<iostream>
using namespace std;

template<class T>
T Addition(T iNo1,T iNo2)
{
    T iAns=0;
    iAns=iNo1+iNo2;
    return iAns;
}

int main()
{
    int iValue1=10,iValue2=11,iRet=0;
    iRet=Addition(iValue1,iValue2);
    cout<<"Addition is : "<<iRet<<"\n";

    float a=10.6,b=11.5,fRet=0.0;
    fRet=Addition(a,b);
    cout<<"Addition is : "<<fRet<<"\n";

    double d1=16.6,d2=18.5,dRet=0.0;
    dRet=Addition(d1,d2);
    cout<<"Addition is : "<<dRet<<"\n";
    


    return 0;
}