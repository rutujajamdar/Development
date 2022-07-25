#include <stdio.h>
#pragma pack(1)
struct Demo
{
  int i;

  int j;
};

int main()
{
  const struct Demo obj = {11, 21};
  // obj.i=11;
  // obj.j=21;
  printf("%d\n", obj.i);
  printf("%d\n", obj.j);

  return 0;
}
