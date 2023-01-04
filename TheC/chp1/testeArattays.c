
#include <stdio.h>

int main() {

  int a[] = {1, 2, 3, 4, 5};
  int i = 1; // Second index number of the array a[]
  a[i]++;
  printf("%d %d\n", i, a[i]);
  a[i++];
  printf("%d %d\n", i, a[i]);
		
  int v = 'a';
  printf("%d", v-27);
}
