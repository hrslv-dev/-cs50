#include <stdio.h>
#include <cs50.h> 

int main(void){ 
    printf("Hello Word!\n");

    // --in terminal:-- 
    // clang command-arguments.c -o command-arguments
    // this generate an executable archive, or in other words the compiled code. 
    // then running: ./command-arguments
    // it will shows : "Hello Word!"

    // OBS: This is what the -make- do behind the cloths
    // -------------------------
    // hello you: 

    string name = get_string("What's your name? "); 
    printf("Hello, %s\n", name); 
    
    // in this code the clang command doesn't run anymore 
    // in MY computer even make works. 
    // -- problem --
    // The compiler was not founding the real machine code for the cs50 library functions. 
    // -- resolution -- 
    // adding the linker -lcs50, the compiler knows where to find the machine code for this. 

    // - What learned with this? - 
    // Headers tells to the compiler what exists, tell it the declaration
    // libraries give the linker to the actual machine code to the compiler, this is the implementation
}