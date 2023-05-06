#include <stdio.h>
int main(int argc, char *argv[]) {
  int age = 30;
  int *p;
  p = &age;
  //age retem age normal
  printf("age=%d\n", age);
  //p contem endereco de memoria de age
  printf("p=%p\n", p);
  //p agora chamando de volta o valor de age de acordo com o endereço de memoria
  //dereferencing
  printf("*p=%d\n", *p);
  printf("sizeof(p)=%ld\n", sizeof(p));
  *p = 40;
  printf("*p=%d\n", *p);
  printf("age=%d\n", age);
  return 0;
}
