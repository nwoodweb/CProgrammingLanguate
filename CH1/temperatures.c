#include <stdio.h> 

/** 
 * This tools computes farenheight values to celsius 
 * This is accomplifshed by establishing a min and max, and then iterating 
 * conversions at increments of 20 degrees
 *
 * Eqn : 
 *		C = (5/9)(F-32) 
 *	
 **/


int main(){
		int fahr;				// Initialize fahrenheight
		int celsius;			// initialize celsius
		int lower;				// initialize minimum
		int upper;				// initialize maximum
		int step;				// initialize incremental

		lower = 0;				// establish lower value (INT) 
		upper = 300;			// establish upper value (INT) 
		step = 20;				// establish step value (INT)

		fahr = lower; 

		// ITERATE UNTIL FAHR = MAXIMUM VALUE 
		while (fahr <= upper){
				celsius = (5 * (fahr - 32)) / 9;	// conversion eqn 
				printf("%d\t%d\n", fahr, celsius);  // %d = val, \t = tabsep 
				fahr = fahr + step;					// increase val w/ increment 

		}
		/** 
		 * NOTE scanf reads input, printf outputs to stout
		 **/ 

}
