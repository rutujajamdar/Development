#include <stdio.h>

struct Demo
{
    // int Arr[3];
    // float Brr[2];

    int *ip;
    float *fp;
};

int main()
{
    struct Demo obj;

    // obj.Arr[0]=10;
    // obj.Arr[1]=20;
    // obj.Arr[2]=30;

    // obj.Brr[0]=56.9;
    // obj.Brr[1]=34.2;

    // printf("%d",obj.Arr[2]);

    int no = 11;
    float f = 3.10;

    obj.ip = &no;
    obj.fp = &f;

    printf("%d", *(obj.ip));
    printf("%f", *(obj.fp));

    return 0;
}
