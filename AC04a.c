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
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    int ele;
    printf("insira elemento a buscar ! \n");
    scanf("%d", &ele);
    int ini = 1;
    int fim = 18;
    busca(vetor, ini, fim, ele);
}