#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

// Funcao que desenha borda
void DesenhaBorda()
{
  cout << " |---------------------------| \n";
  cout << " |            Sup!           | \n";
  cout << " |---------------------------| \n";
}

int main() {

  // Chamando a Funcao
  DesenhaBorda();
  DesenhaBorda();
  DesenhaBorda();

  return 0;
}