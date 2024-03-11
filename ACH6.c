#include <stdio.h>

//ex 1 (est heterogeneas: struct- exemplo 1);
typedef struct {
    int pecas;
    float preco;
}Venda;

int main(){
    Venda A = {10, 55.0};
    Venda B = {15, 124.00};
    Venda total;
    total.pecas = A.pecas + B.pecas;
    total.preco = A.preco + B.preco;

    printf("\n Total pecas......: %d\n", total.pecas);
    printf("\n Total pecas.......: %2.2f\n", total.preco);
}