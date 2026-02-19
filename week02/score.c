# include <stdio.h>  
float avg(int arr[], int size);

int main(void){
	int n;
	printf("Say how many scores you have : "); 
	// Remember it all times when you press ENTER, the scanf stores it in a buffer
	scanf("%d", &n);// Here I can just use scanf this way i think  

	// This printf is just for break the line, because I can't put an \n in a scanf, that will bug the input
	int scores[n];
	for(int i = 0; i < n; i++){ 
		printf("Number of score %i\n ", i); 
		scanf("%d", &scores[i]); 
	}
	float avarege = avg(scores, n);  
	printf("avarege = %f\n", avarege); 
}

float avg(int arr[], int size){ 
	float sum = 0; // here it was with garbage memory

	for(int i = 0; i < size; i++){
		sum += arr[i]; 
	}
	float avarege = sum/(float) size; 
	return avarege; 
}

