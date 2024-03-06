#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ponteiro;

    ponteiro = malloc(sizeof(int));

    printf("Endereco de ponteiro %p\n", ponteiro);
    *ponteiro = 90;
    printf("Conteudo do ponteiro: %d\n", *ponteiro);
    free(ponteiro);
}