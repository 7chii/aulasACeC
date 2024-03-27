#include <stdio.h>
//recursividade 
void print(int a){
    if(a==0){
        printf("%d ", a);
    }else{
        printf("%d ", a);
        print(a - 1);
    }
}
void printp(int a){
    if(a==0){
        printf("%d ", a);
    }else{
        printp(a - 1);
        printf("%d ", a);
    }
}
void printn(int b){
    if(b==100){
        printf("%d ", b);
    }else{
        printf("%d ", b);
        printn(b + 1);
    }
}
//ver iterativa (instrucao de repeticao)
int fatorial(int n){
    if( n == 0 )
        return 1;
    else
        return n * fatorial(n - 1);
    }
//perceba que um for loop eh como uma funcao recursiva! chamada recursiva pq dentro da execucao, roda a si mesma
//alterando valores, ate um valor especifico!!
int main(){
    int a = 100;
    int b = 0;
    int n;
    printf("insira val n!\n");
    scanf("%d", &n);
    printf("\n 100 a 0! \n\n");
    print(a);
    printf("\n\n 0 a 100! meu codigo \n\n");
    printn(b);
    printf("\n\n 0 a 100!Usando pilha de func1! \n\n");
    printp(a);

    printf("\n\n func fatorial de num n! \n\n");
    int f = fatorial(n);
    printf("%d", f);
}