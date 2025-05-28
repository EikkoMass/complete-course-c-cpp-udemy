#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;

int main() {
  
  int **matriz, linhas, colunas;

    cout << "Digite o tamanho de linhas: ";
    cin >> linhas;
    cout << "Digite o tamanho de colunas: ";
    cin >> colunas;
 
    cout << "Tamanho de Linhas:" << linhas << "\n";
    cout << "Tamanho de Colunas:" << colunas << "\n";

  // Alocando as linhas
  matriz = new int*[linhas];

  int i,j;

  // Alocando memoria para as colunas de cada linha
  for(i = 0; i < linhas; i++) matriz[i] = new int[colunas];
  
  for(i = 0; i < linhas; i++) {

    for(j = 0; j < colunas; j++) {
      matriz[i][j] = i + j;
      cout << matriz[i][j] << " ";
    }

    printf("\n");
  }

  // Libera a memoria
  free(matriz);

  return 0;
}