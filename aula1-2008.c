#include <stdio.h> // bibliotecas C
#include <stdlib.h>
#include "aula1-2008.h" // importação cabeçalho

void exer_leitura_dados(void){
    int idade;
    char nome[50];

    printf("\n-- EXERCÍCIOS: LEITURA DE DADOS --\n");
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("\nOlá %s voce tem %d anos\n", nome, idade);
}

void exer_lacos_repeticao(void){
    int i, x=10;

    printf("\n-- EXERCICIOS: LAÇOS DE REPETIÇÃO --\n");
    for(i=0;i<=10;i++){
        printf("i = %d\n",i);
    }
    printf("\n");
    while(x>=0){ //condição verdadeira para iniciar o loop
        printf("x = %d\n",x);
        x--; // contador
    }
}
