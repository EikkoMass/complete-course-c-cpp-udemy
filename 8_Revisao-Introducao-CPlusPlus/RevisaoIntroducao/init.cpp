#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

/**
 * Para rodar arquivos C usa-se `gpp nome-do-arquivo.c`
 * Para rodar arquivos C++ usa-se `g++ nome-do-arquivo.cpp`
*/


int main() {
  
  int a;
  double b;
  char c;
  bool d;

  a = 10;
  b = 2.8;
  c = 'w';
  d = true;

  // Escrevendo variaveis na tela (em C)
  // printf("\n%d, \n%.2f, \n%c, \n%d \n", a, b, c, d);
  
  // Escrevendo na tela (em C++)
  cout << "Valor: " << a << "\n";

  // Lendo valores (em C)
  // scanf("%d", &a);
  // scanf("%f", &b);
  // scanf("%c", &c);
  // scanf("%d", &d);

  // Lendo valores (em C++)
  cin >> a;
  cout << "Valor: " << a << "\n";
  
  return 0;
}