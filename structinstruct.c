#include <stdio.h>

// First way
// struct Demo
// {
//     int i;
//     int j;
// };
// struct Hello
// {
//     float f;
//     int no;
//     struct Demo dobj;
// };

// Second Way
struct Hello
{
    float f;
    int no;
    struct Demo
    {
        int i;
        int j;
    }dobj1,dobj2;
};

int main()
{
    struct Hello hobj;
    // struct Demo dobj;
    // hobj.f = 10.11;
    // hobj.no = 11;
    // hobj.dobj.i = 21;
    // hobj.dobj.j = 51;

    // printf("%d\n", hobj.dobj.i);
    printf("%d\n", sizeof(hobj));
    return 0;
}
