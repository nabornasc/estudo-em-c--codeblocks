#ifndef AULA2-1709_H_INCLUDED
#define AULA2-1709_H_INCLUDED

typedef struct No { // estrutura para lista encadeada
    int valor;
    struct No *prox;
}No;

No* criarNo(int valor);
void exer_lista_encadeada(void);

#endif // AULA2-1709_H_INCLUDED
