#include <stdio.h>

int main()
{
  int No1 = 10;
  const int No2 = 10;

  No1++; // valid
  // No2++; //invalid

  No1 = 20; // reinitialize
  // No2 =20; //change in the value is not allowed

  return 0;
}