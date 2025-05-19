#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;


void limpaTela()
{
  //system("CLS"); // Windows
  system("clear"); // Linux
  //cout << "\033[2J\033[1;1H"; // Ambos
}


int main() {

  int a;
  cout << "Digite um valor para 'a': ";
  cin >> a;

  limpaTela();

  cout << "Valor digitado foi " << a << ". \nFim do Programa!\n";

  return 0;
}