 include <stdio.h> 

int sum (int *a); 

int main(void){ 
	int values[5] = {1,2,3,4,5}; 

	int result = sum(values); 
	
	return 0; 
}

int sum(int *a){ 
	// bug is here because s is using garbage memory. 

       	// in C is obrigatory to declare the var. 
	int s;  
	
	for(int i = 0; i < 5; i++){ 
		s+=a[i];
	}
	return s; 
} 	
