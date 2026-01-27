# include <stdio.h>
# include <cs50.h> 
# include <string.h> 

int length(string str);

int strlen_test(string str){
    // strlen -> string library 
    int length = strlen(str);
    // Here I did in one line, but is something that is already made   
    // strlen () -> It returns the number of bytes of an string or an chars array
    // declaration = size_t strlen(const char *s); 
    return length;    
}

int main(void){ 
   string name = get_string("Type your name : ");  
   printf("%i\n", length(name));

   string name2 = get_string("type your name again: "); 
   printf("%i\n", strlen_test(name2)); 
}
// Calculates the length of a strings
// Test all the characters in the string, and if it is null (0) it stops the loop  
// This is exactly what strlen() function do, of string library in C. 

int length(string str){
    int n = 0;
    // string [0] -> string [1] ...
    while(str[n] != 0){ 
        n++;
    }
    return n; 
}