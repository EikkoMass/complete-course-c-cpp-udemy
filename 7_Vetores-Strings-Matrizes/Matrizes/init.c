#include <stdio.h>
#include <stdlib.h>
#define LINHA 2
#define COLUNA 3

int printMatriz(int matriz[LINHA][COLUNA])
{
  int i, j;

  for(i = 0; i < LINHA; i++)
  {
    for(j = 0; j < COLUNA; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}

int main() {

  int matriz[LINHA][COLUNA] = {{1, 2, 3}, {4, 5, 6}};

  printMatriz(matriz);

  for(int i = 0; i < LINHA; i++)
  {
    printf("Linha %d / Coluna %d: ", i + 1, COLUNA);
    scanf("%d", &matriz[i][COLUNA - 1]);
  }

  printMatriz(matriz);

  return 0;
}