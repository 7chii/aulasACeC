#include <iostream>
#include<math.h>

using namespace std;
float dados[10]= {21.5, 25.5, 14.5, 15.8, 17.6,  8.9, 9.6, 18.6, 17, 12};
int n=10;

int main(){
    float soma=0.0;
    for(int i=0;i<=9;i++){
        soma+=dados[i];
    }

    float somaquad=0.0;
    for(int i=0;i<=9;i++){
        somaquad+=dados[i]*dados[i];
    }

    float media=0.0;
    for(int i=0; i<=9;i++){
        media+=dados[i];
    }
    media=(media/9);
   // printf("%d\n%d\n%d\n", soma, somaquad, media);
   cout<<soma<<endl;
   cout<<somaquad<<endl;
   cout<<media<<endl;

   //ordenacao
   for(int i=0;i<=4;i++){
    for(int j=0;j<=4;j++){
        if(dados[i]<dados[j]){
            float seg = dados[i];
            dados[i]=dados[j];
            dados[j]=seg;
        }
    }
   }
   for(int i=4;i<=9;i++){
    for(int j=4;j<=9;j++){
        if(dados[i]<dados[j]){
            float seg = dados[j];
            dados[j]=dados[i];
            dados[i]=seg;
        }
    }
   }
   for(int i=0;i<=9;i++){
    cout<<dados[i]<<endl;
   }
   cout<<endl;
   for(int i=9;i>=0;i--){
    cout<<dados[i]<<endl;
   }
}