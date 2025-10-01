# include <stdio.h>


int main(){
	char c;
	int word = 0;
	int state = 1;
	while((c=getchar()) != EOF){
		while(c == ' ' || c == '\t' || c == '\n'){
			c = getchar();
			state = 1;
		}
		if(state == 1){
	        word++;
			state = 0;
		}
	}
	
	printf("Words: %d\n", word);

}
