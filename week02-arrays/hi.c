# include<stdio.h>
# include <cs50.h> 
# include <string.h> 
int main (void){

	// double array of strings
	// Arrays of strings -> arrays of arrays 
	string words[2]; 
	words[0] = "HI!"; 
	words[1] = "BYE!"; // matrix
	
	int length = sizeof(words) / sizeof(words[0]); 
	for( int i = 0; i < length; i ++){   
		for (int j = 0; j < strlen(words[i]); j++){ 
			printf("%c", words[i][j]); 	
		}
		printf("\n"); 
	}
}
