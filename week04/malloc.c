# include <stdio.h> 
# include <stdlib.h>

int main(void){ 
    int x = 10; 
    // the pointer stores the memory adress of x. 
    int *pointer = &x; 
    // What the fuck this means? 
    // Let's break it down: 
    /* sizeof() -> shows how much bytes an integer occupies
        malloc -> reservers a memory in the heap and returns the adres of the first byte 
        */

    int *p = malloc(4 * sizeof(int)); 
     

}