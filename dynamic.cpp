#include<iostream>
using namespace std;

class Demo
{
    public : 
    int x;
    int y;
    Demo()
    {
        cout<<"Inside default constructor\n";
    }
    void fun()
    {
        cout<<"Inside fun\n";
    }
    ~Demo()
    {
        cout<<"Inside destructor\n";
    }
};
int main()
{
    Demo obj; // Static object creation

    Demo *ptr =NULL;
    ptr =new Demo;  // Dynamic object creation

    obj.fun(); // Direct accessing operator
    ptr->fun(); // Indirect accessing operator

    delete ptr;

    return 0;
}