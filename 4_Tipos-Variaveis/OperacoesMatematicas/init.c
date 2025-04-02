#include <stdio.h>
#include <stdlib.h>

void main() {

  // Definindo variaveis
  int a = 6, b = 4;

  printf("\nA soma de %d e %d = %d",a, b, a + b);
  printf("\nA subtracao de %d e %d = %d",a, b, a - b);
  printf("\nA divisao de %d e %d = %d",a, b, a / b);
  printf("\nA multiplicacao de %d e %d = %d",a, b, a * b);
  printf("\nO resto da divisao entre %d e %d = %d",a, b, a % b);
  printf("\nO valor absoluto de -3 = %d", abs(-3));


  getchar();
}