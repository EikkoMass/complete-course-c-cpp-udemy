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

void selectionSort(int vetor[TAM])
{
  int posicaoMenorValor, aux, i, j;

  // Recebe a posicao inicial para o menor valor
  for(i = 0; i < TAM; i++)
  {
    posicaoMenorValor = i;

    // Analisa os elementos na frente
    for(j = i + 1; j < TAM; j++)
    {

      // Caso encontre um valor menor na frente dos analisados
      if(vetor[j] < vetor[posicaoMenorValor])
      {
        posicaoMenorValor = j;
      }
    }

    if(posicaoMenorValor != i)
    {
      aux = vetor[i];
      vetor[i] = vetor[posicaoMenorValor];
      vetor[posicaoMenorValor] = aux;
      imprimeVetor(vetor);
    }
  }
}

int main()
{
  int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

  selectionSort(vetor);

  imprimeVetor(vetor);
}