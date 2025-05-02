#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  for(int i = 10; i < 20; i++)
  {
    if(i % 2 == 0)
      printf("%d seria par\n", i);
    else
      printf("%d seria impar\n", i);
  }

  return 0;
}