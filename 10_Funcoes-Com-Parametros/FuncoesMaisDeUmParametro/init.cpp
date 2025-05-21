#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int retornaSoma(int num1, int num2) {
  return num1 + num2;
}

void funcaoQueMostraSoma(int num1, int num2)
{
  cout << "A soma entre " << num1 << " e " << num2 << " seria: " << retornaSoma(num1, num2) << "\n";
}

int main() {
  
  int a = 5, b = 7;

  funcaoQueMostraSoma(a, b);

  return 0;
}