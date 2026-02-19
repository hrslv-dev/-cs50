# include <stdio.h> 
// What's after an "#" is called a preprocessor directive
// It says to the compiler that something in this archive will be "copy-pasted" in this archive
// Here it kinda declarates the functions that will be used in this archive that already exists, but related to input and output

void meow(void); 
// This is part of the preprocessing, this tells the compiler before to start the really compiling process 
// that this function exists, and will be implemented sometime after line 5 for example 

int main(void){
    
    for (int i = 0; i < 4; i++){
        meow();
    }
}

void meow(void){ 
    printf("meow\n");

}

// ths code in the compiling process is translated to assembly code, turning into something like this : 

/*    .section .rodata
.Lstr:
    .string "meow\n"

    .text
    .globl main
main:
    pushq %rbp
    movq  %rsp, %rbp

    movl  $0, -4(%rbp)        # int i = 0

.Lloop:
    cmpl  $4, -4(%rbp)        # compare i with 4
    jge   .Lend               # if i >= 4, exit loop

    call  meow                # meow()

    addl  $1, -4(%rbp)        # i++
    jmp   .Lloop              # repeat loop

.Lend:
    movl  $0, %eax            # return 0
    popq  %rbp
    ret

    
*/

