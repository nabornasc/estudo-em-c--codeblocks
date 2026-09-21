#ifndef AULA3_2708_H_INCLUDED
#define AULA3_2708_H_INCLUDED

#define TOTAL_ALUNOS 5

typedef struct {
    char nome[32];
    int idade;
} Aluno;

void cadastrarAlunos(Aluno alunos[],int tamanho);
void exibirAlunos(const Aluno alunos[],int tamanho);
void teste_pos_neg_zero(void);
void conversao_num_mes(void);
void num_pares(void);
void validacao_senha(void);
void analise_temperatura(void);

#endif // AULA3_2708_H_INCLUDED
