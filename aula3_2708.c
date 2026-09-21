#include <stdio.h>
#include <string.h>
#include "aula3_2708.h"

void cadastrarAlunos(Aluno alunos[], int tamanho){
    for(int i=0;i<tamanho;i++){
        printf("Digite o nome do %d aluno: ",i+1);
        fgets(alunos[i].nome,sizeof(alunos[i].nome),stdin);
        alunos[i].nome[strcspn(alunos[i].nome,"\n")]='\0';

        printf("Digite a idade do %d aluno: ", i+1);
        scanf("%d",&alunos[i].idade);
        getchar();
    }
}

void exibirAlunos(const Aluno alunos[], int tamanho){
    printf("\n== Lista de Alunos ==\n");
    for(int i=0;i<tamanho;i++){
        printf("Nome %s, Idade: %d\n",alunos[i].nome,alunos[i].idade);
    }
}

void teste_pos_neg_zero(void){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    if(num==0){
        printf("O valor digitado é ZERO.\n");
    }else if(num>0){
        printf("O valor digitado é POSITIVO\n");
    }else{
        printf("O valor digitado é NEGATIVO\n");
    }
}

void conversao_num_mes(void){
    int opc=0;

    printf("Escolha um numero (1 a 12): ");
    scanf("%d",&opc);

    switch(opc){
        case 1: printf("Janeiro\n");break;
        case 2: printf("Fevereiro\n");break;
        case 3: printf("Março\n");break;
        case 4: printf("Abril\n");break;
        case 5: printf("Maio\n");break;
        case 6: printf("Junho\n");break;
        case 7: printf("Julho\n");break;
        case 8: printf("Agosto\n");break;
        case 9: printf("Setembro\n");break;
        case 10: printf("Outubro\n");break;
        case 11: printf("Novembro\n");break;
        case 12: printf("Dezembro\n");break;

        default: printf("Valor invalido! Digite um numero de 1 a 12.\n");break;
    }
}

void num_pares(void){
    int i=2;

    while(i<=50){
        printf("%d ",i);
        i+=2;
    }
    printf("\n");
}

void validacao_senha(void){

    const int senhaCorreta=7685;
    int senhaDigitada;

    do {
        printf("Digite a senha: ");
        scanf("%d",&senhaDigitada);

        if (senhaDigitada!=senhaCorreta){
            printf("Senha invalida! Tente novamente.\n");
        }
    }while(senhaDigitada!=senhaCorreta);

    printf("Acesso Liberado! Bem Vindo...");
}

void analise_temperatura(void){
    float temperaturas[7];
    float soma = 0.0, media;
    int i, acimaDaMedia = 0;

    for (i = 0; i < 7; i++) {
        printf("Digite a temperatura %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    media = soma / 7.0;

    for (i = 0; i < 7; i++) {
        if (temperaturas[i] > media) {
            acimaDaMedia++;
        }
    }

    printf("\nMedia das temperaturas: %.2f\n", media);
    printf("Quantidade de temperaturas acima da media: %d\n", acimaDaMedia);
}






