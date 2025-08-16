/*********************************************************************
* Date: August 2025
* Chapter: 1.2
* Exercise: 1-4
* Problem Statement: Write a program to print the corresponding Celsius to Fahrenheit table.
**********************************************************************/

# include <stdio.h>

int main(){
    printf("Celsius\t\tFahrenheit\n"); // Heading
    printf("======= \t==========\n");
    int step = 20;
    int upper = 300;
    int lower = 0;
    float fahr;
    int cel;
    /* print cel = 0, 20....300*/
    for (cel = lower; cel <= upper; cel = cel + step) {
        fahr = (9.0 / 5.0)*cel + 32;
        printf("%6d\t\t%6.1f\n", cel, fahr);
    }
}