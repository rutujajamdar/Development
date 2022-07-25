#include <stdio.h>
// #include<string.h>
int strlen(char str[])
{
    int iCnt = 0;
    int iLength = 0;
    for (iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        iLength++;
    }
    return iLength;
}
int strlenX(char str[])
{
    int iCnt = 0;
    int iLength = 0;
    while (str[iCnt] != '\0')
    {
        iCnt++;
        iLength++;
    }
    return iLength;
}
///////////////////////////////////////////////////////////
//
// Function name : strlenXXX
// Input : Address of character array
// Output : length of string in integer
// Description : it is used to calculate length of string
// Author :Rutuja Popat Jamdar
// Date :  06/03/2022
//
/////////////////////////////////////////////////////////////

int strlenXXX(const char *str)
{
    int iCnt = 0;

    while ((*str) != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}
int main()
{
    // char Arr[] ="Hello";
    char Arr[20] = {'\0'};
    int iRet = 0;
    printf("Enter your name \n");
    scanf("%s", Arr);
    printf("Enter number is :%s\n");
    iRet = strlenX(Arr);

    printf("String length is : %d\n", iRet);

    return 0;
}