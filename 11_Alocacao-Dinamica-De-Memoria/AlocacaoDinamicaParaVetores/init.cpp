#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int* alocaVetor(int tamanho)
{
  // E criado um ponteiro auxiliar
  int *aux;

  // Alocacao dinamica de memoria
  aux = (int*) malloc(tamanho * sizeof(int)); // tamanho * a quantidade de bytes que o tipo do vetor ocupa

  // Retorna o ponteiro que aponta para a primeira posicao de memoria do vetor alocado
  return aux;
}


int main() {
  
  int *vetor, tamanho;

  cout << "Digite um tamanho para o vetor: ";
  cin >> tamanho; // Lendo o tamanho do vetor
  cout << "\n";

  //Ponteiro recebe o endereco de memoria que foi alocado para o vetor
  vetor = alocaVetor(tamanho);
  
  for(int i = 0; i < tamanho; i++) vetor[i] = 10 * i;
  for(int i = 0; i < tamanho; i++) cout << vetor[i] << "\n";
  
  free(vetor); // Limpar espaco alocado na memoria para o vetor

  return 0;
}