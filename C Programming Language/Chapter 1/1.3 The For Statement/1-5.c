/*********************************************************************
* Date: August 2025
* Chapter: 1.3
* Exercise: 1-5
* Problem Statement: Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
**********************************************************************/

# include <stdio.h>

# define	LOWER	0
# define	UPPER	300
# define	STEP	20

int main(){
	int fahr;
	printf("Fahrenheit\tCelsius\n"); // Heading
	printf("===========\t========\n");
	/* print fahr = 300, 280....0*/
	for(fahr=UPPER;fahr>=LOWER;fahr = fahr - STEP){
		printf("%6d\t\t%6.1f\n", fahr, (5.0/9)*(fahr-32));
	}
}
