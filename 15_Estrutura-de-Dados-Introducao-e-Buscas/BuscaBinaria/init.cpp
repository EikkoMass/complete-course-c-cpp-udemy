#include <string>
#include <stdlib.h>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;


int buscaBinaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{
  int 
    cont, 
    esquerda = 0,       // Limite da esquerda
    direita = TAM - 1,  // Limite da direita
    meio;               // O meio onde fica o cursor

  while(esquerda <= direita)
  {
    meio = (esquerda + direita) / 2;

    cout << "Esquerda: " << esquerda << "\n";
    cout << "Direita: " << direita << "\n";
    cout << "Meio: " << meio << "\n";
    cout << "\n";

    if(valorProcurado == vetor[meio]) 
    {
      *posicaoEncontrada = meio;
      return 1;
    }


    if(vetor[meio] < valorProcurado)
    {
      esquerda = meio + 1;
    } else {
      direita = meio - 1;
    }
  }

  return -1;
}

void imprimeVetor(int vetor[TAM])
{
  int cont;

  for(cont = 0; cont < TAM; cont++)
  {
    cout << vetor[cont] << " - ";
  }
}


int main () {
 
  int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98};
  int valorProcurado, posicao, cont;

  // Imprime o vetor
  imprimeVetor(vetor);

  cout << "\nQual numero deseja encontrar? ";
  cin >> valorProcurado;

  if(buscaBinaria(vetor, valorProcurado, &posicao) == 1)
  {
    cout << "Valor encontrado na posicao " << posicao << "!\n";
  } else
  {
    cout << "Valor nao encontrado!\n";
  }

  return 0;
}