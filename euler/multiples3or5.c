#include <stdio.h>
int main() {
  int max = 999; // 1000-1
  int one = 5;
  int two = 3;
  int still = 1;
  int sum = 0;
  while (max != 0) {
    if (!(max % one) | !(max % two)) {
      sum += max--;
    } else {
      max--;
      continue;
    }
  }
  printf("\n %d", sum);
  return 0;
}
