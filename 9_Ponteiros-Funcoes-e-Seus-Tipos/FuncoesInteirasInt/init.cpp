#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

// Definindo que a funcao existe (para casos que a funcao estiver abaixo da que esta chamando)
int RetornaDez();
float RetornaQuebrado();

using namespace std;

int main() {

  // Chamando a Funcao
  int retorno = RetornaDez();
  cout << retorno << "\n";
  cout << "10 Retornado! \n";

  cout << RetornaQuebrado() << "\n";

  return 0;
}

int RetornaDez()
{
    int valor = 10;
    cout << "Retornando 10... \n";
  return valor;
}

float RetornaQuebrado()
{
  return 5.5;
}