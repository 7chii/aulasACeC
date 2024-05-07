#include <stdio.h>

int main(){
    int n;
    printf("insira num de elementos no vetor:\n");
    scanf(" %d",&n);
    int vec[n];
    for(int i=0;i<n;i++){
        int val;
        printf("insira posicao[%d]: ",i);
        scanf("%d",&val);
        vec[i]=val;
    }
    int val =0;
    if(n%2==0){
        val = (vec[((n-1)/2)]+vec[(n/2)])/2;
        printf("par\n");
    }else if(n%2==1){
        val = vec[(n-1)/2];
        printf("impar\n");
    }
    printf("valor: %d\n",val);

}