#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM])
{
  for (int i = 0; i < TAM; i++) {
    cout << " |" << vetor[i] << "| ";
  }

  cout << "\n";
}

void insertionSort(int vetor[TAM])
{
  int i, j, atual;

  // Valor da direita sendo analisado
  for(i = 1; i < TAM; i++)
  {
    atual = vetor[i];

    j = i - 1;

    while(j >= 0 && atual < vetor[j])
    {
      // Reposiciona os elementos 1 posicao para frente
      vetor[j + 1]  = vetor[j];

      // Faz o J andar para tras
      j--;
    }

    vetor[j + 1] = atual;
    imprimeVetor(vetor);
  }
}

int main()
{
  int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

  insertionSort(vetor);

  imprimeVetor(vetor);
}