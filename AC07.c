#include <stdio.h>
//8. Implemente em Linguagem C uma função recursiva que receba dois parâmetros inteiros (x e y) 
//e calcule a potenciação pelo método dos produtos sucessivos (𝑥 𝑦 ). Ex.: 2 3 = 2 ∗ 2 ∗ 2. 
//Dê a ordem de complexidade  
long expo(int num,int carr, int exp){
    //recursiva
    if(exp==1){
        return num;
    }else{
        num=num*carr;
        printf("* %d",carr);
        return expo(num, carr, exp-1);
    }
}

int main(){
    int num, exp, carr;
    printf("insira numero: \n");
    scanf(" %d", &num);
    carr = num;
    printf("insira exponente: \n");
    scanf(" %d", &exp);
    printf("%d^%d: %d",num,exp, num);
    int res = expo(num, carr, exp);
    printf("\nresposta: %d", res);
}