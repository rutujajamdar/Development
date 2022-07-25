#include <iostream>
using namespace std;
class Demo
{

public:
    int i;

private:
    int j;

protected:
    int k;
};

class Hello : public Demo
{
public:
    int x;

private:
    int y;

protected:
    int z;

public:
    void fun()
    {
        cout << k << endl;
    }
};

main()
{
    Demo dobj;
    cout << sizeof(dobj) << endl;
    cout << dobj.i << endl; // A
    // cout<<dobj.j<<endl;  // NA
    // cout<<dobj.k<<endl;// NA

    Hello hobj;
    cout << sizeof(hobj) << endl;
    cout << hobj.x << endl; // A
    // cout<<hobj.y<<endl;// NA
    // cout<<hobj.z<<endl;// NA

    cout << hobj.i << endl; // A
    // cout<<hobj.j<<endl;// NA
    // cout<<hobj.k<<endl;  //NA
    hobj.fun();

    return 0;
}