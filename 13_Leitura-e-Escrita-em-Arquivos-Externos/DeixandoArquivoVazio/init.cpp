#include <fstream>
#include <string>
#include <iostream>
 
using namespace std;
 
int main () {
 
    ofstream meuArquivo;
  
    meuArquivo.open("text.txt");
    meuArquivo << "";
    meuArquivo.close();
 
    return 0;
}