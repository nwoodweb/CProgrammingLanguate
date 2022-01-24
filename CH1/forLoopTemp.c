#include <stdio.h>

/**
 * This program is intended to introduce to for loops
 * This is designed to convert fahrenheit to celsius much like the 
 * previous temperature conversions
 *
 * eqn (5.0/9.0) * (F - 32.0) 
 **/

int main(){
		int fahr;
		for (fahr = 0; fahr <= 300; fahr = fahr + 20)
				printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

}
