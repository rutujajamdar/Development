#include <iostream>
using namespace std;

class Hello
{
public:
    void fun();
    void gun();
};

class Demo 
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

    // friend void Hello ::fun(); 
    // friend void Hello ::gun();
    friend class Hello;
};

void Hello ::fun() // friend
{
    Demo obj1;
    cout << obj1.i << "\n";
    cout << obj1.j << "\n";
    cout << obj1.k << "\n";
}
void Hello ::gun()
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
    hobj.gun();

    return 0;
}