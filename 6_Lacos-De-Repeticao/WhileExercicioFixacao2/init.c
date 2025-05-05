#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i = 10, maximo;

  printf("Digite o  valor maximo: ");
  scanf("%d", &maximo);
  
  while(i <= maximo) {
    if(i % 2 == 0) printf(" %d \n", i);
    i++;
  }

  i = 10;

  while(i <= maximo) {
    printf(" %d \n", i);
    i+=2;
  }

  return 0;
}