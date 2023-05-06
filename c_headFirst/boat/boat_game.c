#include <stdio.h>

void go_south_east(int *lat, int *lon) {
  // printf("%p\n", lat);
  // lat = lat - 1;//changes emmoery adress
  *lat = *lat - 1; // changes emmoery adress
  // printf("%p\n", lat);
  *lon = *lon + 1;
}

void fortune_cookie(char msg[]) {

  printf("msg occupies %i bytes\n", sizeof(*msg));
  printf("Message reads: %s\n", msg);
}

int main() {

  char quote[] = "Cookies make you fat";
  int latitude = 32;
  int longitude = -64;
  int *latp = &latitude;
  int *lonp = &longitude;
  go_south_east(latp, lonp);
  printf("Avast! Now at: [%i, %i] \n", latitude, longitude);

  fortune_cookie(quote);
  return 0;
}

//:!gcc -o somename % && ./somename
