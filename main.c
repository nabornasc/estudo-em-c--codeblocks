#include <stdio.h>
#include <locale.h> // biblioteca de linguagem
#include "aula1-2008.h" // cabeçalho

int main(void){
    setlocale(LC_ALL,"Portuguese"); // set linguagem em pt_BR

    int opcao;

    do {
        printf("\n===================================\n");
        printf("       MENU DE EXERCICIOS DE C         ");
        printf("\n===================================\n");

        printf("1- Leitura de Dados (Nome/ Idade)\n");
        printf("2- Laços de Repetição (For/ While)\n");
        printf("3- Operações Basicas (+/ -/ */ Média)\n");
        printf("4- Media de Vetor[10]\n");
        printf("\n===================================\n");
        printf("5- Cadastro de Aluno (typedef struct)\n");
        printf("6- Verificar Maioridade (if/else)\n");
        printf("7- Ajuste Salarial ()\n");

        printf("0- Sair\n");
        printf("Escolha uma opção: ");

        scanf("%d",&opcao);

        switch(opcao){
            case 1: exer_leitura_dados();break;
            case 2: exer_lacos_repeticao();break;
            case 3: exer_operacoes_basicas();break;
            case 4: exer_media_vetor();break;
            case 5: exer_struct_aluno();break;
            case 6: exer_maioridade();break;
            case 7: exer_salario_bonus();break;

            case 0: printf("encerrando o programa...\n");break;
            default: printf("Opção invalida!\n");break;
        }
    }while (opcao!=0);
    return 0;
}
