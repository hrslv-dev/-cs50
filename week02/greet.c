# include <stdio.h>
# include <cs50.h>

// argc -> stores the numbers of arguments
// argv -> stores the arguments themselves; 

int main(int argc, string argv[]){ 
    // if have 2 args
    if(argc == 2){
        // print the argument in position 1 in the array. 
        // this is the second argument
        printf("Hello, %s", argv[1]); 
    } else { 
        printf("Incorrect use!"); 
    }
    return 0; 
}