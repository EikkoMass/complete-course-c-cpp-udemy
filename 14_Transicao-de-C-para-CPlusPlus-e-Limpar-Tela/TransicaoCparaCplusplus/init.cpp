#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;
 
void limpaTela() {
  system("clear");
}

int main () {
 
    
    int a = 10;

    // C
    printf("O valor %d e maior que 0\n", a);

    limpaTela();
    
    // C++
    cout << "O valor " << a << " e maior que 0\n";

    // C
    char palavra[3];
    palavra[0] = 'g';
    palavra[1] = 'o';
    palavra[2] = 'l';

    for (int i = 0; i < 3; i++) printf("%c", palavra[i]);
    printf("\n", a);

    // C++
    string outraPalavra = "gol";
    cout << outraPalavra << "\n";

    return 0;
}