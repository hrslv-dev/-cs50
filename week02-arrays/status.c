# include <stdio.h>
# include <cs50.h> 
# include <string.h> 
# include <ctype.h>

int invalid_number_of_arguments(int argc, string argv[]); 
int typed_number_error(int argc, string argv[]); 
int main(int argc, string argv[]){ 

// I can use this to make exceptions for example like in java
    if (typed_number_error(argc, argv) != 0){ 
        return -1; 
    } 

    printf("Hello my boy, %s\n",argv[1]); 
    return 0; 
}
// I can't type numbers in this 
int typed_number_error(int argc, string argv[]){ 
    if (invalid_number_of_arguments(argc, argv) != 0) {
        return -1;
    }
    string str = argv[1]; 
    for(int i = 0, n = strlen(str); i < n; i++){
        if (isdigit(str[i])){
            printf("TYPE_DIGIT_ERROR\n"); 
            return -1; 
        } 
    }
    return 0; 
 }

 int invalid_number_of_arguments(int argc, string argv[]){ 
    if ( argc != 2 ){
        printf("INVALID NUMBER OF ARGUMENTS ERROR\n"); 
        return -1; 
     } 
    return 0; 
 }