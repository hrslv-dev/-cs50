#include <stdio.h>
#include <stdlib.h>

void *func();

const char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(void)
{
    int x = 10;
    // the pointer stores the memory adress of x.
    int *pointer = &x;
    // What the fuck this means?
    // Let's break it down:
    /* sizeof() -> shows how much bytes an integer occupies
        malloc -> reservers a memory in the heap and returns the adress of the first byte ?
        When malloc is succesfully ?
        when the pointer that stores the memeory adress != null.
        I need to call the free() function -> memory leak
        The adress occupied in the malloc function stays occupied until the free() function is called
        */

    int *p = malloc(4 * sizeof(int)); // sizeof an integer is -> 4 bytes (32 bits)
    printf("%i\n", p);
    free(p);

    char *c = malloc(20);

    for (int i = 0; i < 20; i++)
    {
        c[i] = alphabet[i];

        printf("%c", c[i]);
    }
    printf("\n");
}

// Memory leak example:

void *func()
{
    int *p = malloc(2 * sizeof(int));
    // If i call this function the pointer dies here, but the space in memory still occupied.
    free(p);
}
