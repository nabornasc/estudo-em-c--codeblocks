# pOne — Exercícios de C

![Linguagem C](https://img.shields.io/badge/linguagem-C-00599C?logo=c&logoColor=white)
![CMake](https://img.shields.io/badge/build-CMake-064F8C?logo=cmake&logoColor=white)

Projeto desenvolvido para praticar os fundamentos da linguagem C por meio de um
menu interativo de exercícios executado no terminal. O programa reúne exemplos
de entrada e saída, estruturas de decisão e repetição, vetores, estruturas,
listas encadeadas e manipulação básica de dados.

## Funcionalidades

O menu principal disponibiliza exercícios sobre:

- leitura de dados, operações matemáticas e média;
- laços `for` e `while`;
- vetores e boletim de alunos;
- cadastro de alunos com `struct`, `fgets` e `getchar`;
- verificação de maioridade e classificação de números;
- ajuste salarial, quociente e resto, área do triângulo e conversão de moeda;
- média de provas e contagem de números negativos;
- lista encadeada usando alocação dinâmica com `malloc`;
- conversão de números para meses;
- sequência de números pares;
- validação de senha com `do...while`;
- análise de temperatura.

Ao iniciar o programa, escolha uma opção numérica no menu. A opção `0` encerra
a execução.

## Estrutura do projeto

| Arquivo | Descrição |
| --- | --- |
| `main.c` | Inicializa o programa e apresenta o menu principal. |
| `aula1_2008.c/.h` | Exercícios introdutórios de entrada, decisões, repetições e operações. |
| `aula2_1709.c/.h` | Exemplo de lista encadeada. |
| `aula3_2708.c/.h` | Cadastro de alunos e exercícios complementares. |
| `vetores.c/.h` | Exercícios com vetores e boletim de turma. |
| `func_aux.c/.h` | Funções auxiliares para limpar a tela e pausar a execução. |
| `CMakeLists.txt` | Configuração de compilação com CMake. |
| `.github/workflows/c-cpp.yml` | Integração contínua para compilar o projeto no GitHub Actions. |

## Requisitos

- Compilador C com suporte ao padrão C11, como GCC ou Clang;
- CMake 3.10 ou superior;
- Git, caso queira clonar o repositório.

## Como executar

### Clonando o repositório

```bash
git clone https://github.com/nabornasc/estudo-em-c--codeblocks.git
cd estudo-em-c--codeblocks
```

### Compilando com CMake

```bash
cmake -S . -B build
cmake --build build
```

### Executando

No Linux e no macOS:

```bash
./build/pOne
```

No Windows, execute o arquivo `pOne.exe` gerado dentro da pasta de build.

## Compilação manual

Também é possível compilar os arquivos diretamente com GCC:

```bash
gcc -std=c11 -Wall -Wextra -pedantic \
  main.c aula1_2008.c aula2_1709.c aula3_2708.c \
  func_aux.c vetores.c -o pOne
```

Depois, execute:

```bash
./pOne
```

## Exemplo de uso

```text
===================================
       MENU DE EXERCICIOS DE C
===================================
1- Leitura de Dados (Nome/ Idade)
2- Laços de Repetição (For/ While)
...
0- Sair

Escolha uma opção:
```

## Integração contínua

O workflow do GitHub Actions executa automaticamente a configuração e a
compilação do projeto com CMake em pushes e pull requests direcionados à
branch `master`.

## Objetivo

Este repositório tem finalidade educacional e serve como registro da prática
progressiva de conceitos essenciais da linguagem C.

## Licença

Nenhuma licença foi definida no repositório até o momento.
