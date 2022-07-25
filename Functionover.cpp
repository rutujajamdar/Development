#include <iostream>
using namespace std;

class Demo
{
public:
    // Name mangling
    // Addition@2ii --> compile time name of function
    int Adddition(int iNo1, int iNo2) // 1000
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

    // Addition@3iii
    int Adddition(int iNo1, int iNo2, int iNo3) // 2000
    {
        int iAns = 0;
        iAns = iNo1 + iNo2 + iNo3;
        return iAns;
    }

    // Addition@4iiii
    int Adddition(int iNo1, int iNo2, int iNo3, int iNo4) // 3000
    {
        int iAns = 0;
        iAns = iNo1 + iNo2 + iNo3 + iNo4;
        return iAns;
    }
};

int main()
{
    Demo obj;
    int iRet = 0;

    // PUSH 10
    // PUSH 11
    // CALL 1000
    iRet = obj.Adddition(10, 11); // obj.Addition@2ii(10,11)
    cout << iRet << endl;

    // PUSH 10
    // PUSH 11
    // PUSH 21
    // CALL 2000
    iRet = obj.Adddition(10, 11, 21); // obj.Addition@3iii(10,11,21)
    cout << iRet << endl;

    // PUSH 10
    // PUSH 11
    // PUSH 21
    // PUSH 51
    // CALL 3000
    iRet = obj.Adddition(10, 11, 21, 51); // obj.Addition@4iiii(10,11,21,51)
    cout << iRet << endl;

    return 0;
}

/*

  // Allowed

  // Changing no of arguments
        void fun(int,int);
        void fun(int,int,int);

  // Changing datatype of argumrnt

        void fun(int,int);
        void fun(double,double);

  // Changing sequence of argument

        void fun(char,int,float);
        void fun(int,float,char);

   // Not Allowed
   
  // Changing return value
        int fun();
        float fun();









*/