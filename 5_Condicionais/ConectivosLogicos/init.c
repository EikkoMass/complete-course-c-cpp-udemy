#include <stdio.h>
#include <stdlib.h>

int main() {

  int a, b;

  scanf(" %d", &a);
  scanf(" %d", &b);

  if(a > 17 && b > 17)
  {
    printf("&& OK\n");
  } else {
    printf("&& PROBLEMA\n");
  }

  if(a > 17 || b > 17)
  {
    printf("|| OK\n");
  } else {
    printf("|| PROBLEMA\n");
  }

  return 0;
}