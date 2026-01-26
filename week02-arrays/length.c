# include <stdio.h>
# include <cs50.h> 

int lenght(string str);

int main(void){ 
   string name = get_string("Type your name : ");  
   printf("%i\n", lenght(name));
}

// Calculates the lenght of a strings
// Test all the characters in the string, and if it is null (0) it stops the loop  

int lenght(string str){
    int n = 0;
    // string [0] -> string [1] ...
    while(str[n] != 0){ 
        n++;
    }
    return n; 
}