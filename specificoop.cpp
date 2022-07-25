#include<iostream>
using namespace std;

class Arithmatic
{
    public:
    int iNo1,iNo2;

    Arithmatic(int a,int b)
    {
        iNo1=a;
        iNo2=b;
    }

    int Addition()
    {
        int iAns=0;
        iAns=iNo1+iNo2;
        return iAns;
    }

     int Substraction()
    {
        int iAns=0;
        iAns=iNo1-iNo2;
        return iAns;
    }

};
int main()
{
    int Ret=0;
    Arithmatic obj(10,11);
    Ret=obj.Addition();
    cout<<"Addition is : "<<Ret<<"\n";

    Ret=obj.Substraction();
    cout<<"Substraction is : "<<Ret<<"\n";

    return 0;
}