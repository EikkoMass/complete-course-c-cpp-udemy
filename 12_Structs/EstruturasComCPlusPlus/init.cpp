#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

// Struct para frutas
struct fruta {
  string cor;
  string nome;
};

int main() {
  
  // Criando um ponteiro para o struct criado
  fruta *fruta1 = new fruta;


  // Modificando valores
  fruta1 -> nome = "Banana";
  fruta1 -> cor = "Amarela";

  // Exibindo valores
  cout << "Fruta: " << fruta1 -> cor << ", Nome: " << fruta1 -> nome << "\n";


  int qtdeFrutas = 2;

  // Criando uma lista de frutas
  fruta *frutas = new fruta[qtdeFrutas];

  frutas[0].nome = "Vermelho";
  frutas[0].cor = "Morango";

  frutas[1].nome = "Verde";
  frutas[1].cor = "Kiwi";

  // Percorrendo e exibindo

  for(int i = 0; i < qtdeFrutas; i++) cout << "Fruta: " << frutas[i].nome << ", Nome: " << frutas[i].cor << "\n";

  return 0;
}