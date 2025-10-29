 /*********************************************************************
* Date: August 2025
* Chapter: 1.6
* Exercise: 1-13
* Problem Statement: Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal;
* a vertical orientation is more callenging.
**********************************************************************/

# define MAX_WORD 45
# include <stdio.h>

int main(){
	char c;
	int i;
	int z = 0;
	int toolong = 0;
	int length = 0;
	int arr[MAX_WORD] = {0}; //  each index of the array stores the number of words of length index
	while( (c=getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n' || c == '\'' || c == ',' || c == '?' || c == '!'){ // Outside a Word
			if(length > MAX_WORD){
				toolong++;
				length = 0;
			}
			if(length > 0){
	            arr[length - 1]++;
			}
			length = 0;
		}
		else{ // Inside a word
			length++;
		}
		
	}

	// Horizontal Graph
	printf("\nHorizontal Histogram\n");
	printf("\nLength\tOccurence\n");
	printf("==========================\n");
	int j = 0;
	for(i=0;i<MAX_WORD;i++){
		printf("%d\t", i+1);
		for(j=arr[i];j>0;j--){
			printf(". ");
		}
		printf("\n");
	}
	printf("%d+\t", MAX_WORD);
	for(i=toolong;i>0;i--){
		printf(". ");
	}
	printf("\n");
	// Vertical Graph
	int max = toolong;
	for(i=0;i<MAX_WORD;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	printf("\nVertical Histogram\n");
	printf("\n\nOccurence\n");
	for(i=max;i>0;i--){
		printf("\t\t\t");
		for(j=0;j<MAX_WORD;j++){
			if(arr[j]>=i){ // if the number of occurence is higher than whatever height of the line we are printing, we print a .
				printf(".");
				for(z=1;(j+1)/z >= 1;z*=10){ // So every digit extra on the max word is an extra space required
					printf(" ");
				}
			}
			else{
				printf(" ");
				for(z=1;(j+1)/z >= 1;z*=10){
					printf(" ");
				}
			}
		}
		if(toolong>=i){
			printf(". ");
		}
		printf("\n");
	}
	printf("Length\t\t\t");
	for(i=1;i<MAX_WORD+1;i++){
		printf("%d ", i);
	}
	printf("%d+\n", MAX_WORD);
}
