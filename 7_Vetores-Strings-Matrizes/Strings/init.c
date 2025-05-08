#include <stdio.h>
#include <stdlib.h>


int main() {

  char palavra1[] = "boi";
  char palavra2[5] = "bala";
  char palavra3[] = { 'a', 'b', 'c', 'd', '\0' };
  char palavra4[5] = { 'f', 'o', 'n', 'e', '\0' };
  
  
  // Imprimindo
  printf("%s \n", palavra1);

  //Lendo
  printf("Digite uma palavra com ate 4 letras: ");
  getchar(); // fflush nao funciona
  scanf("%s", &palavra2);

  // Lendo com espacos
  char fruta[255];
  getchar();
  printf("\nDigite o nome de uma fruta: ");
  fgets(fruta, sizeof(fruta), stdin);

  //Imprimindo a fruta lida
  printf("\nFruta lida: ");
  puts(fruta);

  return 0;
}