#include <stdio.h>
#include <stdlib.h>

int main()
{
  int inicial, final, passo;

  printf("Digite o valor inicial: ");
  scanf("%d", &inicial);


  printf("Digite o valor final: ");
  scanf("%d", &final);


  printf("Digite o valor de passo: ");
  scanf("%d", &passo);

  for (int i = inicial; i <= final; i+=passo)
  {
    printf("%d\n", i);
  }

  return 0;
}