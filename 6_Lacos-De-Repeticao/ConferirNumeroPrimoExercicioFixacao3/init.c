#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int i, valor, aux = 0;

  printf("Digite um valor para saber se ele e primo: ");
  scanf(" %d", &valor);

  for(i = 1; i <= valor; i++)
  {

    // Conferindo quantas vezes houve divisibilidade
    if(valor % i == 0)
    {
      aux++;
    }


    printf("%d / %d tem o resto = %d \n", valor, i , valor % i);
  }


  // Apena divide por 1 e ele mesmo
  if(aux == 2)
  {
    printf("o numero e primo!\n");
  } else {
    printf("o numero nao e primo! Pois tem %d divisores! \n", aux);
  }

  return 0;
}