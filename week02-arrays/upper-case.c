# include <stdio.h>
# include <string.h>
# include <cs50.h> 
# include <ctype.h>

void change_to_upper_case(string str);

int main(void){ 
    string str = get_string("Before: "); 
    printf("After:  "); 
    change_to_upper_case(str);
    printf("\n");
}

void change_to_upper_case(string str){ 
    for(int i = 0, n = strlen(str); i < n; i++){ 
        if(islower(str[i])){
            printf("%c", toupper(str[i]));  
        } else{ 
            printf("%c", str[i]);             
        }
    }
}