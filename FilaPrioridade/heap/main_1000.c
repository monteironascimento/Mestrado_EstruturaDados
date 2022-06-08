#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "fila_prioridade.h"

int main(){

    clock_t t;
    t = clock(); 

    int qtVezes = 1000;

    for (int i = 0; i < qtVezes; i++)
    {
         FilaPrioridade* f = filaP_criar();

         for (int j = 0; j < 100; j++)
         {
             filaP_inserir(f, j);  
         }
         
         filaP_destruir(&f);
    }

    t = clock() - t; 
    printf("\nTempo de execucao: %lf\n\n", ((double)t)/((CLOCKS_PER_SEC/1000))); 


}