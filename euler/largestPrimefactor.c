#include <stdio.h>
// see if it is prime
// division needs to be max 2
int main() {
  long int max = 600851475143;
  printf("\n%ld\n", max);
  long int number = 2;
  while (max > number) {
    if (!(max % number)) {
      max = max / number;
    } else {
      number++;
    }
  }
  printf("last %ld", number);
  return 0;
}
