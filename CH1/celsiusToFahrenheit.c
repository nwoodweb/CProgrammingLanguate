#include <stdio.h> 


/**
 *	THIS PROGRAM FULFILLS EXERCISE 1-4 
 * This program is intended to do the same as the previous temperature 
 * calculations, but now convert celsius to fahrenheit, with floating point
 * precision !!!
 *
 * Eqn :
 *		F = ( (9/5) * C) + 32 
 **/ 


int main(){

		float fahr;
		float celsius; 

		int upper;
		int lower;
		int step; 

		lower = 0; 
		upper = 300; 
		step = 20; 
		
		celsius = lower;

		while (celsius <= upper ){
				printf("CELSIUS\tFAHRENHEIT\n");
				fahr = ((9.0/5.0) * celsius) + 32.0;		// apply eqn 1 
				printf("%6.2f\t%6.2f\n",celsius, fahr); 
				celsius = celsius + step; 
		}

}
