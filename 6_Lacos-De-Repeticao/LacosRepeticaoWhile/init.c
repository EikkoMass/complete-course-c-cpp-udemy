#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i = 0;
  
  while(i <= 10) {
    printf(" %d \n", i);
    i++;
  }

  i = 0;
  
  while(i <= 10) {
    printf(" %d \n", i);
    i+=3;
  }

  return 0;
}