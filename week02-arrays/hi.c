# include<stdio.h>

int main (void){
	// Manual String input	
	int size; 
	printf("Size of the word: ");
	scanf("%d", &size);

	char string[size]; 
	for(int i = 0; i < size; i ++){
		printf("%do word : ", i+1); 	
		getchar(); 
		string[i] = getchar();
	}
	// I'm printing not a String but a char left to right 	
	for(int i = 0; i < size ; i++){
		printf("%i", string[i]); 
		// Here it will print the numeric representation for each character in ASCII.  
	} 
	// But it is here an array anyway. 
	// in this way to do an array, it will not have the \0 at the end. 

	printf("\n");
}

