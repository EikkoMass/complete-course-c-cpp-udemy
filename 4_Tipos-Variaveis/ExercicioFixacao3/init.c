#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
  setlocale(LC_ALL, "");

  int a,b,c;

  scanf("%d %d %d", &a, &b, &c);

  printf("a multiplicacao dos valores %d, %d e %d: %d", a, b, c, a * b * c);
}