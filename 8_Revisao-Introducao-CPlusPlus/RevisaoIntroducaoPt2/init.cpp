#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#define TAM 3

using namespace std;

int main() {
  
  int vetor[TAM] = {5, 10, 15}, cont;

  for(cont = 0; cont < TAM; cont++) cout << vetor[cont] << "\n";

  cont = 0;
  while (cont < 3) {
    cout << vetor[cont] << "\n";
    cont++;
  };

  int matriz[TAM][TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  for(int i = 0; i < TAM; i++)
  {
      for(int j = 0; j < TAM; j++)
      {
        cout << matriz[i][j] << " ";
      }
      cout << "\n";
  }

  return 0;
}