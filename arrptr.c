#include <stdio.h>

int main()
{
    // int arr[] = {10, 20, 30, 40, 50};
    // int *p = arr;
    float value = 3.14;
    float *p = &value;
    float *q = p;
    float ans = *p + *q;
    printf("%d\n", q);
    printf("%d\n", p);
    printf("%d\n", &p);
    printf("%f\n", ans);


    // printf("%d\n", arr);
    // printf("%d\n", &arr);
    // printf("%d\n", p);
    // printf("%d\n", *p);
    // printf("%d\n", sizeof(arr));
    // printf("%d\n", sizeof(arr[0]));
    // printf("%d\n", sizeof(p));
    // printf("%d\n", sizeof(*p));
}