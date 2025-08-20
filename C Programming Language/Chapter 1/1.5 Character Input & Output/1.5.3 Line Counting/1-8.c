/*********************************************************************
* Date: August 2025
* Chapter: 1.5.3
* Exercise: 1-8
* Problem Statement: Write a program to count blanks, tabs, and newlines.
**********************************************************************/

# include <stdio.h>

int main(){
	char c;
	int tabs = 0;
	int blanks = 0;
	int new_lines = 0;
	while((c=getchar()) != EOF){
		if(c == '\t'){ // counts tabs
			tabs++;
		}
		if(c == ' '){ // counts blanks
			blanks++;
		}
		if(c == '\n'){ // counts newlines
			new_lines++;
		}
	}
	printf("\nTabs: %d\nBlanks: %d\nNewlines: %d\n", tabs, blanks, new_lines);
}