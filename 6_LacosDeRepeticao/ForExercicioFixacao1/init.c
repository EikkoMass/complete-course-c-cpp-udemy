#include <stdio.h>
#include <stdlib.h>

int main()
{
  int soma = 0;


  for (int i = 0; i < 10; i++)
  {
    printf("%d (%d)\n", soma, i);

    soma += i;
  }

  printf("Soma: %d\n", soma);

  return 0;
}