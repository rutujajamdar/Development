#include<iostream>
using namespace std;
int Addition(int iNo1,int iNo2)
{
    int iAns=0;
    iAns=iNo1+iNo2;
    return iAns;
}

float Addition(float fNo1,float fNo2)
{
    float fAns=0;
    fAns=fNo1+fNo2;
    return fAns;
}

int main()
{
    int iValue1=10,iValue2=11,iRet=0;

    iRet=Addition(iValue1,iValue2);

    cout<<"Addition is : "<<iRet<<"\n";

    float a=10.6,b=11.5,fRet=0.0;

    fRet=Addition(a,b);

    cout<<"Addition is : "<<fRet<<"\n";

    return 0;
}