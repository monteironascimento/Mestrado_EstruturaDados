#include <stdio.h>
#include <string.h>
#include <time.h>

#include "fila.h"

int main(){

    int qtVezes = 100000;
    printf("\nContiga %d\n", qtVezes);

    clock_t t;
    t = clock(); 

    for (int i = 0; i < qtVezes; i++)
    {
         Fila* f = fila_criar();

         for (int j = 0; j < 100; j++)
         {
             fila_inserir(f, j);
         }

         fila_destruir(&f);
    }

    t = clock() - t; 
    printf("\nTempo de execucao: %lf\n\n", ((double)t)/((CLOCKS_PER_SEC/1000))); 

}