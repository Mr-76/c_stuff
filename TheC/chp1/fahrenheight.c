#include <stdio.h>

/*
 * prints table of fahrenheit -- celsis
 */
int main(){
		float fahr,celsius;
		int lower,upper,step;
		lower = 0;
		upper = 300;
		step = 20;
		fahr = lower;

		printf("%s\t%s","fahrenheit","celsius\n");
		while(fahr <= upper){
				celsius = 5 * (fahr-32)/9;
				printf("%8.1f\t%8.2f\n",fahr,celsius);
				fahr = fahr + step;
		}
}

