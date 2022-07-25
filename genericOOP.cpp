#include<iostream>
using namespace std;

template <class T>
class Arithmatic
{
    public:
    T No1;
    T No2;

    Arithmatic(T a,T b)
    {
        No1=a;
        No2=b;
    }

    T Addition()
    {
        T Ans;
        Ans=No1+No2;
        return Ans;
    }

    T Substraction()
    {
        T Ans;
        Ans=No1-No2;
        return Ans;
    }

};
int main()
{
    int Ret=0;
     Arithmatic <int>iobj(10,11);
    Ret=iobj.Addition();
    cout<<"Addition is : "<<Ret<<"\n";

    Ret=iobj.Substraction();
    cout<<"Substraction is : "<<Ret<<"\n";

    Arithmatic <double>dobj(10.9,11.5);
   double dRet=dobj.Addition();
    cout<<"Addition is : "<<dRet<<"\n";

    dRet=dobj.Substraction();
    cout<<"Substraction is : "<<dRet<<"\n";

    return 0;
}