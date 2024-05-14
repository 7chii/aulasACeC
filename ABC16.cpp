#include <stdio.h>
using namespace std;
float dados[10]= {21.5, 25.5, 14.5, 15.8, 17.6,  8.9, 9.6, 18.6, 17, 12};
int n=10;
int main(){
    printf("vetor de dados og: \n");
    printf("indice[-] ; elemento[-]\n");
    for(int i=0;i<=n-1;i++){
        float num = dados[i];
        printf("[%d] ; ",i);
        printf("[%f]\n",num);
    }
    printf("\nvetor ordenado:\n");
    printf("indice[-] ; elemento[-]\n");
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(dados[i]<dados[j]){
                float aux=dados[j];
                dados[j]=dados[i];
                dados[i]=aux;
            }
        }
    }
    for(int i=0;i<=n-1;i++){
        float num = dados[i];
        printf("[%d] ; ",i);
        printf("[%f]\n",num);
    }
}