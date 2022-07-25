#include <iostream>
using namespace std;

class Hello
{
public:
    void fun();
};

class Demo // house
{
    // 3 characteristics
public:
    int i;

protected:
    int j;

private:
    int k;

public:
    // 1 behaviour
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }

    friend void Hello ::fun(); 
};

void Hello ::fun() // friend
{
    Demo obj1;
    cout << obj1.i << "\n";
    cout << obj1.j << "\n";
    cout << obj1.k << "\n";
}

main()
{

    Hello hobj;
    hobj.fun();

    return 0;
}