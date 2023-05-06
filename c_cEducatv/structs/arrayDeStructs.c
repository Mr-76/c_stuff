#include <stdio.h>

int main ()
{

typedef struct {
    int x;
    int y;
    int z;
  }  Point3D;

  Point3D myPoints[10];
  int i;
  for (i=0; i<10; i++) {
    myPoints[i].x = i;
    myPoints[i].y = i;
    myPoints[i].z = i;
  }

 for (i=0; i<10; i++) {
  printf("myPoint[%d].x = %d\n",i,myPoints[i].x);
  printf("myPoint[%d].y = %d\n",i,myPoints[i].y);
  printf("myPoint[%d].z = %d\n",i,myPoints[i].z);
 }

  return 0;
}
