#include <stdio.h>
#include <stdlib.h>

#include "func_aux.h"

void limpar_tela(void)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif // _WIN32
}

void pausar(void)
{
    int c;

    while((c=getchar())!='\n'&&c!=EOF)
{
}
    printf("\nPressione ENTER para continuar...");
    getchar();
}
