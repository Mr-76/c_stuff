#include <stdio.h>

int main() {

  int c;

  c = getchar();

  while ((c = getchar()) != EOF) {
		printf("%d",getchar() != EOF);
    putchar(c);
  }
}
