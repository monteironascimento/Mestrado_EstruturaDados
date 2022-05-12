#include <stdio.h>
#include <time.h>

#include "pilha.h"

int main(){

    clock_t t;
    t = clock(); 

    int qtVezes = 100000;

    for (int i = 0; i < qtVezes; i++)
    {
         Pilha* p = pilha_criar();

         for (size_t i = 0; i < 100; i++)
         {
             pilha_empilhar(p, i);
         }
         
         pilha_destruir(p);
    }

    t = clock() - t; 
    printf("\nTempo de execucao: %lf\n\n", ((double)t)/((CLOCKS_PER_SEC/1000))); 


}