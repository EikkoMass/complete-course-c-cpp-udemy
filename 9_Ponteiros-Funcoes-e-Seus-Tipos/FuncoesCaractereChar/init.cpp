#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;


float RetornaLetra()
{
  return 120;
}

float RetornaLetra2()
{
  return 'x';
}


int main() {

  // Chamando a Funcao
  char letra = RetornaLetra();
  char letra2 = RetornaLetra2();
  cout << letra << "\n";
  cout << letra2 << "\n";

  return 0;
}