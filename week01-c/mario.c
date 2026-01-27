#include<stdio.h>
#include<cs50.h>

void print_row(int n_rows); 
void print_all(int n_cols, int n_rows);


int main(void){
    int cols = get_int("cols : ");
    printf("\n");
    int rows = get_int("rows: ");  
    print_all(cols, rows);
}

// this function receives the respective number of columns, and then print it in the screen with a loop. 
void print_row(int n_rows){ 
    printf("#"); 
    for(int i = 0; i < n_rows; i++ ){
    }
}

void print_all(int n_cols, int n_rows){ 
    for(int i = 0; i < n_cols; i++){ 
        print_row(n_rows); 
        printf("\n");
    }
}