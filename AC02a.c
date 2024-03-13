#include <stdio.h>
//alg de busca sequencial de num && quantas vezes apareceu
//::::::::ALGORITMO DE BUSCA SEQUENCIAL PER SE::::::::
int busca(int n, int *v, int d){
    for(int i = 0; i<n; i++){
        if (d==v[i]) return 1;
    }
};
//::::::::SOMA VEZES NUMERO BUSCADO APARECE::::::::
int vezes(int n, int *v, int d){
    int num = 0;
    for(int i = 0; i<n; i++){
        if(d==v[i]){
            num = num + 1;
        };
    }return num;
};
int main(void){
    int MAX,vez;
    int encontrado = 0, num;
    //::::::::FORMATACAO VETOR::::::::
    printf("informe ele do vetor: \n");
    scanf("%d",&MAX);
    int v[MAX];
    for(int i=0;i<MAX;i++){
        printf("insira ele. %d: ",i);
        scanf("%d",&v[i]);
    }
    //::::::::NUMERO BUSCA::::::::
    printf("informe num a buscar: \n");
    scanf("%d", &num);
    //::::::::FUNCOES::::::::
    encontrado = busca(MAX, v, num);
    vez = vezes(MAX, v, num);
    //::::::::PRINT::::::::
    if(encontrado){
        printf("numero encontrado!\nApareceu [%d] vezes!",vez);
    }else{
        printf("num NAO encontrado!");
    }
    
}