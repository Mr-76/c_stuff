#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {
  size_t len = strlen(s);
  char *t =
      len + s -
      1; // calculando com ponteiro
         // some exempleo "ABC" some 3 ao enderenco apontado por s enderecço+3
         // subtrai 1 fica sem o null e estou apontando para o ultimo char
  puts("\n");
  while (t >= s) {
    printf("%c", *t);
    t = t - 1;
  }
  puts("");
}

int main() {
  char *s = {"ABC"};
  print_reverse(s);
}
