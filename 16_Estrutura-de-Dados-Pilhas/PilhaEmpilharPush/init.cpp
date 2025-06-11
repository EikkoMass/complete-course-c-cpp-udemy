#include <string>
#include <stdlib.h>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;


void imprimeVetor(int vetor[TAM])
{
  for (int i = 0; i < TAM; i++) {
    cout << vetor[i] << " - ";
  }
  cout << "\n";
}

void pilhaPush(int pilha[TAM], int valor, int *topo)
{
  // Caso nao possa colocar mais valores 
  if(*topo == TAM - 1)
  {
    cout << "Pilha cheia\n";
  } else {
    (*topo)++;
    // cout << *topo << "\n";
    pilha[*topo] = valor;
  }
}


int main () {
  
  int 
    pilha[TAM] = {0,0,0,0,0,0,0,0,0,0}, 
    topo = -1;       // Topo da pilha

  imprimeVetor(pilha);

  pilhaPush(pilha, 5, &topo);
  pilhaPush(pilha, 17, &topo);
  pilhaPush(pilha, 25, &topo);
  pilhaPush(pilha, 47, &topo);
  pilhaPush(pilha, 35, &topo);
  pilhaPush(pilha, 27, &topo);
  pilhaPush(pilha, 51, &topo);
  pilhaPush(pilha, 72, &topo);
  pilhaPush(pilha, 56, &topo);
  pilhaPush(pilha, 77, &topo);
  pilhaPush(pilha, 66, &topo); // Registro nro 11 excede o tamanho da pilha

  imprimeVetor(pilha);

  return 0;
}