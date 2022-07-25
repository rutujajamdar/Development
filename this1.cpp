#include <iostream>
using namespace std;

class Demo
{
public:
    int x, y;

    Demo(int a = 10, int b = 20) // Parametrised constructor with default argument
    {

        x = a;
        y = b;
    }
    // void fun(Demo *this,int no)
    void fun(int no)
    {
        cout << this << endl;
        cout << this->x << endl;
        cout << this->y << endl;
        cout << "Inside fun\n";
    }
};

int main()
{

    Demo obj(11, 21);
    obj.fun(51); // fun(&obj,51)  //fun(100,51);

    return 0;
}