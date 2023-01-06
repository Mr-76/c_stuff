#include <stdio.h>
#include <stdarg.h>


void oneFunctonToPrinThemALL(int number_letters,...){
		va_list ap;
		va_start(ap, number_letters);
		char place_hold;
		int i;
		for(i = 0; i< number_letters;i++){
				place_hold = va_arg(ap, char);
				printf(place_hold)
		} 
		va_end(ap);
}


int main(){

		oneFunctonToPrinThemALL(4,'a','b','a','b');


		return 0;


}
