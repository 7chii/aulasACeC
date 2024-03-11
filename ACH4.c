#include <stdio.h>
#include <stdlib.h>
//ex 5 (est homogeneas: matriz- inserir dados da matriz abaixo pelo teclado e imprimir);
 
int main(){
    int matriz[3][3];
    printf("insira dados da matriz!! :");
    for(int i = 0; i<3; i++){
        for(int j =0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d | ",matriz[i][j]);
        }
        printf("\n");
    }
    printf(" good job!! :) \n im proud of you!");
}