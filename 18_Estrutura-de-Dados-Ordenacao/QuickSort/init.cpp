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

void quickSort(int vetor[TAM], int inicio, int fim)
{
  int 
    esq = inicio, 
    dir = fim, 
    meio = (int) ((esq + dir) / 2), 
    pivo = vetor[meio];
  

  while(dir > esq){
    while (vetor[esq] < pivo) esq++;
    while (vetor[dir] > pivo) dir--;    

    if(esq <= dir) {
      // Realiza uma troca
      int aux = vetor[esq];
      vetor[esq] = vetor[dir];
      vetor[dir] = aux;

      //Faz os limites laterais caminharem para o centro
      esq++;
      dir--;
    }

    imprimeVetor(vetor);
  }

  // Recursao para continuar ordenando
  if(inicio < dir) quickSort(vetor, inicio, dir);
  if(esq < fim) quickSort(vetor, esq, fim);

}

int main()
{
  int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

  quickSort(vetor, 0, TAM);

  imprimeVetor(vetor);

  return 0;
}