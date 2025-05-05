#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool betweenFiveAndTen(int number)
{
  return number > 5 && number < 10;
}

int main()
{

  int a = 0, b = 0;
  
  while(!betweenFiveAndTen(a) || !betweenFiveAndTen(b)) {
    printf("Digite um valor entre 5 a 10. \n");

    printf("Digite o  valor A: ");
    scanf("%d", &a);
  
    printf("Digite o  valor B: ");
    scanf("%d", &b);
  }

  printf("Soma: %d\n", a + b);

  return 0;
}