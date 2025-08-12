#include <stdio.h>
struct myStructure
{
  int Num1;
  int Num2;
};

int main()
{
  int sum;
  struct myStructure s1;

  s1.Num1 = 13;
  s1.Num2 = 2;

  sum = s1.Num1 + s1.Num2;

  printf("Sum = %d", sum);

  return 0;
}
