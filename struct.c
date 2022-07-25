#include <stdio.h>
// Structure Declaration
struct Demo
{
    int iNo;
    float fValue;
    int iValue;
    //    char cvalue;
    //    double dValue;
};
// no memory allocated yet

int main()
{
    // Structure object creation
    //  struct Demo obj2={34,10.11,51};

    struct Demo obj1; // actual memory allocated

    // Object intialization
    // obj1.iNo = 11;
    // obj1.fValue = 10.11;
    // obj1.iValue = 21;
    // obj.dValue=20.11;

    //  struct Demo *p = &obj1;
    struct Demo *p = NULL;

    p = &obj1;

    p->iNo = 11;
    p->fValue = 10.11;
    p->iValue = 21;

    //  printf("%d\n",obj1.iValue); //21
    //  printf("%d\n",sizeof(obj)); //12
    //  printf("%d\n",obj2.iValue);
    //  printf("Address of object is : %d", &obj1);
    printf("%d\n", obj1.iValue); // object
    printf("%d\n", p->iValue);   // pointer

    struct Demo Arr[4];

    Arr[0].iNo = 11;
    Arr[0].fValue = 20.11;
    Arr[0].iValue = 12;

    Arr[1].iNo = 19;
    Arr[1].fValue = 29.11;
    Arr[1].iValue = 178;

    Arr[2].iNo = 89;
    Arr[2].fValue = 2000.11;
    Arr[2].iValue = 190;

    Arr[3].iNo = 167;
    Arr[3].fValue = 29.11;
    Arr[3].iValue = 19;

    return 0;
}