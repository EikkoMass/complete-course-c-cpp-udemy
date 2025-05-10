#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHAS 2
#define COLUNAS 2


int main() {

  setlocale(LC_ALL, "");
  int matriz[LINHAS][COLUNAS] = {{3, 4}, {5, 6}}, matrizInvertida[LINHAS][COLUNAS];

  for(int i = 0; i < COLUNAS; i++)
  {
      for(int j = 0; j < COLUNAS; j++)
    {
      printf("%d ", matriz[i][j]);
      matrizInvertida[LINHAS - 1 - i][j] = matriz[i][j];
    }
    
    printf("\n ");
  }

  for(int i = 0; i < COLUNAS; i++)
  {
      for(int j = 0; j < COLUNAS; j++)
    {
      printf("%d ", matrizInvertida[i][j]);
    }
    
    printf("\n ");
  }

  return 0;
}