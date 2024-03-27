#include <stdio.h>
//pesquisa binaria recursiva
int busca(int vet[], int inicio, int fim, int chave){
    int meio;
    if(inicio > fim)
        return -1;
    else {
        meio = (inicio + fim)/2;
        if (vet[meio]==chave)
            return printf("elemento encontrado! \n pos [%d]", meio);
        else
            if(chave<vet[meio])
                return busca(vet, inicio, meio-1, chave);
            else
                return busca(vet, meio+1,fim, chave);
    }
}
int main(){
    int vetor[] = {12, 14, 17, 22, 56, 78, 99, 102, 110 , 112, 140, 145, 160 , 170 , 190, 199, 204, 240 , 255, 300};
    int ele;
    printf("insira elemento a buscar ! \n");
    scanf("%d", &ele);
    int ini = 1;
    int fim = 20;
    busca(vetor, ini, fim, ele);
}