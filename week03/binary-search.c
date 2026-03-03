#include <stdio.h>
#include <stdbool.h> 

bool binary_search(int arr[],int length, int goal); 

int main(void){
    int arr[] = {2,7,4,9,10,12,17,50,20}; 
    int length = sizeof(arr) / sizeof(arr[0]); 
    int goal = 50; 

    bool result = binary_search(arr, length, goal); 
    if(result == true){ 
        printf("finded!");
    } else { 
        pritnf("Not finded!"); 
    }
    
 }

bool binary_search(int arr[],int length, int goal){ 
    int menor = 0; 
    int maior = length; 
    int steps = 0;  
    while(menor <= maior){ 
        int middle = (menor + maior)/ 2; 
        if (middle == goal){ 
            return true; 
        } else if (middle > goal){ 
            maior = middle - 1; 
        } else if (middle < goal){ 
            menor = middle + 1; 
        } 
        // DEBBUGING FEATURE 
        steps++; 
    }
    return false;
}
