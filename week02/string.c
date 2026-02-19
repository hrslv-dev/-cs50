# include <stdio.h>
# include <string.h> 
# include <cs50.h>

int main (void) { 
    // ctype.h do the job of check something in a char in general 
    string s = get_string("Input: "); 
    printf("Output: ");     
    for(int i = 0, int n = strlen(s); i < n; i++){
                printf("%c", s[i]);
                // this way is more efficient 
                // more well designed.  
     }
        // a for loop can declare more than one variable.
        // Use strlen in a loop here is inefficient for memory using
        // calling an function again and again in a loop is waste of memory. 

    }
    printf("\n"); 
}

