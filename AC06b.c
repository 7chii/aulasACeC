#include <stdio.h>
// fibonacci
// recursivo
void func(int a, int b, int cas, int num)
{
    if (cas > 0)
    {
        int c = a + b;
        printf("%d + %d = %d\n", a, b, c);
        a = b;
        b = c;
        func(a, b, cas - 1, num);
    }
    else
    {
    }
}
// iterativo
void funciter(int a, int b, int cas)
{
    for (int i = 0; i < cas; i++)
    {
        int c = a + b;
        printf("%d + %d = %d\n", a, b, c);
        a = b;
        b = c;
    }
}
int main()
{
    int cas, cas2, a, b;
    a = 0;
    b = 1;
    printf("quantas casas de fibonacci?\n:");
    scanf(" %d", &cas);
    cas = cas - 1;
    cas2 = cas;
    printf("recurs!\n");
    func(a, b, cas, cas2);
    printf("iter!\n");
    funciter(a, b, cas);
}
/* 3-> analise de complexidade dos algoritmos)
    alg1 e 2:sequencia n dado tamanho n retornar seq ao contrario 
        o algoritmo executa n passos, sem diferenca
    alg 3 e 4:fibonacci
        recurs: chamadas internas, ex para n = 6 -> 16 vezes
        iter: roda n vezes(numero dado)
*/