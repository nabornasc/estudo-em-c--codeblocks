#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"

#define MAX_ALUNOS 3

void test_vet1(void){

    int notas[5]={0}; // inicializa vetor com valor 0 em todas casas
    notas[0]=75;
    notas[1]=45;

    printf("Valores dentro do VETOR:");
    for(int i=0;i<5;i++){
        printf(" %d",notas[i]);
    }
    printf("\nChamado num: %d do vetor com [notas[0]]",notas[0]);
}

// ============================================================
// PROJETO 1: BOLETIM DO ALUNO
// Tópico: Vetores (fundamentos de memória)
// ============================================================
void boletim_aluno(void){

    float notas[MAX_ALUNOS];
    int quant;

    printf("===BOLETIM ALUNOS===\n");
    printf("Quantos alunos: ");
    scanf("%d",&quant);

    if(quant>MAX_ALUNOS){
        printf("Maximo permitido: %d alunos.\n",MAX_ALUNOS);
        return 1;
    }

    for( int i=0;i<quant;i++){ // preencher vetor
        printf("Digite nota aluno %d: ",i+1);
        scanf("%d",&notas[i]);
    }

    float soma=0; // andar vetor e somar notas
    for(int i=0;i<quant;i++){
        soma+=notas[i];
    }

    float media=soma/quant; // calculo de media

    float maior=notas[0]; // andar vetor e achar Maior/Menor nota
    float menor=notas[0];
    int posMaior=0,posMenor=0;

    for(int i=1;i<quant;i++){
        if(notas[i]>maior){maior=notas[i];posMaior=i;}
        if(notas[i]<menor){menor=notas[i];posMenor=i;}
    }


}
