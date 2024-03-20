//alg busca binaria
#include <stdio.h>


int main(){
    int arr[10] = {20, 77, 298, 439, 502, 567, 589, 632, 699, 702};
    int proc;
    int len = 10;
    printf("insira num a procurar! : \n");
    scanf(" %d", &proc);
    for(int i = 0;i<10;i++){
        
        if(proc==arr[len]){
            printf("num %d encontrado em [%d]",proc, len );
            i=11;
        }else if(proc>arr[len]){
            len = len + 1;
        }else if(proc<arr[len]){
            len = len/2;
        }
    }
    
}

