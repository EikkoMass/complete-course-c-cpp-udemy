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

void shellSort(int vetor[TAM])
{
  int i, j, atual, h = 1;

  // De quantos em quantos sera o pulo entre analises
  while (h < TAM) h = 3 * (h + 1);
  while (h > 1) 
  {
    h /= 3;

    // Valor da direita sendo analisado
    for(i = h; i < TAM; i++)
    {
      atual = vetor[i];

      j = i - h;

      while(j >= 0 && atual < vetor[j])
      {
        // Reposiciona os elementos 1 posicao para frente
        vetor[j + h]  = vetor[j];

        // Faz o J andar para tras
        j-=h;
      }

      vetor[j + h] = atual;
      imprimeVetor(vetor);
    }
  }
}

int main()
{
  int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

  shellSort(vetor);

  imprimeVetor(vetor);

  return 0;
}