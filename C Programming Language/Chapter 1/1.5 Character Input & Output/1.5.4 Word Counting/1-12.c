 /*********************************************************************
* Date: August 2025
* Chapter: 1.5.4
* Exercise: 1-12
* Problem Statement: Write a program that writes its input one word per line.
**********************************************************************/

# include <stdio.h>

int main(){
	int c;
	int state = 1;
	while ((c=getchar()) != EOF){
		if (c != ' ' && c != '\t' && c != '\n'){
			putchar(c);
			state = 0;
		}
		else if(state != 1){
			state = 1;
			printf("\n");
		}
	}
}
