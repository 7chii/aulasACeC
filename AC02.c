#include <stdio.h>
//analisando alg : ordenar de vetor

int main(){
    
    int temp;
    int MAX;
    printf("insira num de ele. :\n");
    scanf("%d",&MAX);
    int v[MAX];
    
    for(int i=0;i<MAX;i++){
        int num;
        printf("insira ele. %d: ",i);
        scanf("%d",&v[i]);
        
    }
    for(int i=0;i<MAX;i++){
        for(int j = 0;j<MAX;j++){
            if(v[i]<v[j]){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }for(int i=0;i<5;i++){
        printf("%d \n",v[i]);
    }
}