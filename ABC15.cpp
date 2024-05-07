#include <iostream>
#include <cmath>
using namespace std;
//contas etc etc ex2 16/4/24
int soma(int vec[], int a){
    int res=0;
    for(int i=0;i<a;i++){
        res=res+vec[i];
    }
    return res;
}
int soma2(int vec[], int a){
    int res=0;
    for(int i=0;i<a;i++){
        res=res+(vec[i]*vec[i]);
    }
    return res;
}

int main(){
    int jog[5]= {185, 201, 188, 195, 176};
    int ele;
    cout<<"ate qual elemento ?"<<"\n";
    cin>>ele;

    int media = (soma(jog, ele))/ele;
    int med2 = ((soma(jog, ele))*(soma(jog, ele)))/ele;
    printf("media : %d\n", media);
    int variancia = ((soma2(jog, ele))-med2)/ele-1;
    printf("variancia : %d\n", variancia);
    int despad = sqrt(variancia);
    printf("desvio padrao : %d\n",despad);
    for(int i=0;i<=4;i++){
    for(int j=0;j<=4;j++){
        if(jog[i]<jog[j]){
            float seg = jog[i];
            jog[i]=jog[j];
            jog[j]=seg;
        }
    }
   }
   for(int i=0;i<=4;i++){
    printf("pos[%d]: %d\n",i+1 , jog[i]);
    //cout<<jog[i]<<endl;
   }

}