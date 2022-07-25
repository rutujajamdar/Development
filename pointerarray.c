#include <stdio.h>

int main()
{

   int Arr[5] = {10, 20, 30, 40, 50};

   //    int *p=NULL;

   //    int *q =NULL;

   int *p = &(Arr[0]);

   int *q = &(Arr[4]);
   printf("Number of elements between q and p : %d\n", q - p);
   printf("Value of P %d\n", p);
   p = p + 3;
   printf("Value of P %d\n", p);

   printf("Value of Q %d\n", q);
   q = q - 3;
   printf("Value of Q %d\n", q);

   return 0;
}