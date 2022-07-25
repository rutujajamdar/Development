#include <iostream>
using namespace std;

class Demo
{
    public :
    int i;
    const int j;  // Constant characteristics

  
    Demo(int a,int b) : j(b) 
    {
      i=a;
    }
    void fun()
    {
        cout<<"Inside fun\n";
        i++;     // Allowed
        // j++;  Not allowed
    }

    // if the function is constant then iside that function we cannot change the class characteristics
    // b is a constant input argument
    void gun(int a,const int b) const  // Constant function/behaviour
    {
        int x=10;  // local variable
        const int y=20;  // constant local variable 

        cout<<"Inside gun\n";
        // i++;    // Not allowed
        // j++;  // Not allowed

        x++;  // Allowed
        // y++;  // not allowed

        a++;  // Allowed
        // b++;  // Not allowed
    }
};

int main()
{
    Demo obj1(11,12);
    
    const Demo obj2(11,21);

    obj1.fun();
    obj1.gun(10,20);

    // obj2.fun();  // error
    obj2.gun(10,20);



return 0;
}