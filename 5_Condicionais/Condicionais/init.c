#include <stdio.h>
#include <stdlib.h>

int main()
{
  int idade;

  // Le a idade
  scanf("%d", &idade);

  //Analisa se e maior de idade
  if(idade < 17)
  {
    printf("Menor de idade");
  } else if (idade == 18)
  {
    printf("Tem que se alistar");
  } else 
  {
    printf("Maior de idade");
  }

  return 0;
}