#include <iostream>
#include <stdio.h>
//operacao mediana em vetor
int main(){
    int n;
    printf("insira num de elementos no vetor:\n");
    scanf(" %d",&n);
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
    printf("valor mediana: %f\n",val);
    for(int i=0;i<=n/2;i++){
        for(int j=i+1;j<=val;j++){
            if(vec[i]<vec[j]){
                float aux=vec[j];
                vec[j]=vec[i];
                vec[i]=aux;
            }
        }
    }for(int i=n/2; i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(vec[i]>vec[j]){
                float aux=vec[j];
                vec[j]=vec[i];
                vec[i]=aux;
            }
        }
    }
      for(int i=0;i<=n-1;i++){
        float num = vec[i];
        printf("posicao[%d]:",i);
        printf("[%f]\n",num);
    }

}