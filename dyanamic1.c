#include <stdio.h>  // printf & scanf
#include <stdlib.h> //malloc

int main()
{
    int Arr[5]; // Static memory allocation
    int size = 0;
    int *ptr = NULL;

    printf("Enter number of element : ");
    scanf("%d", &size);

    // malloc =memory + allocation which returns address
    ptr = (int*)malloc(size * sizeof(int));    // step 1 : Allocate the memory
    if (ptr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory succesfully allocated\n");
    }

    // Step2 : Use the memory

    free(ptr);   // Step3 : Free the memory

    return 0;
}