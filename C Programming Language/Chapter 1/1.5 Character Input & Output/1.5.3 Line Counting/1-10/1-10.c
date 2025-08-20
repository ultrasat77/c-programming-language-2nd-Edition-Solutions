/*********************************************************************
* Date: August 2025
* Chapter: 1.5.3
* Exercise: 1-10
* Problem Statement: Write a program to copy its input to its output, replacing each tab by \t,
*	each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.
* Note: Most terminals operate in what's known as cooked mode or canonical mode. It means that the terminal handles input on a line-by-line basis. As a result, 
*	you cannot capture a "backspace" or movement of the cursor, since the terminal handles "within-line" editing. In order to have the terminal process 
*	character-by-character, you must switch the terminal to raw mode.
**********************************************************************/

# include <stdio.h>

int main(){
	char c;
	while((c=getchar())!=EOF){
		if(c == '\t'){
			printf("\\t");
		}
        if(c == '\b'){
			printf("\\b"); 
        }
	    if(c == '\\'){
			printf("\\\\"); 
       	}
		if(c != '\t' && c != '\b' && c != '\\'){
			putchar(c);
		}
	}
}