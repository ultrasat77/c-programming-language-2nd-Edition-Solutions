/*********************************************************************
* Date: August 2025
* Chapter: 1.1
* Exercise: 1-2
* Problem Statement: Experiment to find out what happens when printf's argument string contains \c, where c is some character.
**********************************************************************/

# include <stdio.h>

int main(){
	printf("hello, world\a\n"); // \a triggers a bell sound
}
