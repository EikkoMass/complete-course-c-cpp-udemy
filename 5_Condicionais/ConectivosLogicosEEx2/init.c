#include <stdio.h>
#include <stdlib.h>

int main() {

  int a, b, c;

  scanf(" %d %d %d", &a, &b, &c);

  if(a > 10 && b > 10 && c > 10)
  {
    printf("Todos sao maiores que 10\n");
  } else {
    printf("Um dos valores nao e maior que 10\n");
  }
  
  return 0;
}