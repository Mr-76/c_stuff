// Write a variadic function min that returns the minimum value of the integers
// passed as arguments.

#include <assert.h>
#include <stdarg.h>
#include <stdio.h>

int min(int count, ...) {
  // pointer to arg list
  va_list variable_list;
  int i, min, mid;
  // listing pointer to be used
  va_start(variable_list, count);
  // caling for the first argument
  min = va_arg(variable_list, int);

  for (i = 0; i < count; i++) {
    mid = va_arg(variable_list, int);
    if (mid <= min) {
      min = mid;
    } else {
      ;
    }
  }
  va_end(variable_list);
  return min;
}

int main() {
  assert(min(3, 4, 3, 2, 1) == 1);
  printf("teste1 ok \n");

  assert(min(3, 1, 1, 1, 1) == 1);
  printf("teste igual ok \n");

  assert(min(3, 40, 38, 222, 21) == 21);
  printf("teste2 ok \n");

  assert(min(3, 1, 2, 3, 4) == 1);
  printf("teste3 ok \n");

  return 0;
}
