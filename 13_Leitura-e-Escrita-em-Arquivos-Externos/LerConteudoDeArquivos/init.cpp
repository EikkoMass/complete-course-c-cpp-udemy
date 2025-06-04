#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
 
using namespace std;
 
int main () {
 
    // Cursor que ira percorrer cada letra
    /** Se for char, traz o caractere, se for int traz o codigo do caractere */
    int c;
    char conteudoTexto[255];

    // Arquivo a ser lido
    FILE *file;

    // Abre o arquivo no diretorio escolhido
    file = fopen("text.txt", "r");

    // Se o arquivo foi encontrado
    if(file)
    {
      // Contador
      int cont = 0;

      //  Enquanto encontra letras (ate o fim do arquivo)
      while((c = getc(file)) != EOF)
      {
        cout << c;
        conteudoTexto[cont] = c;
        cont++;
      }

      cout << "\n";

      // Imprimindo conteudo lido
      for(int i = 0; i < strlen(conteudoTexto) - 2; i++)
      {
        cout << conteudoTexto[i];
      }
      
      // Fecha o arquivo
      fclose(file);
    }
 
    return 0;
}