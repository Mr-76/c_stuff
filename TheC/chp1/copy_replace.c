#include <stdio.h>

/**program for the c book
 * copies input chars
 * replaces spaces with one only space
 */
int main() {
  int c;
  int old = 0;
  int tabs = 0;
  int backsS = 0;
  int backs = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      old++;
    } else if (c == '\t') {
      tabs++;
    } else if (c == '\b') {
      backs++;
    } else if (c == '/') {
      backsS++;
    } else {
      if (old > 0) {
        putchar(' ');
        old = 0;
        putchar(c);
		
      } else {

        putchar(c);
      }
    }
  }
}
