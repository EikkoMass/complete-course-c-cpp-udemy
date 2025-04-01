#include <stdio.h>
#include <stdlib.h>

void main (){
  
  // definindo a variavel
  int a = 5, b;

  // imprimindo variavel 'a'
  printf("%d", a);

  //concatenando
  printf("\nO valor da var a seria: %d", a);

  // mudando o valor de 'a'
  a = 15;

  //concatenando
  printf("\nO valor da var a seria: %d\n", a);
  
  // lendo valores
  scanf("%d", &b);

  //concatenando
  printf("\nO valor da var b seria: %d", b);

  // pula linhas
  printf("\n\n");

  // imprimindo
  printf("Uhuu\n");
  
  // pausando
  getchar();
}