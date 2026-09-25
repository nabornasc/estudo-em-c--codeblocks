//
// Created by nabornasc on 24/09/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include "pilha_2409.h"

// Inicializa a pilha como vazia
void inicializarPilha(Pilha *p) {
    p->topo = -1;
}

// Func para imprimir
void imprimirPilha(const Pilha *p) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia.\n");
        return;
    }else {
        printf("Pilha (topo -> base):\n");
        for (int i = p->topo; i >= 0; --i) {
            printf("%d\n", p->itens[i]);
        }
    }
}

// Verifica se a pilha está vazia
int pilhaVazia(const Pilha *p) {
    return p->topo == -1;
}

// Verifica se a pilha está cheia
int pilhaCheia(const Pilha *p) {
    return p->topo == TAM_MAX - 1;
}

int push(Pilha *p, int valor) {
    if (pilhaCheia(p)) {
        printf("Erro: pilha cheia!\n");
        return 0;
    }

    p->itens[++p->topo] = valor;
    return 1;
}

int pop(Pilha *p, int *valorRemovido) {
    if (pilhaVazia(p)) {
        printf("Erro: pilha vazia!\n");
        return 0;
    }

    *valorRemovido = p->itens[p->topo--];
    return 1;
}

void pilhaInicializar(Pilha *p) {
    int valorRemovido;

    inicializarPilha(p);

    push(p, 10);
    push(p, 20);
    push(p, 30);
    push(p, 35);
    push(p, 40);

    imprimirPilha(p);

    if (pop(p, &valorRemovido)) {
        printf("Valor removido com pop: %d\n", valorRemovido);
    }

    imprimirPilha(p);
}

void inicializarPilhaEnc(PilhaEncadeada *p) {
    p->topo = NULL;
}

int pilhaEncVazia(const PilhaEncadeada *p) {
    return p->topo == NULL;
}

void imprimirPilhaEnc(const PilhaEncadeada *p) {
    if (pilhaEncVazia(p)) {
        printf("Pilha encadeada vazia.\n");
        return;
    }

    printf("Pilha encadeada (topo -> base):\n");
    for (const PilhaNo *atual = p->topo; atual != NULL; atual = atual->abaixo) {
        printf("%d\n", atual->valor);
    }
}

int pushEnc(PilhaEncadeada *p, int valor) {
    PilhaNo *novo = malloc(sizeof(*novo));
    if (novo == NULL) {
        printf("Erro: memória insuficiente!\n");
        return 0;
    }

    novo->valor = valor;
    novo->abaixo = p->topo;
    p->topo = novo;
    return 1;
}

int popEnc(PilhaEncadeada *p, int *valorRemovido) {
    if (pilhaEncVazia(p)) {
        printf("Erro: pilha encadeada vazia!\n");
        return 0;
    }

    PilhaNo *removido = p->topo;
    *valorRemovido = removido->valor;
    p->topo = removido->abaixo;
    free(removido);
    return 1;
}

void pilhaEncadeadaTeste(PilhaEncadeada *p) {
    int valorRemovido;

    inicializarPilhaEnc(p);
    pushEnc(p, 100);
    pushEnc(p, 200);
    pushEnc(p, 300);

    imprimirPilhaEnc(p);

    if (popEnc(p, &valorRemovido)) {
        printf("Valor removido com pop encadeado: %d\n", valorRemovido);
    }

    imprimirPilhaEnc(p);

    while (!pilhaEncVazia(p)) {
        popEnc(p, &valorRemovido);
    }
}