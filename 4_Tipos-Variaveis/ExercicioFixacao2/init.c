#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
  setlocale(LC_ALL, "");

  int a, b;
  
  printf("Nota 1:");
  scanf(" %d", &a);

  printf("\nNota 2:");
  scanf(" %d", &b);

  printf("O valor absoluto de diferenca entre %d e %d: %d", a, b, abs(a - b));
}