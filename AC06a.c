#include <stdio.h>
//dado N e uma sequencia com N numeros inteiros, imprimir a sequencia na ordem inversa a que foi lida
//iterativo e recursivo
void iter(int MAX, int v[]){
    for(int i=MAX-1;i>-1;i--){
        printf("ele. %d \n",v[i]);
    }
}
void recurs(int MAX, int v[]){
    if(MAX>0){
        printf("ele. %d \n",v[MAX-1]);
        recurs(MAX-1, v);
    }else{
    }
}

int main(){
    int MAX;
    int encontrado = 0, num;
    //::::::::FORMATACAO VETOR::::::::
    printf("informe ele do vetor: \n");
    scanf("%d",&MAX);
    int v[MAX];
    for(int i=0;i<MAX;i++){
        printf("insira ele. %d: ",i);
        scanf("%d",&v[i]);
    }
    printf("\n ITERATIVA \n");
    iter(MAX, v);
    printf("\n RECURSIVA: \n");
    recurs(MAX, v);
}