#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int i = 10;

  while(i >= 0)
  {
    printf("%d\n", i);
    i--;
  }

  i = 10;

  do
  {
    printf("%d\n", i);
    i--;
  } while (i >= 0);

  for(i = 10; i >= 0; i--)
  {
    printf("%d\n", i);
  }

  return 0;
}