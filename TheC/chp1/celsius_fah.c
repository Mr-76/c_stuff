#include <stdio.h>
#include <stdarg.h>
#define LOWER 0
#define MAX 300
#define STEP 20


int main(){

		float celsius,fahren;

		celsius = LOWER;

		printf("%s    \t%s","celsius","fahren\n");
		while(celsius <= MAX){
				fahren = ((celsius*9) +32)/5;
				printf("%8.1f\t%8.2f\n",celsius,fahren);
				celsius = celsius + STEP;
		}





}
