#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;


bool retornaBooleano()
{
  return true;
}


int main() {

  string retorno = retornaBooleano() ? "verdadeiro" : "falso";
  cout << retorno << "\n";

  return 0;
}