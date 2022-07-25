#include <iostream>
using namespace std;

class Demo
{
public:
    int x, y;

    Demo() // default constructor
    {
        cout << "Inside default constructor\n";
        x = 0;
        y = 0;
    }
    Demo(int i, int j) // Parametrised constructor
    {
        cout << "Inside Parametrised constructor\n";
        x = i;
        y = j;
    }
    Demo(Demo &ref) // Copy constructor
    {
        cout << "Inside Copy constructor\n";
    }
    ~Demo()
    {
        cout << "Inside destructor\n";
    }
};

int main()
{
    Demo obj2(51, 101);
    Demo obj1(11, 21);

    cout << "size of object :" << sizeof(obj1) << endl;
    cout << "size of object :" << sizeof(obj2) << endl;

    cout << "Value of x in obj1 : " << obj1.x << endl;
    cout << "Value of x in obj2 : " << obj2.x << endl;

    obj1.x++;

    cout << "Value of x in obj1 : " << obj1.x << endl;
    cout << "Value of x in obj2 : " << obj2.x << endl;

    return 0;
}