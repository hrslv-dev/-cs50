#include<stdio.h>
#include<cs50.h>

    // var locad
void meow(int n); // paramêtros só existem dentro da função 
                        // por que? porque assim a execução de uma função tem maior desempenho computacinal.
                        // assim alocam-se as variaveis na stack (pilha de execução).
    
int get_positive_int(void){  
    int n; 
    
    n = get_int("say a number:");

    while(n < 0){ 
        n = get_int("positive number: ");
    }
    return n;    
}

int main (void){
    // eu posso "alterar" uma variável em escopo diferente.
    // mas não posso inicializa-la e chama-la em escopos diferentes.

    int times = get_positive_int();
    meow(times);    
}

void meow(int n){ // variavel existe aqui 
    for(int i = 0; i < n; i++){ 
        printf("meow\n");
    }
} // morre aqui
    
    /* do{  o n está em um escopo diferente do meow por isso dá erro
            n = get_int("number"); 

        }while (n<0); 
        meow (n) */
        