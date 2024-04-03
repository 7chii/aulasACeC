#include <stdio.h>
//conversao num decimal
void ConvBin(int dec){
    int a;
    if(dec/2!=0){
        a = dec/2;
        ConvBin(a);
        printf("%d ",dec%2);
    }else{
        printf("%d ",dec%2);
    }
}
int main(){
    int numero;
    printf("digite num a converter para binario!: \n");
    scanf(" %d",&numero);
    ConvBin(numero);
    return 0;
}
