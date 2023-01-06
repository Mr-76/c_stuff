//** a program that prints the numbers from 1 to 100. For multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”./
//
//
//*
#include <stdio.h>
int main(int argc, char **argv)
{
  int Counter = 1;
  while(Counter <101){

    if ((Counter % 3 == 0) && (Counter % 5 == 0)){
      printf("FizzBuzz\n");
    }else if ((Counter % 3 == 0)){
      printf("Fizz\n");
    }else if ((Counter % 5 == 0)){
      printf("Buzz\n");
    }else{
      ;
    }
    Counter++;
  }
  return 0;
}


//or

#include <stdio.h>
 
int main(int argc, char **argv)
{
  int i;
  for (i=1; i<=100; i++)
 {
    //if the number divides, remainder will be 0 
    // we use the ! to change it to 1 so that the overall condition 
    //becomes TRUE
      if (!(i % 3) && !(i % 5)) //checking if it divides by 3 AND 5 by taking % (modulus)
	printf("FizzBuzz");   
      else if (!(i % 3)) //checking if it divides by just 3 
	printf("Fizz");
      else if (!(i % 5)) //checking if it divides by just 5
	printf("Buzz");
      else
	printf("%d", i);
      printf("\n");
 }
  return 0;
}


//**
//litle explations from chatgpt hhhhhhhh
//that's correct. The result of the i % 3 expression is an integer value, not a boolean value.
//
//However, the ! operator can be used to negate the value of an expression, so !(i % 3) will be true if i is a multiple of 3, and false if it is not. This is because a multiple of 3 will have a remainder of 0 when divided by 3, and the ! operator will negate this to true. Any other value will have a non-zero remainder, which will be negated to false by the ! operator.
//
//Similarly, !(i % 5) will be true if i is a multiple of 5, and false if it is not.
//
//I apologize for any confusion. I hope this clears things up! Let me know if you have any other questions.

