#include "fila.h"
#include "string.h"

#define TAM_INICIAL 5

/**************************************
* DADOS
**************************************/
struct _fila {
	TipoElemento* vetor;
	int tamVetor;
	int inicio;
	int fim;
	int qtdeElementos;
};


/**************************************
* FUNÇÕES AUXILIARES
**************************************/

bool fila_ehValida(Fila* f){
    return (f != NULL? true: false);
    
}

void realoca(Fila* f, int novoTamanho){
    TipoElemento* vetorAuxiliar = (TipoElemento*)calloc(novoTamanho, sizeof(TipoElemento));
    int i;
    int pos = f->inicio;

    for(i = 0; i < f->qtdeElementos; i++){
        vetorAuxiliar[i] = f->vetor[pos];
        pos = (pos+1) % f->tamVetor;
    }
    free(f->vetor);
    f->vetor = vetorAuxiliar;
    f->inicio = 0;
    f->fim = f->qtdeElementos;
    f->tamVetor = novoTamanho;
}

void verifica_fila_aumenta(Fila* f){
    if(f->qtdeElementos == f->tamVetor - 1){ // precisamos deixar 1 posicao vazia entre o fim e o inicio
        realoca(f, f->tamVetor*2);
    }
}

void verifica_diminui(Fila* f){
    if (f->qtdeElementos <= f->tamVetor / 4 && f->tamVetor > TAM_INICIAL){
        realoca(f, f->tamVetor/2);
    }
}

int fila_tamVetor(Fila* f){
    return f->tamVetor;
}

/**************************************
* IMPLEMENTAÇÃO
**************************************/
Fila* fila_criar(){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->vetor = (TipoElemento*) calloc(TAM_INICIAL, sizeof(TipoElemento));
    f->tamVetor = TAM_INICIAL;
    f->qtdeElementos = 0;
    f->inicio = f->fim = 0;
    return f;
}

void fila_destruir(Fila** enderecoFila){
    if (enderecoFila == NULL) return;
    if(!fila_ehValida(*enderecoFila)) return;

    Fila* f = *enderecoFila;
    free(f->vetor);
    free(f);
    *enderecoFila = NULL;
}

bool fila_inserir(Fila* f, TipoElemento elemento){
    if(!fila_ehValida(f)) return false;

    verifica_fila_aumenta(f);
    f->vetor[f->fim] = elemento;
    f->fim = (f->fim + 1) % f->tamVetor;
    f->qtdeElementos++;

    return true;
}

bool fila_remover(Fila* f, TipoElemento* saida){ // estratégia do scanf
    if(!fila_ehValida(f)) return false;
    if(fila_vazia(f)) return false;

    TipoElemento elemento = f->vetor[f->inicio];
    f->inicio = (f->inicio+1) % f->tamVetor;
    *saida = elemento;
    f->qtdeElementos--;
    verifica_diminui(f);
    
    return true;
}

bool fila_primeiro(Fila* f, TipoElemento* saida){ // estratégia do scanf
    if(!fila_ehValida(f)) return false;
    if(fila_vazia(f)) return false;

    *saida = f->vetor[f->inicio];
    return true;
}

bool fila_vazia(Fila* f){
    if(!fila_ehValida(f)) return true;

    return (f->qtdeElementos == 0 ? true : false);
}

int fila_tamanho(Fila* f){
    if(!fila_ehValida(f)) return 0;

    return f->qtdeElementos;
}

void fila_imprimir(Fila* f, void (*printElemento)(void*)){
    if(!fila_ehValida(f)) return;

    printf("[");

    for(int i = 0; i < f->qtdeElementos; i++){
        //printElemento(f->vetor[i]); //;printf("%d,", f->vetor[i]);
        printf("%d,", f->vetor[i]);
       
    }

    printf("]");
    printf("\n");
}

void fila_imprimir_char(Fila* f){
    if(!fila_ehValida(f)) return;

    for(int i = 0; i < f->qtdeElementos; i++){
        printf("%c ", f->vetor[i]);
    }

    printf("\n");
}

void fura_fila(Fila* f, TipoElemento elemento) {

    Fila* f_retorna = fila_criar();
    fila_inserir(f_retorna, elemento);

    int tamf1 = fila_tamanho(f);

    for (int i = 0; i < tamf1; i++){
        fila_remover(f, &elemento);
        fila_inserir(f_retorna, (char) elemento);
    }

    tamf1 = fila_tamanho(f_retorna);
    for (int i = 0; i < tamf1; i++){
        fila_remover(f_retorna, &elemento);
        fila_inserir(f, (char) elemento);
    }
}


Fila* fila_clone(Fila* f){

    TipoElemento elemento;
    int tamf1 = fila_tamanho(f);

    for (int i = 0; i < tamf1; i++){
        elemento = 0;
        fila_remover(f, &elemento);
        fila_inserir(f, elemento);
    }

    return f;
};
