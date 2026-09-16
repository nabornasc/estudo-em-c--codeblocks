#include <stdio.h>
#include <locale.h> // biblioteca de linguagem
#include "aula1-2008.h" // cabeçalho
#include "vetores.h"

int main(void){
    setlocale(LC_ALL,"Portuguese"); // set linguagem dos caracteres em pt_BR

    int opcao;

    do {
        printf("\n===================================\n");
        printf("       MENU DE EXERCICIOS DE C         ");
        printf("\n===================================\n");

        printf("1- Leitura de Dados (Nome/ Idade)\n");
        printf("2- Laços de Repetição (For/ While)\n");
        printf("3- Operações Basicas (+/ -/ */ Média)\n");
        printf("4- Media de Vetor[10]\n");
        printf("5- Cadastro de Aluno (typedef struct)\n");
        printf("6- Verificar Maioridade (if/else)\n");
        printf("\n===================================\n");
        printf("7- Ajuste Salarial ()\n");
        printf("8- Calculo Quociente/Resto ()\n");
        printf("9- Calculo Area do Triangulo ()\n");
        printf("10- Conversão Moeda (R$ to US$)\n");
        printf("11- Media 3 provas aluno ()\n");
        printf("12- Contador de numero(int) negativo ()\n");
        printf("\n===================================\n");
        printf("13- teste vetor 1\n");

        printf("0- Sair\n");
        printf("\nEscolha uma opção: ");

        if (scanf("%d",&opcao)!=1){ //tratamento caso seja digitado caracteres
            while(getchar()!='\n');
            continue;
        }

        while(getchar()!='\n'); // limpeza de buffer acumulada apos ENTER

        switch(opcao){
            case 1: exer_leitura_dados();break;
            case 2: exer_lacos_repeticao();break;
            case 3: exer_operacoes_basicas();break;
            case 4: exer_media_vetor();break;
            case 5: exer_struct_aluno();break;
            case 6: exer_maioridade();break;
            case 7: exer_salario_bonus();break;
            case 8: exer_quociente_resto();break;
            case 9: exer_area_triangulo();break;
            case 10: exer_conversao_moeda();break;
            case 11: prog_media_materia();break;
            case 12: cont_num_negativos();break;
            case 13: test_vet1();break;

            case 0: printf("encerrando o programa...\n");break;
            default: printf("Opção invalida!\n");break;
        }
    }while (opcao!=0);
    return 0;
}


