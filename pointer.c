#include <stdio.h>

int main()
{

    char cValue = 'M';
    char *cPtr = &cValue;

    int iValue = 21;
    int *iPtr = &iValue;

    float fValue = 10.11;
    float *fPtr = &fValue;

    double dValue = 20.11;
    double *dPtr = &dValue;

    printf("%c\n",*cPtr);
    
    printf("%d\n",&cValue);
    
    printf("%d\n",cPtr);

     printf("%d\n",sizeof(cPtr));
     printf("%d\n",sizeof(*cPtr));
     printf("%d\n",sizeof(cValue));



    return 0;
}