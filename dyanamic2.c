#include <stdio.h>  // printf & scanf
#include <stdlib.h> //malloc

int main()
{

    int *ptr = NULL;

    // malloc =memory + allocation which returns address
    ptr = (int *)malloc(5 * sizeof(int)); // step 1 : Allocate the memory

    ptr = (int *)realloc(ptr, 7 * sizeof(int));

    
    ptr = (int *)realloc(ptr, 3 * sizeof(int));

    free(ptr); // Step3 : Free the memory

    return 0;
}