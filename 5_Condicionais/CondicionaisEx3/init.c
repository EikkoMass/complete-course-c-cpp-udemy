#include <stdio.h>
#include <stdlib.h>

int main() {

  int a;

  scanf(" %d", &a);

  if(a % 2 == 0)
  {
    printf("%d seria um numero par\n", a);
  } else {
    printf("%d seria um numero impar\n", a);
  }

  return 0;
}