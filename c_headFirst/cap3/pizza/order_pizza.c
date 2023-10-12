#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
  char *delivery = "";
  int thick = 0;
  int count = 0;
  char ch;

  while ((ch = getopt(argc, argv, "d:t")) != -1) {

    switch (ch) {
    case 'd': {

      delivery = optarg;
      break;
    }
    case 't': {
      thick = 1;
      break;
    }
    defaut : {
      fprintf(stderr, "Unknow option: '%s'\n", optarg);
      return 1;
    }
    }
  }
  argc -= optind;
  argv += optind;
  if (thick) {
    puts("thick Crust.\n");
  }
  if (delivery[0]) {
    printf("to be delivered %s.\n", delivery);
  }
  puts("Inggredients:");
  for (count = 0; count < argc; count++) {
    puts(argv[count]);
  }

  return 0;
}
