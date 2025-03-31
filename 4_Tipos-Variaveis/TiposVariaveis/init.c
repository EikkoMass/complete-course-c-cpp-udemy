#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
  // Permite usar acentos
  setlocale(LC_ALL, "");
  printf("Olá\n");

  // Lendo valor inteiro
  int a = 50;
  printf("o valor de A seria: %d\n", a);
  scanf("%d", &a);
  printf("o valor de A mudou para: %d\n", a);


  // Lendo valor quebrado
  float b = 5.5;
  printf("o valor de B seria: %f\n", b);
  scanf("%f", &b);
  printf("o valor de B mudou para: %f\n", b);

  // Lendo letra
  char c = 't';
  printf("o valor de C seria: %c\n", c);
  fflush(stdin);
  scanf(" %c", &c);
  printf("o valor de C mudou para: %c\n", c);
}