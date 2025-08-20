/*********************************************************************
* Date: August 2025
* Chapter: 1.5.1
* Exercise: 1-6
* Problem Statement: Verify that the expression getchar() != EOF is 0 or 1.
**********************************************************************/

# include <stdio.h>

int main(){
	int c;
	while(c = getchar() != EOF){
		printf("%d\n",c); // Should output 1 or more '1'; since newline is a valid character
	}
	printf("%d\n", c); // Should output 0
}