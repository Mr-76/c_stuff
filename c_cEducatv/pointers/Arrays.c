#include <stdio.h>
#include <stdlib.h>

int main() {

  int *vec;
  //alocando array, 3 ints vec aponta para um endereco que tem 3 steps de int :>)?
  vec = (int *)malloc(sizeof(int) * 3);
  vec[0] = 1;
  vec[1] = 2;
  vec[2] = 3;

  //pegar endereço de vec e pular 2
  printf("vec 2 is %d\n", *(vec + 2));
  return 0;
}
