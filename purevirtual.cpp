#include <iostream>
using namespace std;

class Base
{
public:
    int x, y;

    int Add(int a, int b)  // Concrete function
    {
        return a + b;
    }
    
    // Abstract
    virtual int Sub(int a, int b) = 0;  // ithe parents la sagale mahiti aahe pn becoz of some reason te im[liment nahi karu shakale]
};

class Derived : public Base
{
public:
    int i, j;
    // implimentation of sub function
    int Sub(int a,int b)
    {
        return a-b;
    }
    int Mult(int a,int b)
    {
        return a*b;
    }
};

int main()
{
    // Base bobj; // Not allowed
    // Derived dobj; 
    Base *bp =new Derived();
    int iRet =0;

    iRet =bp->Add(11,10);
    cout<<iRet<<'\n';

    iRet =bp->Sub(11,10);
    cout<<iRet<<'\n';

    // iRet =bp->Mult(11,10);
    // cout<<iRet<<'\n';

    return 0;
}