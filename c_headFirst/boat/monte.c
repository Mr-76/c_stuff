#include <stdio.h>
int main() {
  char *cards = "JQK"; // wont work, no funciona ponteiro cards na stack apontando para um a string que é constante :s
	//So the difference is that the original code
  //used a pointer to point to a read-only string
  //literal. But if you initialize an array with
  //a string literal, you then have a copy of the
  //letters, and you can change them as much as
  //you like.
  char a_card = cards[2];
  cards[2] = cards[1];
  cards[1] = cards[0];
  cards[0] = cards[2];
  cards[2] = cards[1];
  cards[1] = a_card;
  puts(cards);
  return 0;
}
