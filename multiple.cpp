#include <iostream>
using namespace std;

class Base
{
    public :
    int i,j;

    Base()
    {
        cout<<"Base constructor\n";
    }
    ~Base()
    {
        cout<<"Base destructor\n";
    }
};

class Base1
{
    public :
    int a,b;
    Base1()
    {
        cout<<"Base1 constructor\n";
    }
    ~Base1()
    {
        cout<<"Base1 destructor\n";
    }
};

class Derived : public Base,Base1
{
    public :
    int k;
    Derived()
    {
        cout<<"Derived constructor\n";
    }
    ~Derived()
    {
        cout<<"Derived destructor\n";
    }

};

int main(){

    Derived dobj;

return 0;
}