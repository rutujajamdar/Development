#include<stdio.h>

void DisplayI(int no)
{
    int i=1;
    while(i<=no)
    {
        printf("*");
        i++;
    }
}
void DisplayR(int no)
{
    static int i=1;
    if(i<=no)
    {
        printf("*\n");
        i++;
        DisplayR(no);  // Recursive call
    }
}
int main()
{
    int iValue=3;
    DisplayR(iValue);
    return 0;
}