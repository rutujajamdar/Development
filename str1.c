#include <stdio.h>
#include <string.h>

int main()
{
  // First way
  char Arr[5] = {'a', 'b', 'c', 'd', '\0'};

  // Second Way
  char Brr[5] = "abcd";

  printf("%s\n", Arr);
  printf("%s\n", Brr);

  printf("%c\n", Arr[0]);
  printf("%c\n", Arr[1]);
  printf("%c\n", Arr[2]);
  printf("%c\n", Arr[3]);
  printf("Size of string is : %d\n", sizeof(Arr));
  printf("Size of string is : %d\n", sizeof(Brr));
  printf("length of String is : %d\n", strlen(Arr));
  printf("length of String is : %d\n", strlen(Brr));

  return 0;
}