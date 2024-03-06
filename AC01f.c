#include <stdio.h>
#include <stdlib.h>

//testando alocacao dinamica de ponteiro ex6
int main(){
    int *ptr;
    ptr= (int*)malloc(sizeof(int)*10);
    if (ptr == NULL){
        printf("nao foi possivel alocar mem!!!\n");
        exit(1);
    }
}