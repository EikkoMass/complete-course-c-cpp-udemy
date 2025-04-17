#include <stdio.h>
#include <stdlib.h>

int swCNum()
{
  int a;

  printf("Menu              \n");
  printf("1 - Expresso      \n");
  printf("2 - Cappuccino    \n");
  printf("3 - Macchiato     \n");
  printf("Escolha uma opcao:\n");


  scanf(" %d", &a);

  switch(a)
  {
    case 1:
      printf("Expresso escolhido. \n");
      break;
    case 2:
      printf("Cappuccino escolhido. \n");
      break;
    case 3:
      printf("Macchiato escolhido. \n");
      break;
    default:
      printf("Opcao invalida!\n");
      break;
  }

  return 0;
}

int swCCh()
{
  char a;

  printf("Menu              \n");
  printf("a - Expresso      \n");
  printf("b - Cappuccino    \n");
  printf("c - Macchiato     \n");
  printf("Escolha uma opcao:\n");


  scanf(" %c", &a);

  switch(a)
  {
    case 'a':
      printf("Expresso escolhido. \n");
      break;
    case 'b':
      printf("Cappuccino escolhido. \n");
      break;
    case 'c':
      printf("Macchiato escolhido. \n");
      break;
    default:
      printf("Opcao invalida!\n");
      break;
  }

  return 0;
}

int main() {
  swCNum();
  //swCCh();
  return 0;
}