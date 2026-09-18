#include <stdio.h>
#include <stdlib.h>
#include "aula2_1709.h"

No* criarNo(int valor){
    No *novo = (No*) malloc(sizeof(No));

    if(novo==NULL){
        printf("Erro: sem memoria disponivel.\n");
        exit(1);
    }

    novo->valor=valor;
    novo->prox=NULL;

    return novo;
}

void exer_lista_encadeada(void){
    printf("\n== TESTE DE LISTA ENCADEADA ==\n");

    No *inicio=criarNo(10);
    inicio->prox=criarNo(20);
    inicio->prox->prox=criarNo(30);

    No *atual = inicio;
    while (atual!=NULL){
        printf("%d ->",atual->valor);
        atual=atual->prox;
    }
    printf("NULL\n");

    atual = inicio;
    while(atual!=NULL){
        No *prox=atual->prox;
        free(atual);
        atual=prox;
    }
}
