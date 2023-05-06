#include <stdio.h>

int main() {

  typedef struct {
    int x;
    int y;
    int z;
  } Point3d;

  Point3d p1;

  p1.x = 1;
  p1.y = 2;
  p1.z = 3;

  printf("p1 = (%d %d %d)", p1.x, p1.y, p1.z);

  return 0;
}
