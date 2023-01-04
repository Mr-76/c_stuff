#include <stdio.h>
#include "powerof.h"


/**
 * recursive power of
 * program
 */
int main() {

  int b = 0;

  b = power(2, 2);
  printf("%d", b);
}

int power(int base, int n) {
  if (n == 1) {
    return base * n;
  } else {
    return n * power(base, n - 1);
  }
}
