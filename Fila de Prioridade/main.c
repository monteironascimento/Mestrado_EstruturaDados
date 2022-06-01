#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "fila_prioridade.h"

int aletatorio(){
    
    // Inserindo numeros aleatorios
    srand(time(NULL));
    int n = 100;
    int i, elemento;
    
    FilaPrioridade* f = filaP_criar();
    
    for (i=0; i < n; i++){
        filaP_inserir(f, rand() % (n*10));        
    }

    // Removendo e imprimindo todos os elementos
    while(!filaP_vazia(f)){
        filaP_remover(f, &elemento);
        printf("%d ", elemento);
    }
     filaP_destruir(&f);
    printf("\n");
    return 0; 
}

int controlado(){
    int elemento;
    char str[100];

    FilaPrioridade* f = filaP_criar();
    filaP_inserir(f, 15);
    filaP_inserir(f, 10);
    filaP_inserir(f, 4);
    filaP_inserir(f, 7);
    filaP_inserir(f, 13);
    filaP_inserir(f, 3);
    filaP_inserir(f, 2);
    filaP_inserir(f, 6);
    filaP_inserir(f, 1);
    filaP_inserir(f, 5);
    filaP_toString(f, str);
    printf("%s\n", str );

    filaP_remover(f, &elemento);
    filaP_toString(f, str);
    printf("%s\n", str );

    filaP_remover(f, &elemento);
    filaP_toString(f, str);
    printf("%s\n", str );
    
    filaP_remover(f, &elemento);
    filaP_toString(f, str);
    printf("%s\n", str );

    filaP_remover(f, &elemento);
    filaP_toString(f, str);
    printf("%s\n", str );

    filaP_remover(f, &elemento);
    filaP_toString(f, str);
    printf("%s\n", str );

    filaP_remover(f, &elemento);
    filaP_toString(f, str);
    printf("%s\n", str );

    filaP_remover(f, &elemento);
    filaP_toString(f, str);
    printf("%s\n", str );

    filaP_remover(f, &elemento);
    filaP_toString(f, str);
    printf("%s\n", str );

    filaP_remover(f, &elemento);
    filaP_toString(f, str);
    printf("%s\n", str );


    filaP_remover(f, &elemento);
    filaP_toString(f, str);
    printf("%s\n", str );

    filaP_destruir(&f);
    return 0; 
}

int main(){
    controlado();
    aletatorio();

}