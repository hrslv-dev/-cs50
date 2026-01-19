# include <stdio.h>  
float avg(int arr[], int size);

int main(void){
	int size; 
	printf("Size of the array: "); 
	scanf("%d", &size); 
	
	int arr[size];
	for(int i = 0; i < size; i++){ 
		printf("Number of position %i", i); 
		scanf("%d", &arr[i]); 
	}

	float avarege = avg(arr, size);  
	printf("avarege = %f\n", avarege); 
	return 0; 
}

float avg(int arr[], int size){ 
	int sum; 

	for(int i = 0; i < size; i++){
		sum += arr[i]; 
	}
	int avarege = sum/size; 

	return avarege; 
}


