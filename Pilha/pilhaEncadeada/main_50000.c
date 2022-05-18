#include <stdio.h>
#include <time.h>

#include "pilha.h"

int main(){

    clock_t t;
    t = clock(); 

    int qtVezes = 50000;

    
    for (int i = 0; i < qtVezes; i++)
    {

        Pilha* p = pilha_criar();
        for (int j = 0; j < 100 ; j++)
        {
            pilha_empilhar(p, j);
        }
        pilha_destruir(p);
    }

    

    t = clock() - t; 
    printf("\nTempo de execucao: %lf\n\n", ((double)t)/((CLOCKS_PER_SEC/1000))); 

}