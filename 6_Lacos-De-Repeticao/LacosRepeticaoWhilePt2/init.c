#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i = 10;
  
  while(i > -1) {
    printf(" %d \n", i);
    i--;
  }

  i = 0;
  
  while(i != 10) {
    printf("Digite 10: ");
    scanf("%d", &i);
  }

  i = 0;

  while(i < 10) {
    printf("Digite um valor maior ou igual a 10: ");
    scanf("%d", &i);
  }

  int a, b;

  while(a < 10 || b < 10) {
    printf("Digite dois valores maiores que 10: \n");
    
    printf("Digite um valor para A: ");
    scanf("%d", &a);

    printf("Digite um valor para B: ");
    scanf("%d", &b);
  }

  i = 10;

  do {
    printf("Vai ser executado ao menos uma vez\n");
    printf("Mesmo que a condicao seja falsa.\n");
  } while(i < 5);

  printf("Fim");

  return 0;
}