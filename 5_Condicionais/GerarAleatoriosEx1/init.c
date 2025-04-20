#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getResultadoDadoAleatorio() {
  int min = 1, max = 6;
  return (rand() % max) + min;
}


int main() {

  srand(time(NULL));

  int a  = getResultadoDadoAleatorio();
  int b  = getResultadoDadoAleatorio();
  int c  = getResultadoDadoAleatorio();

  printf("a soma dos valores %d, %d e %d seria: %d\n", a, b, c, a + b + c);
  
  return 0;
}