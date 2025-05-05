#include <stdio.h>
#include <stdlib.h>
// Definindo constantes no cabecalho
#define CONSTANTE 5
#define QUEBRADO 9.3
#define LETRA 'A'

int main() {
  const int LADO = 10;

  printf("%d \n", CONSTANTE);
  printf("%f \n", QUEBRADO);
  printf("%c \n", LETRA);
  printf("%d \n", LADO);
}