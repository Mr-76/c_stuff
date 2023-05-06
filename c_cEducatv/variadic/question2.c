// Write a variadic function count_char that takes a variable number of strings
// as arguments and returns the number of occurrences of a given character in
// all the strings combined.
//
//

#include <assert.h>
#include <stdarg.h>
#include <stdio.h>

int count_char(char character, int count, ...) {
  va_list variable_list;
  int i, count_char = 0;

  va_start(variable_list, count);

  for (i = 0; i < count; i++) {
    char *str = va_arg(variable_list, char *);
    int count2 = 0;
    // enquanto nao for o fim da string nao pare
    while (str[count2] != '\0') {
      if (str[count2] == character) {
        count_char++;
        count2++;
      } else {
        count2++;
      }
    }
  }

  va_end(variable_list);
  return count_char;
}

int main() {

  assert(count_char('c', 3, "char", "romeu", "comeu") == 2);
  printf("teste1 ok \n");

  assert(count_char('r', 3, "char", "romeu", "remou") == 3);
  printf("teste2 ok \n");

  assert(count_char('c', 3, "c", "eu", "haduken") == 1);
  printf("teste3 ok \n");

  assert(count_char('c', 3, "", "", "") == 0);
  printf("teste nada ok \n");

  return 0;
}
