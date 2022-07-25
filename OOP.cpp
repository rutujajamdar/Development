#include <iostream>
using namespace std;

class Arithematic
{
public:
    // Characteristic
    int iNo1;
    int iNo2;

    // Behaviour

    Arithematic() // default Constructor
    {
        cout << "Inside default constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }

    Arithematic(int A, int B) // parametrised Constructor
    {
        cout << "Inside parametrised constructor\n";
        iNo1 = A;
        iNo2 = B;
    }

    ~Arithematic() // Destructor
    {

        cout << "Inside Destructor\n";
    }

    int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

    int subtraction()
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
    }
};
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    cout << "Enter First number : \n";
    cin >> iValue1;

    cout << "Enter Second number : \n";
    cin >> iValue2;

    Arithematic obj1;  // default Constructor
    Arithematic obj2(iValue1,iValue2); // parametrised Constructor

    iRet = obj2.Addition();
    cout<<"Addition is : "<<iRet<<endl;

    iRet=obj2.subtraction();
    cout<<"Subtraction is : "<<iRet<<endl;

    return 0;
}
