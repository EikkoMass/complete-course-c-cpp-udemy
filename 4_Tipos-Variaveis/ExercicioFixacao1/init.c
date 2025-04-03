#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "");

  float a, b;
  
  printf("Nota 1:");
  scanf(" %f", &a);

  printf("\nNota 2:");
  scanf(" %f", &b);

  printf("Media das notas %f e %f: %f", a, b, (a + b) / 2);
}