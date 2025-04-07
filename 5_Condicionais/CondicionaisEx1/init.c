#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);

  if(a + b < 10)
  {
    printf("%d + %d e menor que 10");
  } else 
  {
    printf("%d + %d e maior ou igual a 10");
  }

  return 0;
}