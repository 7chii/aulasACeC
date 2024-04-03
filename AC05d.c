#include <stdio.h>
//::::::::SOMA VEZES NUMERO BUSCADO APARECE::::::::
int vezes(int n, int *v, int res){
    if(n!=0){
        if(v[n]%2==0){
        res = res + 1;
        vezes(n-1, v, res);
    }else{
        vezes(n-1, v, res);
    }
    }else{
        return res;
    }
};
int main(void){
    int MAX,vez;
    int res = 0;
    //int encontrado = 0, num;
    //::::::::FORMATACAO VETOR::::::::
    printf("informe ele do vetor: \n");
    scanf("%d",&MAX);
    int v[MAX];
    for(int i=0;i<MAX;i++){
        printf("insira ele. %d: ",i);
        scanf("%d",&v[i]);
    }
    //::::::::FUNCOES::::::::
    vez = vezes(MAX, v, res);
    //::::::::PRINT::::::::
    if(vez!=0){
        printf("pares:\n [%d] vezes!",vez);
    }else{
        printf("NAO encontrados pares!");
    }
    
}