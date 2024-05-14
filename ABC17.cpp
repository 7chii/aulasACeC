#include <stdio.h>
//operacao mediana em vetor
int main(){
    int n = 100;
    //printf("insira num de elementos no vetor:\n");
    //scanf(" %d",&n);
    float vec[n];
    for(int i=0;i<n;i++){
        float val;
        printf("insira posicao[%d]: ",i);
        scanf("%f",&val);
        vec[i]=val;
    }
    float val =0;
    if(n%2==0){
        val = (vec[((n-1)/2)]+vec[(n/2)])/2;
        printf("par\n");
    }else if(n%2==1){
        val = vec[(n-1)/2];
        printf("impar\n");
    }
    printf("valor: %f\n",val);

}