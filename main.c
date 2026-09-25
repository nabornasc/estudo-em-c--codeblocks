#include <stdio.h>
#include <locale.h> // biblioteca de linguagem
#include "aula1_2008.h" // cabeçalho
#include "aula2_1709.h"
#include "aula3_2708.h"
#include "vetores.h"
#include "func_aux.h"
// #include "lista_linear.h"
#include <stdlib.h>

#include "pilha_2409.h"


int main(void){
    setlocale(LC_ALL,"Portuguese"); // set linguagem dos caracteres em pt_BR

    int opcao;

    Aluno listaAlunos[TOTAL_ALUNOS]; // criação do vetor
    Pilha pilha;
    PilhaEncadeada pilhaEncadeada;

    do {
        int totalAlunos=TOTAL_ALUNOS; // processamento do total alunos

        // limpar_tela();

        printf(
            "\n===================================\n"
            "       MENU DE EXERCICIOS DE C\n"
            "===================================\n"
            "1- Leitura de Dados (Nome/ Idade)\n"
            "2- Laços de Repetição (For/ While)\n"
            "3- Operações Basicas (+/ -/ */ Média)\n"
            "4- Media de Vetor[10]\n"
            "5- Cadastro de Aluno (typedef struct)\n"
            "6- Verificar Maioridade (if/else)\n"
            "\n===================================\n\n"
            "7- Ajuste Salarial ()\n"
            "8- Calculo Quociente/Resto ()\n"
            "9- Calculo Area do Triangulo ()\n"
            "10- Conversão Moeda (R$ to US$)\n"
            "11- Media 3 provas aluno ()\n"
            "12- Contador de numero(int) negativo ()\n"
            "\n===================================\n\n"
            "13- Teste Vetor 1\n"
            "14- Boletim Turma ()\n"
            "15- Exemplo de Lista Encadeada (malloc)\n"
            "\n===================================\n\n"
            "16- Cadastrar Alunos (typedef/ fgets/ getchar)\n"
            "17- Exibir Alunos Cadastrados //\\\n"
            "\n===================================\n\n"
            "20- Teste Numero Inteiro (Pos,Neg,ZERO)\n"
            "21- Conversor Numero em Mes\n"
            "22- Loop Numeros Pares (while +=2)\n"
            "23- Teste de login 'Simples' (do_while)\n"
            "24- Analise de temperatura ()\n"
            "25- Inicializar Pilha (Array)\n"
            "26- Inicializar Pilha (Encadeada)\n"
            "0- Sair\n"
            "\nEscolha uma opção: "
        );

        if (scanf("%d", &opcao) != 1) { //tratamento caso seja digitado caracteres
            while (getchar() != '\n') {}
            continue;
        }

        while(getchar()!='\n') {} // limpeza de buffer acumulada apos ENTER

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
            case 16: cadastrarAlunos(listaAlunos,totalAlunos);pausar();break;
            case 17: exibirAlunos(listaAlunos,totalAlunos);pausar();break;

            case 20: teste_pos_neg_zero();pausar();break;
            case 21: conversao_num_mes();pausar();break;
            case 22: num_pares();pausar();break;
            case 23: validacao_senha();pausar();break;
            case 24: analise_temperatura();pausar();break;
            case 25: pilhaInicializar(&pilha);pausar();break;
            case 26: pilhaEncadeadaTeste(&pilhaEncadeada);pausar();break;

            case 0: printf("encerrando o programa...\n");break;
            default: printf("Opção invalida!\n");break;
        }
    }while (opcao!=0);
    return 0;
}

// system("cls")||("clear")
// lazarus