# include <stdio.h>
# include <cs50.h>
# include <string.h>

int main(void){ 

    // Soulves this with a hasmap
    string names[] = {"Yullia", "David" ,"John"}; 
    string numbers[] = {"31-999321509", "31-9954413", "31-9827836"}; 
    int length_names = sizeof(names) / sizeof(names[0]);
    int length_numebrs = sizeof(numbers) / sizeof(numbers[0]); 

    if(length_names != length_numebrs){ 
        printf("Length doesn't knock!! \n"); 
        return 1; 
    }

    string name = get_string("Name: "); 
    // LINEAR SEARCH: 
    for(int i = 0; i < length_names; i++){ 
        if(strcmp(names[i], name) == 0 ){ 
            printf("The correspondent number : %s\n", numbers[i]); 
            return 0; 
        }
    }
   
}