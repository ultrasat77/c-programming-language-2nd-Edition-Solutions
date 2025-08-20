/*********************************************************************
* Date: August 2025
* Chapter: 1.5.1
* Exercise: 1-7
* Problem Statement: Write a program to print the value of EOF.
**********************************************************************/

# include <stdio.h>

int main(){
	int c; 
	while((c=getchar()) != EOF){
		putchar(c);
	}
	printf("%d\n", c); // prints c when c holds EOF
}