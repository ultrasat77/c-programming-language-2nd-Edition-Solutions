/*********************************************************************
* Date: August 2025
* Chapter: 1.5.3
* Exercise: 1-9
* Problem Statement: Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
**********************************************************************/

# include <stdio.h>

int main(){
	char c;
	while((c=getchar()) != EOF){
		if(c == ' ' || c == '\t'){
			printf(" "); // outputs a single blank
		}
		while(c == ' ' || c == '\t'){
			c = getchar(); // continously get next char from input buffer until c isn't a tab or blank
		}
		putchar(c); // outputs "non-blank" character
	}
}