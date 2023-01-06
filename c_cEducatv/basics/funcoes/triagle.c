//Writs ou a triangle with * HEHEHEH
#include <stdio.h>
//base 2n -1
//height n
//
int main(int argc, char **argv)
{
  int n=100;
  int i, j;
  for (int i = n;i<=(2*n) - 1; i++){
		  int prints = ((2*n) -1) - i;
		  for (j = 0;j < prints;j++){
				printf(" ");
		  }
		  int stars = ((2*n)-1) - (2*prints);
		  for (j = 0; j < stars;j++){
				  printf("*");
		  }
		  printf("\n");
  }
}
