#include <string>
#include <stdlib.h>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

// Cria uma pilha / a limpa
void pilhaConstrutor(int pilha[TAM], int *topo)
{
  *topo = -1; // -1 para indicar pilha vazia / nova pilha
  for (int i = 0; i < TAM; i++)
  {
    cout << pilha[i] << " - ";
  } 
}

// Retorna tamanho
int pilhaTamanho(int topo)
{
  return ++topo;
}

// Caso pilha vazia
bool pilhaVazia(int topo)
{
  return topo == -1;
}

// Caso pilha cheia
bool pilhaCheia(int topo)
{
  return topo == TAM - 1;
}

// Retorna o ultimo valor adicionado
int pilhaGet(int pilha[TAM], int *topo)
{
  if(pilhaVazia(*topo))
  {
    cout << "A pilha esta vazia";
    return 0;
  } else {
    return pilha[*topo];
  }
}

void imprimeVetor(int vetor[TAM], int topo)
{
  for (int i = 0; i < TAM; i++) {
    cout << vetor[i] << " - ";
  }
  cout << " Topo: " << topo << " | Tamanho: " << pilhaTamanho(topo) << "\n";
}

void pilhaPush(int pilha[TAM], int valor, int *topo)
{
  // Caso nao possa colocar mais valores 
  if(pilhaCheia(*topo))
  {
    cout << "Pilha se encontra cheia!\n";
  } else {
    (*topo)++;
    // cout << *topo << "\n";
    pilha[*topo] = valor;
  }
}

void pilhaPop(int pilha[TAM], int *topo)
{
  if(pilhaVazia(*topo))
  {
    cout << "Pilha ja se encontra vazia!\n";
    return;
  } else {
    cout << "Valor removido: " << pilha[*topo] << "\n";
    pilha[*topo] = 0;
    (*topo)--;
  }
}


int main () {
  
  int 
    pilha[TAM] = {0,0,0,0,0,0,0,0,0,0}, topo;

  pilhaConstrutor(pilha, &topo);

  imprimeVetor(pilha, topo);

  pilhaPop(pilha, &topo);

  pilhaPush(pilha, 5, &topo);
  cout << "Ultimo valor da pilha: " << pilhaGet(pilha, &topo) << "\n";

  pilhaPush(pilha, 17, &topo);
  pilhaPush(pilha, 25, &topo);
  pilhaPush(pilha, 47, &topo);
  pilhaPush(pilha, 35, &topo);
  pilhaPush(pilha, 27, &topo);
  pilhaPush(pilha, 51, &topo);
  pilhaPush(pilha, 72, &topo);

  pilhaPush(pilha, 56, &topo);
  cout << "Ultimo valor da pilha: " << pilhaGet(pilha, &topo) << "\n";

  pilhaPush(pilha, 77, &topo);
  pilhaPush(pilha, 66, &topo); // Registro nro 11 excede o tamanho da pilha

  pilhaPop(pilha, &topo);
  imprimeVetor(pilha, topo);

  pilhaPop(pilha, &topo);
  imprimeVetor(pilha, topo);

  pilhaPop(pilha, &topo);
  imprimeVetor(pilha, topo);

  pilhaPop(pilha, &topo);
  imprimeVetor(pilha, topo);

  pilhaPop(pilha, &topo);
  imprimeVetor(pilha, topo);

  return 0;
}