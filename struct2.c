#include <stdio.h>
#pragma pack(1)
struct Demo
{
    int i;
    char ch;
    char c; // 16 byte
    float f;
    int j;
    // char c; //20byte
};

int main()
{
    //     struct Demo obj;
    printf("%d\n", sizeof(struct Demo));
    return 0;
}
