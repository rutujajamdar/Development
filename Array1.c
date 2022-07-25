#include<stdio.h>

int main()
{
    int no =11;
    // array defination
    int Arr[5];
    // Arr is one dimentinal array ,which contains 5 elements each of type integer
    
    // array member initialization
    //member by member initialization
    Arr[0] = 11;
    Arr[1] = 21;
    Arr[2] = 51;
    Arr[3]= 101;
    Arr[4] = 111;

    //member initialization list
    int Brr[5] = {11,21,31,101,111};

    int Crr[] = {11,21,31,101,111};

   // int Drr[];//Error - size kalat nahi
    return 0;
}