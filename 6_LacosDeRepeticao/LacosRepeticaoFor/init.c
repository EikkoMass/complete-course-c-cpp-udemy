#include <stdio.h>
#include <stdlib.h>

int main()
{

  for (int i = 0; i <= 10; i++)
  {
    printf("%d\n", i);
  }

  for (int i = 10; i > 0; i-=3)
  {
    printf("%d\n", i);
  }

  return 0;
}