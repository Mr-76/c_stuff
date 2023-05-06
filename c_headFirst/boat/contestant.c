#include <stdio.h>
int main() {
  int contestants[] = {1, 2, 3};
  int *choice = contestants;
  contestants[0] = 2;
  contestants[1] = contestants[2];
  contestants[2] = *choice; // aponta para primeiro valor que é 2
  printf("I'm going to pick contestant number %i\n", contestants[2]);

  contestants[0] = contestants[0] + 1;
  //dunnu wtf i thought that by increasing 0 would increase the 2 because it poitns to it >:?
  //in reality u are dereferencing tha pointer man PAY ATENTION PLEASE! :_<
  printf("I'm going to pick contestant number %i\n", contestants[0]);
  printf("I'm going to pick contestant number %i\n", contestants[2]);
  return 0;
}
