# include <stdio.h> 
# include <cs50.h> 

void print_columns(int h); 

int main(void) { 
	
	int h = get_int("height: "); 
	print_columns(h);
} 
void print_columns(int h){ 
	for ( int i = 0; i < h; i++){ 
		printf("#\n"); 
	}
}
