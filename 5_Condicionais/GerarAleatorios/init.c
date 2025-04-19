#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int aleatorio()
{
    // seed random (usa o tempo atual como semente)
    srand(time(NULL));

    // Cria um numero aleatorio de 0 a 9
    int r = rand() % 10;
  
    printf("Numero gerado: %d\n", r);

    return 0;
}

int aleatorioComMinMax() {

  srand(time(NULL));

  int min = 5, max = 14;

  // 14 - 5 + 1 = 10
  int r = (rand() % (max - min + 1)) + min;

  // entao teremos um numero de 0 a 9 + 5
  // ou seja, o minimo sera 5 e o maximo sera 14

  printf("Numero gerado: %d\n", r);

  return 0;
}


int main() {

  aleatorio();
  aleatorioComMinMax();
  
  return 0;
}