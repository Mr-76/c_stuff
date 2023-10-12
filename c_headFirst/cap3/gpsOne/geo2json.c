#include <stdio.h>
int main() {
  float latitude;
  float longitude;
  char info[80];
  int started = 0;
  while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
    if (started)
      printf(",\n");
    else
      started = 1;
    if (latitude < -90 || latitude > 90) {
      fprintf(stderr, "invalid latitude :%f\n", latitude);
      return 2;
    }
    if ((longitude < -180) || (longitude > 180)) {
      fprintf(stderr, "invalid longitude :%f\n", longitude);
			//prinf é um fprintf generico estamos jogndo a mensagem de saida para o standard error que serve
			//para debugar os erros
      return 2;
    }
    printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude,
           info);
  }
  puts("\n]");
  return 0;
}
