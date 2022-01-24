#include <stdio.h> 

/**
 * This program perform the same fahrenheigt to celsius conversions, except 
 * it is more accurate given that we use floating point variable declarations
 * as opposed to integer declarations, allowing us to be more precise by having 
 * decimals
 *
 * EQN:
 *		C = 5/9 * (F - 32) 
 *
 **/ 

int main(){
		float fahr;			// init fahrenheit as float
		float celsius;		// init celsius as float
		
		int upper;			// init max as int, no need for decimal final
		int lower;			// init min as int, no need for decimal start
		int step;			// init step as int; 

		lower = 0; 
		upper = 200;
		step = 20; 

		fahr = lower; 
		while ( fahr <= upper ){
						printf("FAHRENHEIT\tCELSIUS\n");		// EX 1-3 
						celsius = (5.0/9.0) * (fahr-32.0);
						printf("%3.0f\t\t%6.1f\n", fahr, celsius); 
						/** 
						 * %d decimal
						 * %6d decimal 6 digit
						 * %a.bf floating point max a width with b decimal  
						 **/ 
						fahr = fahr + step; 
		}

}
