# include <stdio.h>
# include <string.h>
# include <cs50.h> 
# include <ctype.h>

int main(void){ 
    string s = get_string("Before: "); 
    printf("After:  "); 
    char c;

    for(int i = 0, n = strlen(s); i < n; i++){ 
        c = s[i]; 

        // Here enters in the context of the order is of ASCII numbers value 
        if(c >= 'a' && c <= 'z'){ 
            // Change it to upper case 
            // ASCII -> jump 32 bits
            c = c - 32; 
            printf("%c",c ); 
             // will print the number of ASCII 
        } else { 
            printf("%c", c); 
        }

     }
     printf("\n");
}
