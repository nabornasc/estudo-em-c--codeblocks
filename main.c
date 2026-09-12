#include <stdio.h>
#include "aula1-2008.h" // cabeçalho

int main(void){

    int opcao;

    do {
        printf("\n===================================\n");
        printf("       MENU DE EXERCICIOS DE C         ");
        printf("\n===================================\n");

        printf("1- Leitura de dados (Nome/ Idade)\n");
        printf("2- Laços de repetição (For/ While)\n");

        printf("0- Sair\n");
        printf("Escolha uma opção: ");

        scanf("%d",&opcao);

        switch(opcao){
            case 1: exer_leitura_dados();break;
            case 2: exer_lacos_repeticao();break;

            case 0: printf("encerrando o programa...\n");break;
            default: printf("Opção invalida!\n");break;
        }
    }while (opcao!=0);
    return 0;
}
