 /*********************************************************************
* Date: August 2025
* Chapter: 1.7
* Exercise: 1-15
* Problem Statement: Rewrite the temperature conversion program of Section 1.2 tp use a function for conversion.
**********************************************************************/

# include <stdio.h>

float conversion(float fahr){

	return (5.0/9)*(fahr-32);

}

int main(){
/* print fahr = 0, 20....300*/
	printf("Fahrenheit\tCelsius\n");
	printf("==========\t=======\n");
	float fahr;
	for(fahr=0;fahr <= 300; fahr = fahr + 20){
		printf("%6.0f\t\t%6.1f\n", fahr, conversion(fahr));
	}
}