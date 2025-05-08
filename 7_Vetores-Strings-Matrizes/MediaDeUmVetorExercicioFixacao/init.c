#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "");

  int tamanho;

  printf("Qual o tamanho do vetor? ");
  scanf("%d", &tamanho);

  float vetor[tamanho];

  for(int i = 0; i < tamanho; i++)
  {
    printf("Digite o valor %d: ", i+1);
    scanf("%f", &vetor[i]);
  }

  float media;

  for(int i = 0; i < tamanho; i++)
  {
    printf("\n vetor %d = %.2f", i + 1, vetor[i]);
    media += vetor[i];
  }

  printf("\n media dos valores = %f", media / tamanho);


  return 0;
}