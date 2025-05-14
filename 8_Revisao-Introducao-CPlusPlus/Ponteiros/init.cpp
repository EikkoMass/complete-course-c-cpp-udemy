#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  
  int a = 20;

  // Imprimindo um valor
  cout << "Valor de a: " << a << "\n";
  cin >> a;
  cout << "Valor de a: " << a << "\n";

  //Imprimindo o endereco da variavel a
  cout << "endereco de memoria da variavel a: " << &a << "\n";

  // Variaveis armazenam valores
  int b = 10;
  // Ponteiros armazenam posicoes da memoria

  // Ponteiro recebendo posisao na memoria da variavel b
  int *ponteiro = &b;

  b = 40;

  cout << "Valor de b: " << *ponteiro << "\n";


  return 0;
}