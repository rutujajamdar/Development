#include <stdio.h>

void demo()
{ // memory allocation
    auto int A = 10;
    A++;
    printf("%d\n", A);
} // memory deallocation

void hello()
{
    static int A = 10;
    // memory allocated for static storage class in
    // data section where global variables are store
    A++;
    printf("%d\n", A);
}

int main()
{
    demo(); // function call

    demo(); // function call

    hello(); // function call

    hello(); // function call
    return 0;
}