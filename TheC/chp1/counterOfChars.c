#include <stdio.h>
/**reads words
 * and getchar
 * puts frequency of chars
 */
int main() {

  int a[28];
  int c;
  for (int i = 0; i < 28; i++) {
    a[i] = 0;
  }

  int v = 'a';
  while ((c = getchar()) != '/') {
    ++a[c - v];
  }

  for (int i = 0; i < 28; i++) {
    printf("%d", a[i]);
  }

  printf("%d", v - 27);
}
