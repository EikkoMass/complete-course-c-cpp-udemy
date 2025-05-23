#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#define TAMANHO 3

using namespace std;

void imprimeVetor(int *vetor,  int tamanho) {
  
  for (int i = 0; i < tamanho; i++)
  {
    cout << vetor[i] << "\n";
  }

}

void modificaVetor(int *vetor,  int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    vetor[i]++;
  }
}

int main() {
  
  int v[TAMANHO] = {1,2,3};

  imprimeVetor(v, TAMANHO);
  modificaVetor(v, TAMANHO);
  imprimeVetor(v, TAMANHO);

  return 0;
}