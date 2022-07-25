#include <iostream>
using namespace std;

class Base
{
public:
    int x, y;

    Base()
    {
        cout << "Inside base constructor\n";
    }
    ~Base()
    {
        cout << "Inside Base destructor\n ";
    }

    void fun()
    {
        cout << "Inside base fun\n";
    }
};

class Derived : public Base     // Derived is a class which is Derived from base class
{
public:
    int i, j;

    Derived()
    {
        cout << "Inside Derived constructor\n";
    }
    ~Derived()
    {
        cout << "Inside Derived destructor\n ";
    }
    void gun()
    {
        cout << "Inside Derived gun\n";
    }
};

int main()
{
    Derived obj;

    cout<<sizeof(Base)<<endl;
    
    cout<<sizeof(Derived)<<endl;
    obj.fun();
    obj.gun();

    return 0;
}