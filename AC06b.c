#include <stdio.h>
// fibonacci
// recursivo
long func(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return (func(num - 1) + func(num - 2));
    };
}
void funci(int cas)
{
    int a = 0;
    int b = 1;
    int c = 0;
    for (int i = 0; i < cas; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("numero %d aparece!\n",a);
}
// fibonacci print aproximado
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
    printf("recurs!\n");
    cas = cas - 1;
    cas2 = func(cas);
    printf("numero %d aparece!\n", cas2); 
    printf("iter!\n");
    funci(cas);
    printf("\n");
    funciter(a, b, cas);
}
/* 3-> analise de complexidade dos algoritmos)
    alg1 e 2:sequencia n dado tamanho n retornar seq ao contrario
        o algoritmo executa n passos, sem diferenca
    alg 3 e 4:fibonacci
        recurs: chamadas internas, ex para n = 6 -> 16 vezes
        iter: roda n vezes(numero dado)
*/