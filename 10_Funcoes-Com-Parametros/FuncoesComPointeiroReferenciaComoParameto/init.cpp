#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int retornaComMaisDez(int num) {
  return num + 10;
}

void retornaComMaisDez(int *num) {
  *num += 10;
}

int main() {
  
  int a = 5;

  cout << a << "\n";

  a = retornaComMaisDez(a);

  cout << a << "\n";

  retornaComMaisDez(&a);

  cout << a << "\n";

  return 0;
}