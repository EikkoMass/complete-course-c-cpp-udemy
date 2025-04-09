#include <stdio.h>
#include <stdlib.h>

int main() {
  int a,b;

  scanf(" %d", &a);
  scanf(" %d", &b);

  if(a > b)
  {
    printf("A e maior que B");
  } else if(a < b)
  {
    printf("A e menor que B");
  } else 
  {
    printf("A e B sao iguais");
  }

  return 0;
}