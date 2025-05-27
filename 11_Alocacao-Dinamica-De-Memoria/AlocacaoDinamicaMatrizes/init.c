#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
  
  int **matriz, linhas, colunas;

  printf("Digite um valor para as linhas: ");
  scanf("%d", &linhas);

  printf("Digite um valor para as colunas: ");
  scanf("%d", &colunas);

  // Alocando as linhas
  matriz = (int**) malloc(linhas * sizeof(int *));

  int i,j;

  // Alocando memoria para as colunas de cada linha
  for(i = 0; i < linhas; i++) matriz[i] = (int*) malloc(colunas * sizeof(int));
  
  for(i = 0; i < linhas; i++) {

    for(j = 0; j < colunas; j++) {
      matriz[i][j] = i + j;
      printf("%d ", matriz[i][j]);
    }

    printf("\n");
  }

  // Libera a memoria
  free(matriz);

  return 0;
}