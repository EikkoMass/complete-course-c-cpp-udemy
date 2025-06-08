#include <string>
#include <stdlib.h>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;


int buscaSimples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{
  int cont;

  // Percorre a lista em busca do valor
  for(cont = 0; cont < TAM; cont++)
  {
    if(vetor[cont] == valorProcurado)
    {
      *posicaoEncontrada = cont;
      return 1;
    }
  }

  return -1;
}


int main () {
 
  int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98};
  int valorProcurado, posicao, cont;

  // Imprime o vetor
  for(cont = 0; cont < TAM; cont++)
  {
    cout << vetor[cont] << " - ";
  }

  cout << "\nQual numero deseja encontrar? ";
  cin >> valorProcurado;

  if(buscaSimples(vetor, valorProcurado, &posicao) == 1)
  {
    cout << "Valor encontrado na posicao " << posicao << "!\n";
  } else
  {
    cout << "Valor nao encontrado!\n";
  }

  return 0;
}