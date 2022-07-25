#include <stdio.h>  // printf & scanf
#include <stdlib.h> //malloc

int main()
{

    int *ptr = NULL;

   
    ptr = (int *)realloc(NULL, 7 * sizeof(int));  // it behaves like a malloc

    

    realloc(ptr,0); //  it behaves like free

    return 0;
}