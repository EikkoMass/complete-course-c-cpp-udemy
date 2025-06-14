#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM], int tamanho)
{
  for (int i = 0; i < tamanho; i++) {
    cout << "[" << i + 1 << "]  (" << vetor[i] << ")\n";
  }
}

int filaTamanho(int tras, int frente)
{
  return (tras - frente) + 1;
}

void filaConstrutor(int *frente, int *tras)
{
  *frente = 0;
  *tras = -1;
}

void filaEnfileirar(int fila[TAM], int valor, int *tras)
{
  if(*tras == TAM - 1)
  {
    cout << "Fila cheia\n";
    return;
  }

  (*tras)++;
  fila[*tras] = valor;
}


int main()
{
  int fila[TAM] = {0,0,0,0,0,0,0,0,0,0}, frente, tras, valor;

  filaConstrutor(&frente, &tras);

  filaEnfileirar(fila, 5, &tras);
  filaEnfileirar(fila, 6, &tras);
  filaEnfileirar(fila, 7, &tras);
  filaEnfileirar(fila, 8, &tras);
  filaEnfileirar(fila, 9, &tras);
  filaEnfileirar(fila, 10, &tras);
  filaEnfileirar(fila, 11, &tras);
  filaEnfileirar(fila, 12, &tras);
  filaEnfileirar(fila, 13, &tras);
  filaEnfileirar(fila, 14, &tras);
  filaEnfileirar(fila, 15, &tras);


  imprimeVetor(fila, filaTamanho(tras, frente));
}