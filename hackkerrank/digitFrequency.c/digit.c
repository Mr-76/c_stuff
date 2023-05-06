#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countNumbers(char *string) {

  int array[10] = {0};
  for (int i = 0; i < strlen(string); i++) {
    switch (string[i]) {
    case '1':
      array[1] += 1;
      break;
    case '2':
      array[2] += 1;
      break;
    case '3':
      array[3] += 1;
      break;
    case '4':
      array[4] += 1;
      break;
    case '5':
      array[5] += 1;
      break;
    case '6':
      array[6] += 1;
      break;
    case '7':
      array[7] += 1;
      break;
    case '8':
      array[8] += 1;
      break;
    case '9':
      array[9] += 1;
      break;
    case '0':
      array[0] += 1;
      break;
    }
  }
  int len = sizeof(array) / sizeof(array[0]);
  for (int i = 0; i < len; i++) {
    printf("%d", array[i]);
    printf(" ");
  }
}

int main() {

  char *s;
  s = malloc(1024 * sizeof(char));
  scanf("%[^\n]", s);
  s = realloc(s, strlen(s) + 1);
  countNumbers(s);
  return 0;
}
