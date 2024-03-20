#include <stdio.h>
//encontrar o maior e o menor elemento de um vetor qualquer (aquele que percorre todos os elem)

int main(){
    int numvec;
    printf("insira num de ele no vetor: \n");
    scanf(" %d", &numvec);
    int vetor[numvec];
    for(int i=0; i<numvec;i++){
        printf("insira elemento %d do vetor: \n",i);
        scanf(" %d",&vetor[i]);
    }
    //print ele vetor teste
    for(int i=0; i<numvec;i++){
        printf(" %d",vetor[i]);
    }for(int i=0; i<numvec;i++){
        for(int j=0;j<numvec;j++){
            if(vetor[i]<vetor[j]){
                int temp;
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;

            }
        }
    }printf("\nmenor elemento = \n%d\nmaior elemento = \n%d",vetor[0],vetor[numvec-1]);
}