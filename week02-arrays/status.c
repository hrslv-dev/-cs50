# include <stdio.h>
# include <cs50.h> 
# include <string.h> 
# include <ctype.h>

// THIS CODE IS SUPPOSED TO TEST SOME GENERAL ERROS AND LEARN MORE ABOUT: 
// EXIT STATUS, COMMAND LINE ARGUMENTS and ERRORS. 

int invalid_number_of_arguments(int argc, string argv[]); 
int typed_number_error(int argc, string argv[]); 
int main(int argc, string argv[]){ 
// FOR EXIT STATUS , THE OS JUST RECEIVES UNSIGNED INTEGERS
    if (typed_number_error(argc, argv) != 0){ 
        return 1; 
    } 

    printf("Hello my boy, %s\n",argv[1]); 
    return 0; 
}
// I can't type numbers in this 
int typed_number_error(int argc, string argv[]){ 
    // HERE IS WHERE THE CHANGE IS 
    // I wasn't making the real valiadtion of the other error
    if (invalid_number_of_arguments(argc, argv) != 0) {
        return 1;
    }
    string str = argv[1]; 
    for(int i = 0, n = strlen(str); i < n; i++){
        if (isdigit(str[i])){
            printf("TYPE_DIGIT_ERROR\n"); 
            return 1; 
        } 
    }
    return 0; 
 }

 int invalid_number_of_arguments(int argc, string argv[]){ 
    if ( argc != 2 ){
        printf("INVALID NUMBER OF ARGUMENTS ERROR\n"); 
        return 1; 
     } 
    return 0; 
 }