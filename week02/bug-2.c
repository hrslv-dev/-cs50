# include <stdio.h> 

// sums an array with some lenght 
int sum_arr(int arr[], int lenght); 

int main(void) { 
	
	int arr[] = {3,4,5,1,2,7,2}; 
	// this line needs to be more understod
	int lenght = sizeof(arr) / sizeof(arr[0]); 
	
	int resolution = sum_arr(arr, lenght); 
	printf("Resolution = %i\n", resolution); 
} 

int sum_arr(int arr[], int lenght){ 
	// it is with memory garbage, or it is just not declarated yet!	
	int sum = 0; // declared correctly 

	for (int i = 0; i < lenght; i++){ 
		sum += arr[i]; 
	}
	return sum; 
}
	
	

