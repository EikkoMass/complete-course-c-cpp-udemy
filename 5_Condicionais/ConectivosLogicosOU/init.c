#include <stdio.h>
#include <stdlib.h>

int main () {
  
  int a, b;

  scanf(" %d %d", &a, &b);

  if(a > 10 || b > 10)
  {
    printf("Algum valor e maior que 10\n");
  } else {
    printf("Nenhum valor e maior que 10\n");
  }
  
  return 0;
}