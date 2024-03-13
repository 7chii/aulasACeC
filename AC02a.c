#include <stdio.h>
//alg de busca sequencial


int busca(int n, int *v, int d){
    int i;
    for(i = 0; i<n; i++){
        if (d==v[i]) return 1;
    }
};
int main(void){
    int MAX;
    int i, encontrado = 0, num;

    printf("informe ele do vetor: \n");
    scanf("%d",&MAX);
    int v[MAX];
    for(int i=0;i<MAX;i++){
        printf("insira ele. %d: ",i);
        scanf("%d",&v[i]);
    }
    printf("informe num a buscar: \n");
    scanf("%d", &num);
    encontrado = busca(MAX, v, num);
    if(encontrado){
        printf("numero encontrado!");
    }else{
        printf("num NAO encontrado!");
    }
    
}