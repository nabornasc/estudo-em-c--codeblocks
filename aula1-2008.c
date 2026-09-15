#include <stdio.h> // bibliotecas C
#include <stdlib.h>
#include "aula1-2008.h" // importação cabeçalho

#define TOTAL_ALUNOS 3 // tamanho do vetor
#define COTACAO 5.20f


void exer_leitura_dados(void){
    int idade;
    char nome[32];

    printf("\n-- EXERCÍCIOS: LEITURA DE DADOS --\n");
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("\nOlá %s voce tem %d anos\n", nome, idade);
printf("\n");
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
printf("\n");
}

void exer_operacoes_basicas(void){
    int num1,num2;
    int soma,diferenca,produto;
    float media;

    printf("\n-- EXERCICIOS: OPERAÇÕES BASICAS --\n");
    printf("Digite 1º numero inteiro: ");
    scanf("%d",&num1);
    printf("Digite 2º numero inteiro: ");
    scanf("%d", &num2);

    soma=num1+num2;
    diferenca=num1-num2;
    produto=num1*num2;
    media=(float)soma/2;

    printf("Resultado:\n");
    printf("Soma = %d\n",soma);
    printf("Diferença = %d\n",diferenca);
    printf("Produto = %d\n",produto);
    printf("Média = %.2f\n",media);

printf("\n");
}

void exer_media_vetor(void){
    int numero[10];
    int i,soma=0;
    float media;

    printf("\n--  EXERCICIOS: MÉDIA DE VETOR (10 ELEMENTOS)  --\n");
    for(i=0;i<10;i++){
        printf("Digite %dº numero[int]: ",i+1);
        scanf("%d",&numero[i]);

        soma+=numero[i];
    }

    media=(float)soma/10;
    printf("\nA media da soma da lista é %.2f\n",media);
printf("\n");
}

// Estruturas com typedef struct

typedef struct{
    char pri_nome[32];
    float nota;
}Aluno;

static float calcular_media_turma(Aluno alunos[],int n){
    float soma=0.0f;
    for(int i=0;i<n;i++){
        soma+=alunos[i].nota;
    }
    return soma/n;
}

void exer_struct_aluno(void){

    Aluno turma[TOTAL_ALUNOS];

    printf("\n-- EXERCICIO: STRUCT ALUNO  --\n");
    for(int i=0;i<TOTAL_ALUNOS;i++){
        printf("--- ALUNO %d ---\n",i+1);
        printf("Nome: ");
        scanf(" %31[^\n]",turma[i].pri_nome); //espaço antes do % consome 'ENTER' pendentes
        printf("Nota: ");
        scanf("%f",&turma[i].nota);
    }

    printf("\nAlunos cadastrados:\n");
    for(int i=0;i<TOTAL_ALUNOS;i++){
        printf(" %-20s %.1f\n", turma[i].pri_nome, turma[i].nota);
    }

    printf("\nMedia da turma: %.2f\n", calcular_media_turma(turma, TOTAL_ALUNOS));
    printf("\n");
}

// exercicios lista 1

void exer_maioridade(void){
    int idade;

    printf("\n-- LISTA 1 - EXERCICIO 3 --\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade>=18){
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }
printf("\n");
}

void exer_salario_bonus(void){
    float salario,bonus,salario_final;

    printf("\n-- LISTA 1 - EXERCICIO 4 --\n");
    printf("Digite salário base: ");
    scanf("%f",&salario);
    printf("Digite o acréscimo salarial [%%] ");
    scanf("%f",&bonus);

    salario_final=salario+(salario*(bonus/100));

    printf("Seu salário reajustado é: R$ %.2f\n",salario_final);
printf("\n");
}

void exer_quociente_resto(void){
    int a,b;

    printf("\n-- EXERCICIOS: QUOCIENTE/RESTO --\n");
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d",&a,&b);

    if(b!=0){
        printf("Quociente: %d\n",a/b);
        printf("Resto: %d",a%b);
    } else {
        printf("Erro: Divisão por ZERO.\n");
    }
printf("\n");
}

void exer_area_triangulo(void){
    float base,altura,area;

    printf("\n-- EXERCICIOS: AREA TRIANGULO --\n");
    printf("Digite a BASE do triangulo: ");
    scanf("%f",&base);
    printf("Digite a ALTURA do triangulo: ");
    scanf("%f",&altura);

    area=(base*altura)/2.0f;
    printf("Area do triangulo: %.2f\n",area);
printf("\n");
}

void exer_conversao_moeda(void){
    float reais,dolar;

    printf("\n-- EXERCICIOS: CONVERSO MOEDA R$ to $ --\n");
    printf("Digite o valor R$: ");
    scanf("%f",&reais);

    dolar=reais/COTACAO;
    printf("Valor em dolares (US$): %.2f\n",dolar);
printf("\n");
}

//========================================================


void prog_media_materia(void){
    float nota1,nota2,nota3,media;

    printf("\n-- PROGRAMA: CALCULO DE MEDIA MATÉRIA --\n");
    printf("Digite as 3 notas, separadas por espaço: ");
    scanf("%f %f %f",&nota1,&nota2,&nota3);

    media=(nota1+nota2+nota3)/3;

    printf("A media final foi %.1f\n",media);
printf("\n");
}
