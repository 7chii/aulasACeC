#include <stdio.h>
//alg busca pelo maior num em vetor
int maxi(int n, int v[]){
    int max;
    if (n==1){
        max=v[0];
    }else{
        max = maxi(n-1,v);
        if(max<v[n-1])
            max=v[n-1];
    }
    return max;
}
int main(){
    int num[] = {5, 12, 4, -1, 2, -7,9};
    int maior;
    maior = maxi(7, num);
    printf("O maior numero eh: %d",maior);
    return 0;
}