//
// Created by nabornasc on 24/09/2026.
//

#ifndef PONE_PILHA_2409_H
#define PONE_PILHA_2409_H
#define TAM_MAX 100

// Pilha implementada com array.
typedef struct {
    int itens[TAM_MAX];
    int topo;
} Pilha;

// Pilha encadeada: o topo aponta para o primeiro nó.
typedef struct PilhaNo {
    int valor;
    struct PilhaNo *abaixo;
} PilhaNo;

typedef struct {
    PilhaNo *topo;
} PilhaEncadeada;

void inicializarPilha(Pilha *p);
void imprimirPilha(const Pilha *p);
int pilhaVazia(const Pilha *p);
int pilhaCheia(const Pilha *p);
int push(Pilha *p, int valor);
int pop(Pilha *p, int *valorRemovido);
void pilhaInicializar(Pilha *p);

void inicializarPilhaEnc(PilhaEncadeada *p);
void imprimirPilhaEnc(const PilhaEncadeada *p);
int pilhaEncVazia(const PilhaEncadeada *p);
int pushEnc(PilhaEncadeada *p, int valor);
int popEnc(PilhaEncadeada *p, int *valorRemovido);
void pilhaEncadeadaTeste(PilhaEncadeada *p);

#endif //PONE_PILHA_2409_H
