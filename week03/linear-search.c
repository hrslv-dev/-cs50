#include <stdio.h> 
#include <stdbool.h>

bool isHere_a_number(int arr[], int goal, int length); 

int main(void){ 
    int arr[] = {2,5,10,15,22}; 
    int goal = 10; 
    int length = sizeof(arr) / sizeof(arr[0]); 
    bool finder = isHere_a_number(arr,goal,length); 
    if(finder){ 
        printf("Finded! %i", goal); 
    } else {
        printf("did not find !"); 
    }
} 

bool isHere_a_number(int arr[], int goal, int length){ 
      for(int i = 0; i < length; i++){ 
        if(arr[i]==goal){ 
            return true; 
        }
    }
    return false;  
}
