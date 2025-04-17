#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b;

  scanf(" %d %d", &a, &b);

  int soma = a + b;

  if((soma > 0 && soma < 10) || soma % 2 == 0)
  {
    printf("Esta entre 0 e 10 ou foi par");
  }

  return 0;
}