#include <stdio.h>
#include <stdlib.h>


int main() {

  int a, b, type;

  scanf(" %d %d", &a, &b);

  printf("Calculo           \n");
  printf("1 - Somar         \n");
  printf("2 - Subtrair      \n");
  printf("Escolha uma opcao:\n");

  scanf("%d", &type);


  switch(type)
  {
    case 1:
      printf(" %d \n",  a + b);
      break;
    case 2:
      printf(" %d \n", a - b);
      break;
    default:
      printf("Opcao invalida!\n");
      break;
  }
  
  return 0;
}