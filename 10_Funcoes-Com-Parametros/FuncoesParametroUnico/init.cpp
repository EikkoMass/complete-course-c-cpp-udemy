#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

void mostraSucessor(int num)
{
  cout << "\nO sucessor de " << num << " seria " << ++num << "\n";
}

int retornaAntecedor(int num)
{
  return --num;
}

int main() {
  
  int a;

  cout << "Digite um valor: ";
  cin >> a;

  mostraSucessor(a);
  cout << "\nO antecedor de " << a << " seria " << retornaAntecedor(a) << "\n";


  return 0;
}