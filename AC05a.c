#include <stdio.h>
#include <math.h>
//soma recursiva de nums
//acrescentar 2 funcoes recursivas(numero x^n) (feito)
void somaNumsR(int num, int soma){
    if(num>0){
        if(num==1){
            printf("%d",num);
            soma = soma + num;
            num = num-1;
            somaNumsR(num, soma);
        }else{
            printf("%d+",num);
            soma = soma + num;
            num = num-1;
            somaNumsR(num, soma);
        }
    }else{
        printf("=%d\n",soma);
    }
}
int potNum(int num, int pot){
    if(pot==1){
        return(num);
    }else if(pot%2==0){
        return(pow(potNum(num, pot/2),2));
    }else{
        return (num*potNum(num,pot-1));
    }
}
int main(){
    int getNum, so, pot;
    so = 0;
    printf("insira numero a somar/potenciar! : \n");
    scanf(" %d",&getNum);
    int numpot = getNum;
    printf("insira potencia! : \n");
    scanf(" %d",&pot);
    //recursiva
    printf("soma nums recursiva:\n");
    somaNumsR(getNum, so);
    int n = getNum;
    //iterativa
     printf("soma nums iterativa:\n");
    for(int i=0;i<n;i++){
        getNum = getNum + i;
    }printf("%d",getNum);
    //funcao potencia x enesima
    printf("\npotencia!:\n");
    int res1=potNum(numpot,pot);
    printf("%d",res1);
}