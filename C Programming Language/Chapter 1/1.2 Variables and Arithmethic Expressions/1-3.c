/*********************************************************************
* Date: August 2025
* Chapter: 1.2
* Exercise: 1-3
* Problem Statement: Modify the temperature conversion program to print a heading above the table.
**********************************************************************/

# include <stdio.h>

int main(){
	int lower = 0;
	int upper = 300;
	int stepper = 20;
	printf("Fahrenheit\tCelsius\n"); // Heading
	printf("==========\t=======\n");
	float fahr;
	/* print fahr = 0, 20....300*/
	for(fahr=lower;fahr <= upper; fahr = fahr + stepper){
		printf("%6.0f\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}



}
