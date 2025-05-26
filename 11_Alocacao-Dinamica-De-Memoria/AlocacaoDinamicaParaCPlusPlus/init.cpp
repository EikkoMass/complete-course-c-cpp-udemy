#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

int main() {
  
  int tamanho, cont;

  // Lendo o tamanho
  cout << "Digite o tamanho: ";
  cin >> tamanho;

  // Criando um ponteiro (que recebe o novo vetor vazio)
  int *vetor = new int[tamanho];

  // Modificando e imprimindo valores
  for(cont = 0; cont < tamanho; cont++) {

    vetor[cont] = cont;
    cout << vetor[cont] << "\n";
  }

  free(vetor);
  
  return 0;
}