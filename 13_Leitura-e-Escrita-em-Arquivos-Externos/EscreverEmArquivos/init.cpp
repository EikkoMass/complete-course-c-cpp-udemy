#include <stdio.h>
#include <string.h>
#include <fstream>
 
using namespace std;
 
int main () {
 
    //Cria o objeto de arquivo
    ofstream arquivoDeSaida;
 
    //Abre o arquivo (cria caso não exista)
    arquivoDeSaida.open("text.txt", std::ios_base::app);
 
    //Escreve dentro do arquivo
    arquivoDeSaida << "Funcionou";
 
    //Fecha o arquivo / stream
    arquivoDeSaida.close();
 
    return 0;
}