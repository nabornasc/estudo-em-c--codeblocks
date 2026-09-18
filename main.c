#include <stdio.h>
#include <locale.h> // biblioteca de linguagem
#include "aula1_2008.h" // cabeçalho
#include "aula2_1709.h"
#include "vetores.h"
#include "func_aux.h"

int main(void){
    setlocale(LC_ALL,"Portuguese"); // set linguagem dos caracteres em pt_BR

    int opcao;

    do {
        limpar_tela();

        printf("\n===================================\n");
        printf("       MENU DE EXERCICIOS DE C         ");
        printf("\n===================================\n");

        printf("1- Leitura de Dados (Nome/ Idade)\n");
        printf("2- Laços de Repetição (For/ While)\n");
        printf("3- Operações Basicas (+/ -/ */ Média)\n");
        printf("4- Media de Vetor[10]\n");
        printf("5- Cadastro de Aluno (typedef struct)\n");
        printf("6- Verificar Maioridade (if/else)\n");
        printf("\n===================================\n\n");
        printf("7- Ajuste Salarial ()\n");
        printf("8- Calculo Quociente/Resto ()\n");
        printf("9- Calculo Area do Triangulo ()\n");
        printf("10- Conversão Moeda (R$ to US$)\n");
        printf("11- Media 3 provas aluno ()\n");
        printf("12- Contador de numero(int) negativo ()\n");
        printf("\n===================================\n\n");
        printf("13- Teste Vetor 1\n");
        printf("14- Boletim Turma ()\n");
        printf("15- Exemplo de Lista Encadeada (malloc)\n");

        printf("0- Sair\n");
        printf("\nEscolha uma opção: ");

        if (scanf("%d",&opcao)!=1){ //tratamento caso seja digitado caracteres
            while(getchar()!='\n');
            continue;
        }

        while(getchar()!='\n'); // limpeza de buffer acumulada apos ENTER

        switch(opcao){
            case 1: exer_leitura_dados();pausar();break;
            case 2: exer_lacos_repeticao();pausar();break;
            case 3: exer_operacoes_basicas();pausar();break;
            case 4: exer_media_vetor();pausar();break;
            case 5: exer_struct_aluno();pausar();break;
            case 6: exer_maioridade();pausar();break;
            case 7: exer_salario_bonus();pausar();break;
            case 8: exer_quociente_resto();pausar();break;
            case 9: exer_area_triangulo();pausar();break;
            case 10: exer_conversao_moeda();pausar();break;
            case 11: prog_media_materia();pausar();break;
            case 12: cont_num_negativos();pausar();break;
            case 13: test_vet1();pausar();break;
            case 14: boletim_aluno();pausar();break;
            case 15: exer_lista_encadeada();pausar();break;

            case 0: printf("encerrando o programa...\n");break;
            default: printf("Opção invalida!\n");break;
        }
    }while (opcao!=0);
    return 0;
}

// system("cls")
// lazarus


