#include <fstream>
#include <string>
#include <iostream>
 
using namespace std;
 
int main () {
 
    // Arquivo a ser lido
    ifstream input("text.txt");

    // String que recebera o texto lido
    string textoLido;

    // Passa o texto do arquivo para a string
    for(string line; getline(input, line);)
    {
      textoLido += line + "\n";
    }

    // Mostrar o conteudo
    cout << textoLido;
  
 
    return 0;
}