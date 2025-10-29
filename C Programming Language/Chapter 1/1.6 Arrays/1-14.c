 /*********************************************************************
* Date: August 2025
* Chapter: 1.6
* Exercise: 1-14
* Problem Statement: Write a program to print a histogram of the frequencies of different characters in its input.
**********************************************************************/

# include <stdio.h>

int main(){
	int arr[256] = {0}; // Each index represents one of the 256 ASCII characters
	char c;
	while( (c=getchar()) != EOF){
		arr[c]++;
	}
	int  i = 0;
	printf("\nASCII\t\tCharacter\tOccurence\n");
	printf("===========================================================================================\n");
	for(i=32;i<=127;i++){
		printf("%3d     \t%c     \t", i, i);
		for(;arr[i]>0;arr[i]--){
			printf(". ");
		}
		printf("\n");
	}
}
