#include <stdio.h> 

/**
 *	This program is meant to accept input characters and then output to screen
 *
 *	getchar() is input
 *
 *	putchar() is output and must be iterated to output everthing !!! 
 *
 **/ 

int main(){
		int c; 
		c = getchar(); 
		
		while (c != EOF){ 
				/** This loop will first output any initial text stream
				 *		then will request getchar again to doit again
				 *		this continues until EOF 
				 **/ 
				putchar(c);
				c = getchar();
		} // END while ( c != EOF) 

} 
// EOF
