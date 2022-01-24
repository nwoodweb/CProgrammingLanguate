#include <stdio.h>

/**
 * This file is designed to demonstrate the use of symbolic constants
 *
 * Otherwise a replica of forLoopTemp.c 
 *
 * eqn (5.0/9.0) * (F - 32.0) 
 **/

int main(){
		#define		LOWER	0	// lower limit of table
		#define		UPPER	300	// upper limit of table 
		#define		STEP	20	// step size 

		int fahr;
		printf("FAHRENHEIT\tCELSIUS\n");
		for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
				printf("%3d\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

}
